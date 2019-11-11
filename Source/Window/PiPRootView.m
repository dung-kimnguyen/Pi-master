//
//  PiPRootView.m
//  PiPhone
//
//  Created by james.lee on 01.04.2019.
//  Copyright © 2019 james.lee. All rights reserved.
//

#import "PiPRootView.h"

@implementation PiPRootView

- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *hitView = [super hitTest:point withEvent:event];
    
    return hitView == self ? nil : hitView;
}

@end
