//
//  UIImage+ImageEffects.h
//  MicroCityProgram
//
//  Created by huadong on 14-10-14.
//  Copyright (c) 2014年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageEffects)

- (UIImage *)imageLightEffect;

- (UIImage *)imageExtraLightEffect;

- (UIImage *)imageDarkEffect;

- (UIImage *)imageTintEffectWithColor:(UIColor *)tintColor;

- (UIImage *)imageBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;
@end
