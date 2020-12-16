//
//  PiPStashedView.h
//  PiPhone
//
//  Created by nocero.lee on 06.04.2019.
//  Copyright © 2019 Nocero Beguhe All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PiPStashedViewChevronState) {
    PiPStashedViewChevronStateNormal,
    PiPStashedViewChevronStateInteractable
};

typedef NS_ENUM(NSUInteger, PiPStashedViewPosition) {
    PiPStashedViewPositionLeft,
    PiPStashedViewPositionRight
};

NS_ASSUME_NONNULL_BEGIN

@interface PiPStashedView : UIView

@property (nonatomic) PiPStashedViewPosition poition;
@property (nonatomic) PiPStashedViewChevronState chevronState;
@property (nonatomic) BOOL visible;

- (void)setChevronState:(PiPStashedViewChevronState)chevronState animated:(BOOL)flag;

@end

NS_ASSUME_NONNULL_END
