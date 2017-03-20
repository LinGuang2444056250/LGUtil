//
//  NSDate+LGCommon.h
//  LGUtil
//
//  Created by linguang on 16/8/17.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

//常用的秒数
#define LG_MINUTE 60
#define LG_HOUR   3600
#define LG_DAY    86400
#define LG_WEEK   604800
#define LG_YEAR   31556926

@interface NSDate (LGCommon)

#pragma mark - 常用

/**
 *  @author linguang, 16-09-02 15:09:31
 *
 *  @brief 当前日期的明天
 *
 *  @return 当前日期的明天
 */
- (NSDate *)tomorrowDate;

/**
 *  @author linguang, 16-08-17 17:08:51
 *
 *  @brief 当前时间到1970的毫秒数(因为java中需要的是毫秒数)
 *
 *  @return 毫秒数间隔
 */
- (double)timeIntervalSince1970InMilliSecond;

/**
 *  @author linguang, 16-08-17 17:08:48
 *
 *  @brief 通过到1970的毫秒数计算时间
 *
 *  @param timeIntervalInMilliSecond 毫秒数间隔
 *
 *  @return 时间
 */
+ (NSDate *)dateWithTimeIntervalInMilliSecondSince1970:(double)timeIntervalInMilliSecond;

#pragma mark - 日期描述

/**
 *  @author linguang, 16-09-05 18:09:37
 *
 *  @brief 间隔描述，几分钟前，几小时前
 *
 *  @return 描述
 */
- (NSString *)timerIntervalDescription;

/**
 *  @author linguang, 16-09-05 14:09:19
 *
 *  @brief 标准日期
 *
 *  @return 标准日期描述
 */
- (NSString *)formattedTime;

/**
 *  @author linguang, 16-09-05 14:09:22
 *
 *  @brief 格式化日期描述
 *
 *  @param timeInterval 到1970的毫秒数
 *
 *  @return 日期描述
 */
+ (NSString *)formattedTimeFromMilliSecondInterval:(long long)timeInterval;

#pragma mark - Retrieving Intervals

/**
 *  @author linguang, 16-09-05 17:09:12
 *
 *  @brief 当前时间比目标时间晚(多)多少分钟
 *
 *  @param aDate 目标时间
 *
 *  @return 分钟数
 */
- (NSInteger)minutesAfterDate:(NSDate *)aDate;

/**
 *  @author linguang, 16-09-05 17:09:12
 *
 *  @brief 当前时间比目标时间早(少)多少分钟
 *
 *  @param aDate 目标时间
 *
 *  @return 分钟数
 */
- (NSInteger)minutesBeforeDate:(NSDate *)aDate;

/**
 *  @author linguang, 16-09-05 17:09:12
 *
 *  @brief 当前时间比目标时间晚(多)多少小时
 *
 *  @param aDate 目标时间
 *
 *  @return 小时数
 */
- (NSInteger)hoursAfterDate:(NSDate *)aDate;

/**
 *  @author linguang, 16-09-05 17:09:12
 *
 *  @brief 当前时间比目标时间早(少)多少小时
 *
 *  @param aDate 目标时间
 *
 *  @return 小时数
 */
- (NSInteger)hoursBeforeDate:(NSDate *)aDate;

/**
 *  @author linguang, 16-09-05 17:09:12
 *
 *  @brief 当前时间比目标时间晚(多)多少天
 *
 *  @param aDate 目标时间
 *
 *  @return 天数
 */
- (NSInteger)daysAfterDate:(NSDate *)aDate;

/**
 *  @author linguang, 16-09-05 17:09:12
 *
 *  @brief 当前时间比目标时间早(少)多少天
 *
 *  @param aDate 目标时间
 *
 *  @return 天数
 */
- (NSInteger)daysBeforeDate:(NSDate *)aDate;


@end
