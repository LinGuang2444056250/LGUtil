//
//  LGDate.h
//  LGUtil
//
//  Created by linguang on 16/7/26.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	日期转换，新增单例
 G: 公元时代，例如AD公元  
 yy: 年的后2位
 yyyy: 完整年
 MM: 月，显示为1-12
 MMM: 月，显示为英文月份简写,如 Jan
 MMMM: 月，显示为英文月份全称，如 Janualy
 dd: 日，2位数表示，如02
 d: 日，1-2位显示，如 2
 EEE: 简写星期几，如Sun
 EEEE: 全写星期几，如Sunday
 aa: 上下午，AM/PM
 H: 时，24小时制，0-23
 K：时，12小时制，0-11
 m: 分，1-2位
 mm: 分，2位
 s: 秒，1-2位
 ss: 秒，2位
 S: 毫秒
 常用日期结构：
 yyyy-MM-dd HH:mm:ss.SSS
 yyyy-MM-dd HH:mm:ss
 yyyy-MM-dd
 MM dd yyyy
 */
@interface LGDate : NSObject

/**
 *  @author linguang, 16-07-26 15:07:58
 *
 *  @brief 转换日期字符串为日期
 *
 *  @param dateString  日期字符串
 *  @param dateFormat  日期格式
 *
 *  @return 转换之后的日期
 */
+ (NSDate *)convertDateFromString:(NSString *)dateString dateFormat:(NSString *)dateFormat;

/**
 *  @author linguang, 16-07-26 16:07:49
 *
 *  @brief 转换日期为日期字符
 *
 *  @param date       日期
 *  @param dateFormat 日期格式
 *
 *  @return 日期字符串
 */
+ (NSString *)convertStringFromDate:(NSDate *)date dateFormat:(NSString *)dateFormat;

/**
 *  @author linguang, 16-07-26 16:07:24
 *
 *  @brief 将一种固定格式的日期字符串转换为另一种格式的日期字符串
 *
 *  @param dateString        转换的日期字符串
 *  @param stringDateFormat  转换的日期字符串的格式
 *  @param convertDateFormat 需要转换的格式
 *
 *  @return 转换完成的字符串
 */
+ (NSString *)convertStringFromString:(NSString *)dateString stringDateFormat:(NSString *)stringDateFormat convertDateFormat:(NSString *)convertDateFormat;

@end
