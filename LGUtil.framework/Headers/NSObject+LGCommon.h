//
//  NSObject+LGCommon.h
//  LGUtil
//
//  Created by linguang on 16/8/25.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (LGCommon)

#pragma mark - http request

/**
 在该类中添加一个请求id

 @param requestId 请求id
 */
- (void)addRequestUUID:(NSString *)requestId;

/**
 清空并且停止所有的请求id
 */
- (void)clearAndStopAllRequestUUID;

/**
 清空并且停止对应的请求id

 @param requestId 清除的请求id
 */
- (void)clearRequestUUID:(NSString *)requestId;


#pragma mark - other


@end
