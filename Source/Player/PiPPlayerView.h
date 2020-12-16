//
//  PiPPlayerView.h
//  PiPhone
//
//  Created by nocero.beguhe on 02.04.2019.
//  Copyright © 2019 Nocero Beguhe All rights reserved.
//

#import <AVKit/AVKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PiPPlayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

@end

NS_ASSUME_NONNULL_END
