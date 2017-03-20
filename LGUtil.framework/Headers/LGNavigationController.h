//
//  LGNavigationController.h
//  LGUtil
//
//  Created by linguang on 15/4/17.
//  Copyright (c) 2015年 linguang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSString+FontAwesome.h"

/**
 *	@brief	自定义代理
 */
@protocol LGNavigationControllerDelegate;

@interface LGNavigationController : UINavigationController
{
    UIPanGestureRecognizer *_backPanGestureRecognizer; /**< 返回的手势 */
}

@property (nonatomic, retain) UIPanGestureRecognizer *backPanGestureRecognizer; /**< 返回的手势 */
@property (nonatomic, assign) BOOL canDragBack; /**< 能拖动返回 默认是YES */
@property (nonatomic, assign) id<LGNavigationControllerDelegate> lgDelegate; /**< 代理 */
@property (nonatomic, retain) UIViewController *allowGestureViewController; /**< 允许的滑动视图，一般情况下，会预留出该视图左侧的30%给右滑返回 */

@property (nonatomic, retain) UIBarButtonItem *backLeftBarButtonItem; /**< 左侧的返回按钮 */
@property (nonatomic, retain) UIBarButtonItem *cancelLeftBarButtonItem; /**< 左侧的取消按钮 */

/**
 *	@brief	返回上一个viewController
 */
- (void)goBackViewController;


/**
 返回上一级

 @param sender 执行按钮
 */
- (void)backLeftButtonPress:(id)sender;

/**
 *  @author linguang, 16-07-19 14:07:24
 *
 *  @brief 接收返回的手势
 *
 *  @param gesture 拖动手势
 */
- (void)paningGestureRecevie:(UIPanGestureRecognizer *)gesture;

/**
 *  @author linguang, 16-07-19 14:07:12
 *
 *  @brief 加载第一个视图控制器
 *
 *  @param viewController 视图控制器
 */
- (void)loadFirstViewController:(UIViewController *)viewController;

/**
 *  @author linguang, 16-07-19 14:07:00
 *
 *  @brief 加载下一个页面
 *
 *  @param viewController 视图控制器
 */
- (void)loadNextViewController:(UIViewController *)viewController;

/**
 *  @author linguang, 16-07-19 15:07:15
 *
 *  @brief 是否可以返回上一级页面
 *
 *  @return YES可以返回上一级
 */
- (BOOL)shouldBackPreviousViewController;

/**
 设置导航栏的透明度

 @param alpha    透明程度
 @param animated 动画
 */
- (void)setNavigationBarAlpha:(float)alpha animated:(BOOL)animated;

/**
  获取导航栏的透明度

 @param alpha 导航栏透明度
 */
- (void)getNavigationBarAlpha:(float *)alpha;

/**
 *  @author linguang, 16-07-19 14:07:06
 *
 *  @brief 设置上面的遮罩图的最高透明度
 *
 *  @param alpha 0-1
 */
+ (void)setDefaultMaskViewMaxAlpha:(CGFloat)alpha;

/**
 *  @author linguang, 16-07-19 14:07:27
 *
 *  @brief 设置滑动视图的最小透明度
 *
 *  @param alpha 0-1
 */
+ (void)setDefaultSlideViewMinAlpha:(CGFloat)alpha;

/**
 *  @author linguang, 16-07-19 14:07:46
 *
 *  @brief 设置滑动视图的时候上一级页面最低的缩放
 *
 *  @param scale 0-1
 */
+ (void)setDefaultMinScale:(CGFloat)scale;

/**
 带图标的导航栏标题视图

 @param title          标题内容
 @param icon           图标
 @param target         点击target
 @param sel            执行方法
 @param navigationItem 当前导航栏属性 吗

 @return 标题视图
 */
+ (UIView *)loadIconTitle:(NSString *)title icon:(FAIcon)icon addTarget:(id)target selector:(SEL)sel withCurrentNavigationItem:(UINavigationItem *)navigationItem;

/**
 返回图标的导航栏按钮

 @param icon                  图标
 @param target                点击目标
 @param action                执行动作
 @param originalBarButtonItem 即将设置的导航栏图标按钮

 @return 图标导航栏按钮
 */
+ (UIBarButtonItem *)barButtonItemWithFaIcon:(FAIcon)icon target:(id)target action:(SEL)action originalBarButtonItem:(UIBarButtonItem *)originalBarButtonItem;

/**
 返回文字的导航栏按钮

 @param title                 文字内容
 @param target                点击目标
 @param action                执行动作
 @param originalBarButtonItem 即将设置的导航栏按钮

 @return 文字导航栏按钮
 */
+ (UIBarButtonItem *)barButtonItemWithButtonTitle:(NSString *)title target:(id)target action:(SEL)action originalBarButtonItem:(UIBarButtonItem *)originalBarButtonItem;

@end

@protocol LGNavigationControllerDelegate <NSObject>

@optional

/**
 *  @author linguang, 16-07-19 14:07:06
 *
 *  @brief 导航栏滑动的距离
 *
 *  @param navigationController 当前导航栏
 *  @param slideX               滑动距离
 */
- (void)navigationController:(LGNavigationController *)navigationController slideViewX:(CGFloat)slideX;

/**
 *  @author linguang, 16-07-19 15:07:21
 *
 *  @brief 是否可以返回上一个视图控制
 *
 *  @param navigationController 当前导航栏视图控制器
 *  @param slide                yes当前正在滑动返回，否则点击按钮返回
 *
 *  @return YES可以，NO不可以
 */
- (BOOL)shouldBackPreviousControllerWithNavigationController:(LGNavigationController *)navigationController isSlide:(BOOL)slide;

@end
