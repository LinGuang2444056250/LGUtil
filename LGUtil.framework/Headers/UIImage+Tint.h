//
//  UIImage+Tint.h
//  MicroCityProgram
//
//  Created by huadong on 14-11-6.
//  Copyright (c) 2014年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Tint)

- (UIImage *)imageWithTintColor:(UIColor *)tintColor;

- (UIImage *)imageWithGradientTintColor:(UIColor *)tintColor;

- (UIImage *)imageWithTintColor:(UIColor *)tintColor blendMode:(CGBlendMode)blendMode;

@end
