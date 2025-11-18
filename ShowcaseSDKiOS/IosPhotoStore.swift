//
//  IosPhotoStore.swift
//  ShowcaseSDKiOS
//
//  Created by Filip Mihajlov on 18.11.25.
//

import UIKit

final class IosPhotoStore {
    static let shared = IosPhotoStore()

    private var storage: [String: UIImage] = [:]

    private init() {}

    func set(image: UIImage, for id: String) {
        storage[id] = image
    }

    func image(for id: String) -> UIImage? {
        storage[id]
    }

    func remove(id: String) {
        storage.removeValue(forKey: id)
    }
}
