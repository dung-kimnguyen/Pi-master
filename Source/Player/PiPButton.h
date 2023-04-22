//
//  PiPButton.h
//  PiPhone
//
//  Created by nocero.beguhe on 03.04.2019.
//  Copyright © 2019 Dung Kim Nguyen All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PiPButton : UIControl

@property (nonatomic, nullable) UIImage *backgroundImage;
@property (nonatomic, nullable) UIImage *image;

@property (nonatomic, nullable) UIImage *selectedBackgroundImage;
@property (nonatomic, nullable) UIImage *selectedImage;

@end

NS_ASSUME_NONNULL_END
