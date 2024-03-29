//
//  UIImage+PiPhone.m
//  PiPhone
//
//  Created by nocero.beguhe on 05.04.2019.
//  Copyright © 2019 Dung Kim Nguyen All rights reserved.
//

#import "UIImage+PiPhone.h"
#import "PiPManager.h"

@implementation UIImage (PiPhone)

+ (NSBundle *)PiPBundle {
    static NSBundle *bundle = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        bundle = [NSBundle bundleForClass:PiPManager.class];
    });
    return bundle;
}

+ (UIImage *)bundleImageNamed:(NSString *)name {
    return [UIImage imageNamed:name inBundle:[self PiPBundle] compatibleWithTraitCollection:nil];
}

@end
