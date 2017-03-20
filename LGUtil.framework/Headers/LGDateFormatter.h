//
//  LGDateFormatter.h
//  LGUtil
//
//  Created by linguang on 16/7/26.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGDateFormatter : NSDateFormatter

/**
 *	@brief	当前日期格式单例
 *
 *	@return	日期格式
 */
+ (instancetype)sharedDateFormatter;

@end
