//
//  LGCDDeviceManager+Media.h
//  AisenYun
//
//  Created by amin on 16/1/10.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LGCDDeviceManagerBase.h"

/**
 *	@brief	完成之后回调
 */
typedef void (^LGAudioCompletionWithErrorBlock)(NSError *error);

/**
 *  @author amin, 16-01-10 17:01:29
 *
 *  @brief 停止录音之后的回调用
 *
 *  @param recordPath 当前录音保存的路径
 *  @param aDuration  当前录音持续时间
 *  @param error      错误
 */
typedef void (^LGRecordingCompetionBlock)(NSString *recordPath, NSInteger aDuration, NSError *error);

@interface LGCDDeviceManager (Media)

#pragma mark - AudioPlayer

/**
 *  @author amin, 16-01-10 17:01:29
 *
 *  @brief 开始播放音频内容
 *
 *  @param aFilePath  文件路径
 *  @param completion 完成之后的回调，无错误则成功播放完成
 */
- (void)asyncPlayingWithPath:(NSString *)aFilePath
             completionBlock:(LGAudioCompletionWithErrorBlock)completion;

/**
 *  @author amin, 16-01-10 17:01:04
 *
 *  @brief 停止播放
 */
- (void)stopPlaying;

/**
 *  @author amin, 16-01-10 17:01:20
 *
 *  @brief 停止当前播放，且是否改变类别
 *
 *  @param isChange YES为改变
 */
- (void)stopPlayingWithChangeCategory:(BOOL)isChange;

/**
 *  @author amin, 16-01-10 17:01:44
 *
 *  @brief 当前是否在播放
 *
 *  @return YES为正在播放，NO不播放
 */
- (BOOL)isPlaying;

#pragma mark - AudioRecorder

/**
 *  @author amin, 16-01-10 17:01:54
 *
 *  @brief 开始录音
 *
 *  @param fileName   保存的文件名
 *  @param completion 录音是否发生错误的回调
 */
- (void)asyncStartRecordingWithFileName:(NSString *)fileName
                             completion:(LGAudioCompletionWithErrorBlock)completion;

/**
 *  @author amin, 16-01-10 17:01:16
 *
 *  @brief 停止录音
 *
 *  @param completion 录音停止之后的回到
 */
- (void)asyncStopRecordingWithCompetion:(LGRecordingCompetionBlock)completion;

/**
 *  @author amin, 16-01-10 17:01:08
 *
 *  @brief 取消当前录音
 */
- (void)cancelCurrentRecording;

/**
 *  @author amin, 16-01-10 17:01:54
 *
 *  @brief 当前是否正在录音
 *
 *  @return YES为正在录音
 */
- (BOOL)isRecording;

/**
 *  @author amin, 16-01-12 18:01:24
 *
 *  @brief 当前请求录音的权限
 *
 *  @return YES可以录音，NO不可以录音
 */
- (BOOL)canRecording;

@end
