//
//  LGCDDeviceManager+Microphone.h
//  AisenYun
//
//  Created by amin on 16/1/10.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import "LGCDDeviceManagerBase.h"
#import <Foundation/Foundation.h>

@interface LGCDDeviceManager (Microphone)

/**
 *  @author amin, 16-01-10 15:01:24
 *
 *  @brief 判断当前麦克风是否可用
 *
 *  @return YES为可以使用，NO为不可以
 */
- (BOOL)lgCheckMicrophoneAvailability;

/**
 *  @author amin, 16-01-10 15:01:43
 *
 *  @brief 获取录制音频时的音量(0-1)
 *
 *  @return 音量（0-1）
 */
- (double)lgPeekRecorderVoiceMeter;

@end
