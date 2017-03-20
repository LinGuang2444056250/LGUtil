//
//  LGCDDeviceManager+Remind.h
//  AisenYun
//
//  Created by amin on 16/1/10.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import "LGCDDeviceManagerBase.h"
#import <AudioToolbox/AudioToolbox.h>
#import <Foundation/Foundation.h>

@interface LGCDDeviceManager (Remind)

/**
 *  @author amin, 16-01-10 14:01:05
 *
 *  @brief 播放收到新消息的声音
 *
 *  @return 声音id
 */
- (SystemSoundID)playNewMessageSound;

/**
 *  @author amin, 16-01-10 14:01:04
 *
 *  @brief 震动
 */
- (void)playVibration;

@end
