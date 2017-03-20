//
//  LGFrame.h
//  LGUtil
//
//  Created by linguang on 16/5/12.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <CoreGraphics/CoreGraphics.h>

//默认的导航栏高度
#define LGDefaultNavigationHeight 44.0f
//默认的状态栏高度
#define LGDefaultStatusHeight 20.0f

extern NSString * const LGFrameChangeNotification; /**< frame 改变的通知 */

/**
 *	@brief	全局控制frame
 */
@interface LGFrame : NSObject

@property (nonatomic, assign) BOOL barAlpha; /**< 导航栏是否透明 */

@property (nonatomic, assign) CGFloat lgWidth; /**< 当前宽度 */
@property (nonatomic, assign) CGFloat lgHeight; /**< 当前高度 */
@property (nonatomic, assign) CGFloat lgNavHeight; /**< 当前导航栏高度 */
@property (nonatomic, assign) CGFloat lgStatusHeight; /**< 当前状态栏高度 */

/**
 *	@brief	frame单例
 *
 *	@return	当前尺寸
 */
+ (instancetype)sharedFrame;

/**
 *  @author linguang, 16-05-12 19:05:01
 *
 *  @brief 初始化屏幕尺寸，只在启动时调用
 */
- (void)initFrame;

/**
 *  @author linguang, 16-06-02 10:06:36
 *
 *  @brief 返回当前屏幕frame
 */
- (CGRect)frame;

/**
 *  @author linguang, 16-06-02 10:06:16
 *
 *  @brief 返回当前屏幕去除上方导航栏的frame
 *
 *  @return 返回frame
 */
- (CGRect)frameWithOutNavigationBar;

@end
