//
//  NSURL+LGCommon.h
//  LGUtil
//
//  Created by linguang on 2017/3/8.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (LGCommon)

/**
 UTF8编码转换为NSURL

 @param URLString urlString
 @return NSURL
 */
+ (NSURL *)lgURLWithString:(NSString *)URLString;

@end
