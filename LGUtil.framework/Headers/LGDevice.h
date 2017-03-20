//
//  LGDevice.h
//  LGUtil
//
//  Created by linguang on 16/5/30.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LGMacro.h"

@interface LGDevice : NSObject

/**
 *  @author linguang, 16-05-30 14:05:08
 *
 *  @brief 当前平台 iPhone1,1
 *
 *  @return 返回如iPhone8,2的结果
 */
+ (NSString *)platform;

/**
 *  @author linguang, 16-05-30 14:05:02
 *
 *  @brief 当前平台描述
 *
 *  @return 返回如 iPhone 6s plus的结果
 */
+ (NSString *)platformDescription;

/**
 *  @author linguang, 16-07-21 16:07:28
 *
 *  @brief 通过常用数值，计算出不同宽度屏幕对应的数值
 *
 *  @param defaultFloat 常用数值
 *
 *  @return 实际数
 */
LG_EXTERN CGFloat LGDeviceFloat(CGFloat defaultFloat);

@end
