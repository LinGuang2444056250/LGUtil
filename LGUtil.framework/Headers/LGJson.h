//
//  LGJson.h
//  MicroCityProgram
//
//  Created by linguang on 14-10-12.
//  Copyright (c) 2014年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	JSON 解析类
 */
@interface LGJson : NSObject

/**
 *  @author linguang, 16-06-01 16:06:45
 *
 *  @brief 解析json
 *
 *  @param json json数据
 *
 *  @return 解析完成之后的object 类
 */
+ (id)jsonObjectWithJson:(id)json;

/**
 转换为json数据

 @param obj 待转换的
 @return json数据
 */
+ (NSData *)jsonDataWithObject:(id)obj;

@end
