//
//  LGSystemConversion.h
//  LGUtil
//
//  Created by linguang on 2016/12/1.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	进制转换
 */
@interface LGSystemConversion : NSObject

/**
 十进制转换为二进制，前面没有补位数

 @param decimal 待转换十进制
 @return 二进制字符串
 */
- (NSString *)binaryStringFromDecimalString:(NSString *)decimal;

/**
 二进制转换为十进制

 @param binaryString 待转换二进制
 @return 十进制字符串
 */
- (NSString *)decimalStringFromBinaryString:(NSString *)binaryString;

@end
