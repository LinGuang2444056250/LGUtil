//
//  LGCDDeviceManagerProximitySensorDelegate.h
//  AisenYun
//
//  Created by amin on 16/1/10.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LGCDDeviceManagerProximitySensorDelegate <NSObject>

/**
 *  @author amin, 16-01-10 13:01:13
 *
 *  @brief 当手机靠近耳朵或者离开耳朵的回调方法
 *
 *  @param isCloseToUser YES为靠近了用户，NO为远离了用户
 */
- (void)proximitySensorChanged:(BOOL)isCloseToUser;

@end
