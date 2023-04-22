//
//  PiPRootView.m
//  PiPhone
//
//  Created by nocero.beguhe on 01.04.2019.
//  Copyright © 2019 Dung Kim Nguyen All rights reserved.
//

#import "PiPRootView.h"

@implementation PiPRootView

- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *hitView = [super hitTest:point withEvent:event];
    
    return hitView == self ? nil : hitView;
}

@end
