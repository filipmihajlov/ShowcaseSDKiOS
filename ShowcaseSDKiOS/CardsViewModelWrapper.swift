//
//  CardsViewModelWrapper.swift
//  ShowcaseSDKiOS
//
//  Created by Filip Mihajlov on 18.11.25.
//

import SwiftUI
import Combine
import CardKitShared   // your KMP framework/module (name may differ)

extension CardsScreen {

    @MainActor
    class CardsViewModelWrapper: ObservableObject {

        private let cardsViewModel: CardsViewModel

        @Published var state: CardsUiState

        private var pollTask: Task<Void, Never>?

        init() {
            // Manual DI for now (like createCardKit on Android)
            let repository = InMemoryBusinessCardRepository()
            let cameraController = CameraController()

            // Kotlin function types → Swift bridge (no default args on the Swift side)
            let timeProvider: () -> KotlinLong = {
                // currentTimeMillis in Swift
                let ms = Int64(Date().timeIntervalSince1970 * 1000)
                return KotlinLong(value: ms)
            }
            let idProvider: () -> String = {
                UUID().uuidString
            }

            let cardKit = CardKit(
                repository: repository,
                cameraController: cameraController,
                timeProvider: timeProvider,
                idProvider: idProvider
            )

            self.cardsViewModel = CardsViewModel(cardKit: cardKit)

            // initial snapshot – uiState.value is bridged as Any?
            self.state = cardsViewModel.uiState.value as! CardsUiState

            // No SKIE here → simple polling loop on the StateFlow.value
            pollTask = Task {
                while !Task.isCancelled {
                    if let newState = self.cardsViewModel.uiState.value as? CardsUiState {
                        // we’re @MainActor already, but be explicit
                        await MainActor.run {
                            self.state = newState
                        }
                    }
                    // poll every 300ms – fine for a demo
                    try? await Task.sleep(nanoseconds: 300_000_000)
                }
            }
        }

        deinit {
            pollTask?.cancel()
        }

        // MARK: - Intents forwarded to shared VM

        func onScanClicked() {
            cardsViewModel.onScanClicked()
        }

        func onDeleteCard(id: String) {
            cardsViewModel.onDeleteCardClicked(id: id)
        }

        func onDeletePhoto(id: String) {
            cardsViewModel.onDeletePhotoClicked(id: id)
        }

        func onPhotoCaptured(id: String) {
            cardsViewModel.onPhotoCaptured(photoId: id)
        }
    }
}
