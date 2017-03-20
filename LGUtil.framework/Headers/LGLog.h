//
//  LGLog.h
//  LGUtil
//
//  Created by linguang on 16/7/15.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LGLog;

#define LGLog(format, ...)                                                  \
if ([LGLog Debug]){                                                         \
do {                                                                        \
fprintf(stderr, "\n----------------");                                      \
fprintf(stderr, "<%s: %d> %s\n",                                            \
[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],  \
__LINE__, __func__);                                                        \
(NSLog)((format), ##__VA_ARGS__);                                           \
fprintf(stderr, "----------------\n");                                      \
} while (0);                                                                \
}                                                                           \
else {                                                                      \
}                                                                           \

@interface LGLog : NSObject

+ (void)setDebug:(BOOL)debug;

+ (BOOL)Debug;

@end
