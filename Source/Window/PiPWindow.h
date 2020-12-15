//
//  PiPWindow.h
//  PiPhone
//
//  Created by james.lee on 01.04.2019.
//  Copyright © 2019 Nocero Beguhe All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PiPWindow : UIWindow

@property (class, nonatomic, readonly) PiPWindow *shared;

- (void)startAnimating;
- (void)stopAnimating;

@end

NS_ASSUME_NONNULL_END
