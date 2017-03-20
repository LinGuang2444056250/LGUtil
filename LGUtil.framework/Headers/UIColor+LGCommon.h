//
//  UIColor+LGCommon.h
//  LGUtil
//
//  Created by linguang on 15/11/12.
//  Copyright © 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (LGCommon)

/**
 *  @author linguang, 16-06-02 18:06:32
 *
 *  @brief 随机颜色
 *
 *  @return 返回随机颜色值
 */
+ (UIColor *)randomColor;

/**
 *  @author linguang, 16-06-02 18:06:55
 *
 *  @brief 转换有透明度的hex颜色
 *
 *  @param hexValue hex颜色
 *  @param alpha    透明度
 *
 *  @return 转出的UIColor对象
 */
+ (UIColor *)colorWithLGHex:(int)hexValue alpha:(CGFloat)alpha;

/**
 *  @author linguang, 16-06-02 18:06:55
 *
 *  @brief 转换无透明度的hex颜色
 *
 *  @param hexValue hex颜色
 *
 *  @return 转出的UIColor对象
 */
+ (UIColor *)colorWithLGHex:(int)hexValue;

/**
 *	@brief	通过颜色字符串转换为颜色
 *
 *	@param 	colorString 	颜色字符串
 *
 *	@return	对应的颜色
 */
+ (UIColor *)colorWithColorString:(NSString *)colorString;

/**
 *	@brief	通过颜色转换为颜色字符串
 *
 *	@param 	color 	转换的颜色
 *
 *	@return	转换之后的字符串
 */
+ (NSString *)colorStringWithColor:(UIColor *)color;

@end
