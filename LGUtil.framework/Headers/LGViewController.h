//
//  LGViewController.h
//  LGUtil
//
//  Created by linguang on 15/4/20.
//  Copyright (c) 2015年 huyanping. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief
 */
#ifdef __IPHONE_9_0
@interface LGViewController : UIViewController <NSObject,UIViewControllerPreviewingDelegate>
#else
@interface LGViewController : UIViewController
#endif

@property (nonatomic, assign) BOOL keyboardNotification;/**< 是否使用键盘监听 */
@property (nonatomic, assign) CGFloat currentDisplayKeyboardHeight; /**< 当前键盘的高度 */

/**
 *  @author linguang, 16-07-18 18:07:14
 *
 *  @brief 当屏幕尺寸发生变化
 */
- (void)viewFrameDidChange;

/**
 *  @author linguang, 16-07-18 18:07:36
 *
 *  @brief 当前语言发生变化
 */
- (void)localizeLanguageDidChange;

/**
 *  @author linguang, 16-07-18 18:07:51
 *
 *  @brief 注册3dTouch
 *
 *  @param sourceView 注册视图
 */
- (void)registPreviewingWithSourceView:(UIView *)sourceView;

/**
 *  @author linguang, 16-07-18 19:07:57
 *
 *  @brief 正在3dTouch的视图需要显示的视图控制器
 *
 *  @param sourceView 正在3dtouch的视图
 *  @param sourceRect 当前视图的位置
 *  @param point      当前点击的中心点
 *
 *  @return 需要显示的视图控制器
 */
- (UIViewController *)previewingViewControllerWithSourceView:(UIView *)sourceView sourceRect:(CGRect)sourceRect viewControllerForLocation:(CGPoint)point;

/**
 *  @author linguang, 16-07-18 19:07:10
 *
 *  @brief 3dtouch执行完成需要使用的视图控制器
 *
 *  @param sourceView           当前视图
 *  @param sourceRect           当前frame
 *  @param commitViewController 正在3dtouch的视图控制器
 *
 *  @return 执行完成需要的视图控制器
 */
- (UIViewController *)previewingDoneViewControllerWithSourceView:(UIView *)sourceView sourceRect:(CGRect)sourceRect commitViewController:(UIViewController *)commitViewController;

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
