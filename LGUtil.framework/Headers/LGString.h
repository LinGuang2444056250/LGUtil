//
//  LGString.h
//  LGUtil
//
//  Created by linguang on 16/8/25.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGString : NSObject

#pragma mark - 空字符处理

/**
 *  @author linguang, 16-05-30 13:05:38
 *
 *  @brief 判断字符串是否为空
 *
 *  @return YES为空，NO不为空
 */
+ (BOOL)judgeIsNull:(NSString *)str;

/**
 *  @author linguang, 16-05-30 15:05:33
 *
 *  @brief 修复为空的字符串
 *
 *  @return 如果为空返回空字符串
 */
+ (NSString *)stringByFixNull:(NSString *)str;

/**
 *  @author linguang, 16-05-30 17:05:53
 *
 *  @brief 修复为空的字符串，为空时返回defaultString
 *
 *  @param defaultStr 为空时返回的字符串
 *
 *  @return 返回的字符串
 */
+ (NSString *)stringByFixNull:(NSString *)str defaultString:(NSString *)defaultStr;

#pragma mark - 提取数值

/**
 从字符中提取double数

 @param obj 字符串
 @return double数值
 */
+ (double)doubleValue:(id)obj;

/**
 从字符中提取float数
 
 @param obj 字符串
 @return float数值
 */
+ (float)floatValue:(id)obj;

/**
 从字符中提取int数
 
 @param obj 字符串
 @return int数值
 */
+ (int)intValue:(id)obj;

/**
 从字符中提取integer数
 
 @param obj 字符串
 @return integer数值
 */
+ (NSInteger)integerValue:(id)obj;

/**
 从字符中提取unsignedInteger数
 
 @param obj 字符串
 @return unsignedInteger数值
 */
+ (NSUInteger)unsignedIntegerValue:(id)obj;

/**
 从字符中提取longLong数
 
 @param obj 字符串
 @return longLong数值
 */
+ (long long)longLongValue:(id)obj;

/**
 从字符中提取bool数
 
 @param obj 字符串
 @return bool数值
 */
+ (BOOL)boolValue:(id)obj;

@end
