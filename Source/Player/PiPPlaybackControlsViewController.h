//
//  PiPPlaybackControlsViewController.h
//  PiPhone
//
//  Created by james.lee on 03.04.2019.
//  Copyright © 2019 james.lee. All rights reserved.
//

#import <AVKit/AVKit.h>

@class PiPPlayerLayerObserver;
@class PiPRoundedButton;

NS_ASSUME_NONNULL_BEGIN

@interface PiPPlaybackControlsViewController : UIViewController

@property (nonatomic, readonly) PiPPlayerLayerObserver *playerLayerObserver;
@property (nonatomic) BOOL hidden;

@property (nonatomic, readonly) UIControl *restoreButton;
@property (nonatomic, readonly) UIControl *playPauseButton;
@property (nonatomic, readonly) UIControl *closeButton;

- (instancetype)initWithPlayerLayerObserver:(PiPPlayerLayerObserver *)playerLayerObserver;

- (void)toggleVisibility;

@end

NS_ASSUME_NONNULL_END
