//
//  LGVoiceConvert.h
//  AisenYun
//
//  Created by amin on 16/1/8.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGVoiceConvert : NSObject

+ (int)isMP3File:(NSString *)filePath;

+ (int)isAMRFile:(NSString *)filePath;

+ (int)amrToWav:(NSString*)_amrPath wavSavePath:(NSString*)_savePath;

+ (int)wavToAmr:(NSString*)_wavPath amrSavePath:(NSString*)_savePath;

@end
