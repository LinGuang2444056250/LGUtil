//
//  LGRequestCache.h
//  LGUtil
//
//  Created by linguang on 16/8/26.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGRequestCache : NSObject

/**
 *  @author linguang, 16-08-26 14:08:54
 *
 *  @brief 保存缓存数据
 *
 *  @param requestObject  保存的Object
 *  @param urlString      保存的urlString
 *  @param postDictionary 提交的字典
 */
+ (void)saveRequestObject:(id)requestObject urlString:(NSString *)urlString postDictionary:(NSDictionary *)postDictionary;

/**
 *  @author linguang, 16-08-26 14:08:39
 *
 *  @brief 获取到保存的缓存数据
 *
 *  @param urlString      保存的urlString
 *  @param postDictionary 提交的字典
 *
 *  @return 缓存的数据
 */
+ (id)requestObjectWithUrlString:(NSString *)urlString postDictionary:(NSDictionary *)postDictionary;

@end
