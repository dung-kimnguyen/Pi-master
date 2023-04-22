//
//  PiPPlayerView.m
//  PiPhone
//
//  Created by nocero.beguhe on 02.04.2019.
//  Copyright © 2019 Dung Kim Nguyen All rights reserved.
//

#import "PiPPlayerView.h"

@implementation PiPPlayerView

+ (Class)layerClass {
    return AVPlayerLayer.class;
}

- (AVPlayerLayer *)playerLayer {
    return (AVPlayerLayer *)self.layer;
}

@end
