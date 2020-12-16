//
//  PiPRootViewController.h
//  PiPhone
//
//  Created by nocero.beguhe on 01.04.2019.
//  Copyright © 2019 Nocero Beguhe All rights reserved.
//

#import <UIKit/UIKit.h>

@class PiPPictureInPictureController;
typedef NS_ENUM(NSInteger, PiPManagerContentInsetAdjustmentBehavior);

NS_ASSUME_NONNULL_BEGIN

@interface PiPRootViewController : UIViewController

@property (class, nonatomic, readonly) PiPRootViewController *shared;

@property (nonatomic) UIEdgeInsets additionalContentInsets;
@property (nonatomic) PiPManagerContentInsetAdjustmentBehavior contentInsetAdjustmentBehavior;
@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;

@end

NS_ASSUME_NONNULL_END
