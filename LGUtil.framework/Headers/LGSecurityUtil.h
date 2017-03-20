//
//  LGSecurityUtil.h
//  LGUtil
//
//  Created by linguang on 15/6/3.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGSecurityUtil : NSObject

#pragma mark - base64

//编码
+ (NSString *)stringByDataBase64EncodingWithData:(NSData *)_data;

//解码
+ (NSData *)dataByDataBase64DecodingWithString:(NSString *)_string;

#pragma mark - AES加密

//加字符转换成带密码的data
+ (NSData *)encryptAESData:(NSString *)string app_key:(NSString *)key;
//将带密码的data转成string
+ (NSString *)decryptAESData:(NSData *)data app_key:(NSString *)key;

@end
