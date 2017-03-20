//
//  NSString+LGCommon.h
//  LGUtil
//
//  Created by linguang on 16/5/27.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface NSString (LGCommon)

#pragma mark - 随机标识符

/**
 *  @author linguang, 16-05-30 13:05:57
 *
 *  @brief 获得一个随机的32位唯一标识符
 *
 *  @return 32位唯一标识符
 */
+ (NSString *)LGRandomUUID;

#pragma mark - 验证格式

/**
 *  @author linguang, 16-05-31 14:05:38
 *
 *  @brief 判断邮箱格式是否正确
 *
 *  @return YES为正确
 */
- (BOOL)isValidateEmail;

/**
 *  @author linguang, 16-05-31 14:05:19
 *
 *  @brief 判断手机号是否正确
 *
 *  @return YES为正确
 */
- (BOOL)isValidateMobiePhone;

/**
 是否精确判断手机号是否正确

 @param exact 是否精确
 @return YES为正确
 */
- (BOOL)isValidateMobiePhoneWithExact:(BOOL)exact;

/**
 验证是否只是数字

 @return YES为只是数字
 */
- (BOOL)isValidateNumber;

/**
 *  @author linguang, 16-05-31 14:05:14
 *
 *  @brief 验证字母数字是否正确 a-zA-Z0-9
 *
 *  @return YES为正确
 */
- (BOOL)isValidateNumberOrLetter;

/**
 验证数字，小写字母，大写字母

 @param validateNumber 是否允许数字
 @param validateLowerCaseLetter 是否允许小写字母
 @param validateCapitalLetter 是否允许大写字母
 @return YES验证通过
 */
- (BOOL)isValidateNumber:(BOOL)validateNumber
 validateLowerCaseLetter:(BOOL)validateLowerCaseLetter
   validateCapitalLetter:(BOOL)validateCapitalLetter;

/**
 *  @author linguang, 16-05-31 17:05:00
 *
 *  @brief 验证是否含有中文
 *
 *  @return YES为有
 */
- (BOOL)isValidateChinese;

#pragma mark - 字符拼接，拆分

/**
 *  @author linguang, 16-05-31 17:05:28
 *
 *  @brief 将字符串通过间隔符拆分出来
 *
 *  @param intervalString 区分字符
 *
 *  @return 拆分出来的字符串
 */
- (NSArray *)splitArrayWithIntervalString:(NSString *)intervalString;

/**
 *  @author linguang, 16-05-31 17:05:51
 *
 *  @brief 把数组中的每个字符串通过间隔字符组合起来
 *
 *  @param combinateArray 由字符串构成的数组
 *  @param intervalString 间隔符
 *
 *  @return 拼接之后的字符串
 */
+ (NSString *)combinatedStringWithStringArray:(NSArray *)combinateArray intervalString:(NSString *)intervalString;

#pragma mark - html 处理

/**
 *  @author linguang, 16-05-31 19:05:03
 *
 *  @brief 判断是否包含html代码
 *
 *  @return YES为包含
 */
- (BOOL)judgeIsHtmlCode;

/**
 *  @author linguang, 16-05-31 19:05:24
 *
 *  @brief 移除所有Html标签
 *
 *  @param isTrim 是否截掉空白
 *
 *  @return 移除之后的字符串
 */
- (NSString *)removeFlattenHtmlCodeWithTrimWhiteSpace:(BOOL)isTrim;

#pragma mark - 扩展方法

/**
 转换为拼音

 @return 拼音字符串
 */
- (NSString *)transformPinyin;

/**
 *  @author linguang, 16-05-31 17:05:33
 *
 *  @brief 加密为32位的MD5值
 *
 *  @return 加密完成后的MD5
 */
- (NSString *)encryptMd5_32BitString;

/**
 *  @author linguang, 16-08-26 14:08:26
 *
 *  @brief 添加UTF8转码
 *
 *  @return 转码之后的字符串
 */
- (NSString *)lgStringByAddUTF8Encode;

/**
 *  @author linguang, 16-05-31 17:05:04
 *
 *  @brief 精确比较两个字符串，区分大小写
 *
 *  @param aString 目标字符串
 *
 *  @return YES为相同
 */
- (BOOL)isExactEqualToString:(NSString *)aString;

/**
 *  @author linguang, 16-05-31 19:05:32
 *
 *  @brief 替换字符串
 *
 *  @param targetString  目标字符串
 *  @param replaceString 替换字符串
 *
 *  @return 替换完成的字符串
 */
- (NSString *)replaceStringWithTargetString:(NSString *)targetString replaceString:(NSString *)replaceString;

/**
 *  @author linguang, 16-06-01 15:06:21
 *
 *  @brief 计算文字所占的宽高
 *
 *  @param font 文字字体
 *
 *  @return 文字Size
 */
- (CGSize)lgSizeWithFont:(UIFont *)font;

/**
 *  @author linguang, 16-06-01 15:06:40
 *
 *  @brief 计算文字所占的宽高
 *
 *  @param font          文字字体
 *  @param size          文字最大的尺寸
 *  @param lineBreakMode 换行方式
 *
 *  @return 计算成功的size
 */
- (CGSize)lgSizeWithFont:(UIFont *)font contrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;

/**
 *  @author linguang, 16-06-01 15:06:26
 *
 *  @brief 以点绘制的文字所占的宽高
 *
 *  @param point      绘制点
 *  @param font       字体
 *  @param attributes 其他属性
 *
 *  @return 绘制完成的size
 */
- (CGSize)lgDrawAtPoint:(CGPoint)point font:(UIFont *)font textAttributes:(NSDictionary *)attributes;

@end
