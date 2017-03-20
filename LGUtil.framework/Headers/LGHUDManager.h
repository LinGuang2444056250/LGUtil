//
//  LGHUDManager.h
//
//  Created by linguang on 15/4/10.
//  Copyright (c) 2015年 linguang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LGHUDManager : NSObject

/**
 *	@brief	hud 指示器
 *
 *	@return	hud 管理器
 */
+ (instancetype)sharedHUDManager;


/**
 *	@brief	显示简单的指示器
 *
 *	@param 	view 	显示的父视图，nil的时候显示到keyWindow上面
 */
- (void)showHUD:(UIView *)view;

/**
 *	@brief	显示带有文字的指示器
 *
 *	@param 	string 	显示的文字
 *	@param 	view 	所显示的父视图，nil的时候显示到keyWindow上面
 */
- (void)showHUDWithString:(NSString *)string inView:(UIView *)view;

/**
 *  @author linguang, 16-03-20 11:03:37
 *
 *  @brief 显示带有进度条的指示器
 *
 *  @param progress 进度 0-1
 *  @param view     所显示的父视图
 */
- (void)showHUDWithProgress:(float)progress inView:(UIView *)view;

/**
 *	@brief	隐藏指示器
 */
- (void)hiddenHUD:(UIView *)view;

/**
 *	@brief	显示位于下方的提示文字
 *
 *	@param 	showString 	提示文字
 *  @param  isCenter 是否中间显示
 *  @param  view 父视图
 */
- (void)showInfo:(NSString *)showString isCenter:(BOOL)isCenter inView:(UIView *)view;

/**
 *	@brief	隐藏指示器
 */
+ (void)hiddenHUD:(UIView *)view;

/**
 *	@brief	显示简单的指示器
 *
 *	@param 	view 	显示的父视图，nil的时候显示到keyWindow上面
 */
+ (void)showHUD:(UIView *)view;

/**
 *	@brief	显示带有文字的指示器
 *
 *	@param 	string 	显示的文字
 *	@param 	view 	所显示的父视图，nil的时候显示到keyWindow上面
 */
+ (void)showHUDWithString:(NSString *)string inView:(UIView *)view;

/**
 *  @author linguang, 16-03-20 11:03:37
 *
 *  @brief 显示带有进度条的指示器
 *
 *  @param progress 进度 0-1
 *  @param view     所显示的父视图
 */
+ (void)showHUDWithProgress:(float)progress inView:(UIView *)view;

/**
 *	@brief	显示提示文字
 *
 *	@param 	showString 	提示的文字
 */
+ (void)showInfo:(NSString *)showString;

/**
 *	@brief	显示提示文字
 *
 *	@param 	showString 	提示的文字
 *  @param  isKeywindow 是否是keyWindow
 */
+ (void)showInfo:(NSString *)showString isKeywindow:(BOOL)isKeywindow;

/**
 *  @author linguang, 16-04-07 15:04:01
 *
 *  @brief 显示居中的提示文字
 *
 *  @param showString  提示文字
 */
+ (void)showCenterInfo:(NSString *)showString;

@end
