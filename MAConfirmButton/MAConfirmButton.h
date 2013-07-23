//
//  MAConfirmButton.h
//
//  Created by Mike on 11-03-28.
//  Copyright 2011 Mike Ahmarani. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@class MAConfirmButtonOverlay;

typedef enum {
  MAConfirmButtonToggleAnimationLeft,
  MAConfirmButtonToggleAnimationRight,
  MAConfirmButtonToggleAnimationCenter
} MAConfirmButtonToggleAnimation;

@interface MAConfirmButton : UIButton 

@property (nonatomic, assign) MAConfirmButtonToggleAnimation toggleAnimation;
@property (nonatomic, assign) BOOL isSelected;

+ (MAConfirmButton *)buttonWithTitle:(NSString *)titleString confirm:(NSString *)confirmString;
+ (MAConfirmButton *)buttonWithDisabledTitle:(NSString *)disabledString;
- (id)initWithTitle:(NSString *)titleString confirm:(NSString *)confirmString;
- (id)initWithDisabledTitle:(NSString *)disabledString;
- (void)disableWithTitle:(NSString *)disabledString;
- (void)setAnchor:(CGPoint)anchor;
- (void)setTintColor:(UIColor *)color;

@end
