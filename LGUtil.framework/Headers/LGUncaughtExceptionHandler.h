///
/// @file LGUncaughtExceptionHandler.h
///
/// @brief 未捕获异常处理
/// @version 1.0
/// @author  任兆敏
/// @date 14-6-19
/// @copyright Copyright (c) 2014年 LG. All rights reserved.
///

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *	@brief	安装未捕获异常处理\n
 *
 *  *help:*   在您需要的地方导入文件,加入此方法 InstallUncaughtExceptionHandler();
 */
void InstallUncaughtExceptionHandler();

/** 异常捕获处理  */
@interface LGUncaughtExceptionHandler : NSObject <UIAlertViewDelegate>
{
    BOOL dismissed;/**< puduct */
}

/**
 *	@brief	install uncaught exception handler 
 */
+ (void)InstallUncaughtExceptionHandler;

@end
