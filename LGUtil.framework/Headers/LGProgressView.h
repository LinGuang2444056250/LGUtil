//
//  LGProgressView.h
//  AisenYun
//
//  Created by linguang on 16/1/19.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

@interface LGProgressView : UIView

@property (nonatomic, retain) UIColor *progressTintColor; /**< 颜色 */
@property (nonatomic, retain) UIColor *borderTintColor; /**< 边框颜色 */
@property (nonatomic, assign) CGFloat progres; /**< 进度 */

- (void)setProgress:(CGFloat)progress animated:(BOOL)animated;

@end
