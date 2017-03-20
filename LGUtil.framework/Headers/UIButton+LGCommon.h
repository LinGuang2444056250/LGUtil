//
//  UIButton+LGCommon.h
//  MicroCityProgram
//
//  Created by huadong on 15/1/8.
//  Copyright (c) 2015年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (LGCommon)

/**
 *  @author linguang, 16-06-02 17:06:16
 *
 *  @brief 增加button点击范围
 *
 *  @param aTop    顶部增加范围
 *  @param aRight  右边增加范围
 *  @param aBottom 底部增加范围
 *  @param aLeft   左边增加方位
 */
- (void)setEnlargeEdgeWithTop:(CGFloat)aTop right:(CGFloat)aRight bottom:(CGFloat)aBottom left:(CGFloat)aLeft;

/**
 设置点击背景颜色

 @param color 颜色
 @param state 状态
 */
- (void)setBackgroundColor:(UIColor *)color forState:(UIControlState)state;

@end
