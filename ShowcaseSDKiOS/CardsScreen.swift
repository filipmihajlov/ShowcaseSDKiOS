//
//  CardsScreen.swift
//  ShowcaseSDKiOS
//
//  Created by Filip Mihajlov on 18.11.25.
//

import SwiftUI
import UIKit
import CardKitShared   // your KMP framework/module

struct CardsScreen: View {
    @StateObject private var vm = CardsViewModelWrapper()

    @State private var showingCamera = false
    @State private var capturedImage: UIImage?

    var body: some View {
        NavigationView {
            ZStack {
                content

                if vm.state.isLoading {
                    ProgressView()
                }

                if let err = vm.state.error {
                    Text(err)
                        .foregroundColor(.red)
                        .padding()
                        .background(Color(.systemBackground))
                        .cornerRadius(8)
                        .padding(.bottom, 32)
                        .frame(maxHeight: .infinity, alignment: .bottom)
                }
            }
            .navigationTitle("CardKit demo")
            .toolbar {
                ToolbarItem(placement: .bottomBar) {
                    HStack {
                        // 1) SDK fake card, same as Android FAB "Add"
                        Button(action: {
                            vm.onScanClicked()
                        }) {
                            Label("SDK card", systemImage: "plus")
                        }

                        Spacer()

                        // 2) Native iOS camera -> PhotoCard
                        Button(action: {
                            showingCamera = true
                        }) {
                            Label("Photo", systemImage: "camera")
                        }
                    }
                }
            }

            .sheet(isPresented: $showingCamera) {
                CameraView(image: $capturedImage)
                    .onDisappear {
                        if let img = capturedImage {
                            let id = UUID().uuidString
                            IosPhotoStore.shared.set(image: img, for: id)
                            vm.onPhotoCaptured(id: id)
                            capturedImage = nil
                        }
                    }
            }
        }
    }

    @ViewBuilder
    private var content: some View {
        let state = vm.state

        if state.cards.isEmpty && state.photoCards.isEmpty && !state.isLoading {
            Text("No cards yet. Tap + to scan one.")
                .multilineTextAlignment(.center)
        } else {
            List {
                ForEach(state.cards, id: \.id) { card in
                    BusinessCardRow(card: card) {
                        vm.onDeleteCard(id: card.id)
                    }
                }

                ForEach(state.photoCards, id: \.id) { photo in
                    PhotoCardRow(photo: photo) {
                        vm.onDeletePhoto(id: photo.id)
                    }
                }
            }
        }
    }
}

struct BusinessCardRow: View {
    let card: CardListItem
    let onDelete: () -> Void

    var body: some View {
        VStack(alignment: .leading, spacing: 4) {
            Text(card.title)
                .font(.headline)

            if let subtitle = card.subtitle {
                Text(subtitle)
                    .font(.subheadline)
            }

            if let contact = card.primaryContact {
                Text(contact)
                    .font(.footnote)
                    .foregroundColor(.blue)
            }

            HStack {
                Spacer()
                Button(role: .destructive, action: onDelete) {
                    Text("Delete")
                }
                .font(.footnote)
            }
        }
        .padding(.vertical, 8)
    }
}

struct PhotoCardRow: View {
    let photo: PhotoCard
    let onDelete: () -> Void

    var body: some View {
        let image = IosPhotoStore.shared.image(for: photo.id)

        VStack(alignment: .leading, spacing: 8) {
            Text("Photo card")
                .font(.headline)

            if let uiImage = image {
                Image(uiImage: uiImage)
                    .resizable()
                    .aspectRatio(contentMode: .fill)
                    .frame(maxWidth: .infinity, minHeight: 160, maxHeight: 160)
                    .clipped()
                    .cornerRadius(8)
            } else {
                Text("Image missing (RAM cleared)")
                    .font(.footnote)
                    .foregroundColor(.secondary)
            }

            HStack {
                Spacer()
                Button(role: .destructive, action: onDelete) {
                    Text("Delete photo")
                }
                .font(.footnote)
            }
        }
        .padding(.vertical, 8)
    }
}
