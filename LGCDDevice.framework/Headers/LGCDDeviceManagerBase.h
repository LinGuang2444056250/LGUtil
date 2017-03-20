//
//  LGCDDeviceManagerBase.h
//  AisenYun
//
//  Created by amin on 16/1/10.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LGCDDeviceManagerDelegate.h"

@interface LGCDDeviceManager : NSObject
{
    // recorder
    NSDate              *_recorderStartDate;
    NSDate              *_recorderEndDate;
    NSString            *_currCategory;
    BOOL                _currActive;
    
    BOOL _isSupportProximitySensor; /**< 是否支持距离传感器 */
    BOOL _isCloseToUser; /**< 是否靠近耳朵 */
}

@property (nonatomic, assign) id<LGCDDeviceManagerDelegate> delegate; /**< cd设备代理 */

+ (instancetype)sharedCDDeviceManager;

@end
