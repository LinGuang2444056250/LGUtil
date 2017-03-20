//
//  LGView.h
//  LGUtil
//
//  Created by linguang on 2016/12/5.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LGView : UIView

@property (nonatomic, assign) BOOL keyboardNotification; /**< 是否使用键盘监听 */
@property (nonatomic, assign) CGFloat currentDisplayKeyboardHeight; /**< 当前键盘的高度 */

#pragma mark - keyBoard function

/**
 *	@brief	at initialize method add this function for regist keyboardNotification
 */
- (void)registKeyboardNotification;

/**
 *	@brief	at dealloc function add this function to remove all notificaiton
 */
- (void)removeKeyboardNotification;

/**
 *	@brief	keyboard have change with keyboard height
 *
 *	@param 	_keyboardHeight 	keyboard current height
 */
- (void)keyboardChangeWithKeyboardHeight:(CGFloat)_keyboardHeight;

/**
 *	@brief	keyboard have change with keyboard height
 *
 *	@param 	_keyboardHeight 	keyboard current height
 *  @param  _animationDuration  animation duration
 */
- (void)keyboardChangeWithKeyboardHeight:(CGFloat)_keyboardHeight animationDuration:(NSTimeInterval)_animationDuration;

/**
 键盘发生变化
 
 @param _keyboardHeight 变化高度
 @param _animationDuration 持续时间
 @param isHidden 隐藏键盘还是显示
 */
- (void)keyboardChangeWithKeyboardHeight:(CGFloat)_keyboardHeight animationDuration:(NSTimeInterval)_animationDuration isHidden:(BOOL)isHidden;

@end
