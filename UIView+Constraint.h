//
//  UIView+Constraint.h
//  SwipeSheet
//
//  Created by Andrew Kovalenko.
//  Copyright © 2018 Andrew Kovalenko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Constraint)

- (void)addFullscreenView:(UIView *)view;

- (void)setOffsetsTo:(UIView *)view
             fromTop:(CGFloat)top
          fromBottom:(CGFloat)botto
            fromLeft:(CGFloat)left
           fromRight:(CGFloat)right;

@end
