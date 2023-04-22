//
//  PlayerView.swift
//  Example Swift
//
//  Created by nocero.beguhe on 11.04.2019.
//  Copyright © 2019 Dung Kim Nguyen All rights reserved.
//

import UIKit
import AVKit

class KekPlayerLayer: AVPlayerLayer {
    
    @objc func setPlaceholderContentLayerDuringPIPMode(_ contentLayer: CALayer) {
        print()
    }
    
}

class PlayerView: UIView {

    override class var layerClass: AnyClass {
        return AVPlayerLayer.self
    }
    
    var playerLayer: AVPlayerLayer {
        return layer as! AVPlayerLayer
    }

}
