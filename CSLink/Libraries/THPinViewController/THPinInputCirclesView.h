//
//  THPinInputCirclesView.h
//  THPinViewControllerExample
//
//  Created by Thomas Heß on 20.4.14.
//  Copyright (c) 2014 Thomas Heß. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "THPinViewControllerMacros.h"

typedef void (^THPinInputCirclesViewShakeCompletionBlock)(void);

@interface THPinInputCirclesView : UIView

@property (nonatomic, assign) NSUInteger pinLength;

- (instancetype)initWithPinLength:(NSUInteger)pinLength;

- (void)fillCircleAtPosition:(NSUInteger)position;
- (void)unfillCircleAtPosition:(NSUInteger)position;
- (void)unfillAllCircles;
- (void)shakeWithCompletion:(THPinInputCirclesViewShakeCompletionBlock)completion;

@end
