//
//  NSDictionary+LGCommon.h
//  LGUtil
//
//  Created by linguang on 2017/2/13.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (LGCommon)

/**
 安全取出key对应的字符串

 @param key 当前key
 @return 对应的字符串
 */
- (NSString *)lgStringForKey:(NSString *)key;

@end
