//
//  LGCDDeviceManager+ProximitySensor.h
//  AisenYun
//
//  Created by amin on 16/1/10.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import "LGCDDeviceManagerBase.h"
#import <Foundation/Foundation.h>

@interface LGCDDeviceManager (ProximitySensor)

@property (nonatomic, readonly) BOOL isSupportProximitySensor; /**< 是否支持距离传感器 */
@property (nonatomic, readonly) BOOL isCloseToUser; /**< 是否靠近耳朵 */
@property (nonatomic, readonly) BOOL isProximitySensorEnabled; /**< 是否激活距离传感器 */

/**
 *  @author amin, 16-01-10 17:01:43
 *
 *  @brief  允许距离传感器
 *
 *  @return YES为成功，NO为失败
 */
- (BOOL)enableProximitySensor;

/**
 *  @author amin, 16-01-10 17:01:26
 *
 *  @brief 关闭距离传感器
 *
 *  @return YES为成功关闭，NO为失败
 */
- (BOOL)disableProximitySensor;

/**
 *  @author amin, 16-01-10 17:01:51
 *
 *  @brief 距离传感器发生变化
 *
 *  @param notification 当前监听
 */
- (void)sensorStateChanged:(NSNotification *)notification;

@end
