//
//  LGTabBarController.h
//  LGUtil
//
//  Created by linguang on 16/6/7.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LGTabBar.h"

/**
 *	@brief	自定义标签栏视图控制器代理
 */
@protocol LGTabBarControllerDelegate;

/**
 *	@brief	自定义标签栏视图
 */
@interface LGTabBarController : UIViewController
{
    BOOL _tabBarHidden; /**< 标签栏是否隐藏 */
}

@property (nonatomic, retain) LGTabBar *tabBar; /**< 当前的标签栏 */
@property (nonatomic, retain) NSMutableArray *viewControllers; /**< 初始化的视图 */
@property (nonatomic, assign) NSUInteger selectedIndex; /**< 当前选择的索引 */
@property (nonatomic, assign) id<LGTabBarControllerDelegate> delegate; /**< 标签栏控制器代理 */
@property (nonatomic, retain) UIColor *centerButtonBackColor; /**< 中间圈背景颜色 */
@property (nonatomic, retain) id centerImage; /**< 中间圈的image 可以是路径*/
@property (nonatomic, assign) NSUInteger centerIndex; /**< 中间圈实现的index */
@property (nonatomic, retain) UIViewController *selectedViewController; /**< 当前选择的视图 */

/**
 *  @author linguang, 16-06-17 13:06:07
 *
 *  @brief 初始化标签栏控制器
 *
 *  @param viewControllers 初始化的视图
 *  @param tabBarItems     初始化的标签栏
 *
 *  @return 标签视图控制器
 */
- (id)initWithViewControllers:(NSArray *)viewControllers tabBarItems:(NSArray *)tabBarItems;

/**
 *  @author linguang, 16-06-17 18:06:55
 *
 *  @brief 插入viewController到固定的索引
 *
 *  @param viewController 插入的viewController
 *  @param item           插入的标签信息
 *  @param index          插入的位置
 */
- (void)insertViewController:(UIViewController *)viewController tabBarItem:(LGTabBarItem *)item atIndex:(NSUInteger)index;

/**
 *  @author linguang, 16-06-17 18:06:10
 *
 *  @brief 替换指定位置的标签以及控制器
 *
 *  @param viewController 替换的控制器
 *  @param item           替换的标签
 *  @param index          替换的位置
 */
- (void)replaceViewController:(UIViewController *)viewController tabBarItem:(LGTabBarItem *)item atIndex:(NSUInteger)index;

/**
 *  @author linguang, 16-06-27 16:06:10
 *
 *  @brief 隐藏标签栏
 *
 *  @param isHidden 是否隐藏还是显示
 *  @param animated 动画
 */
- (void)hidesTabBar:(BOOL)isHidden animated:(BOOL)animated;

/**
 *  @author linguang, 16-06-17 18:06:26
 *
 *  @brief 移除固定标签的控制器
 *
 *  @param index 标签索引
 */
- (void)removeViewControllerAtIndex:(NSUInteger)index;

/**
 *  @author linguang, 16-06-17 13:06:23
 *
 *  @brief 显示标记数
 *
 *  @param number 标记数
 *  @param index  显示的索引
 *  @param offset 标记数的位置
 */
- (void)showBadgeNumber:(NSUInteger)number atIndex:(NSUInteger)index badgeOffSets:(UIEdgeInsets)offset;

/**
 *  @author linguang, 16-06-17 13:06:27
 *
 *  @brief 显示红点
 *
 *  @param index  红点显示的标签
 *  @param offset 红点的位置
 */
- (void)showBadgeSpotAtIndex:(NSUInteger)index badgeOffSets:(UIEdgeInsets)offset;

/**
 *  @author linguang, 16-06-17 12:06:47
 *
 *  @brief 移除标记，包括未读数，以及红点
 *
 *  @param index 标签对应的计数
 */
- (void)removeBadgeAtIndex:(NSUInteger)index;

@end

@protocol LGTabBarControllerDelegate <NSObject>

@optional

/**
 *  @author linguang, 16-06-30 13:06:10
 *
 *  @brief 当前点击的标签
 *
 *  @param tabBarController 当前标签视图控制器
 *  @param index            当前选择的index
 *
 *  @return YES 可以进行下一步
 */
- (BOOL)tabBarController:(LGTabBarController *)tabBarController didSelectTabBarWithIndex:(NSUInteger)index;

/**
 *  @author linguang, 16-06-27 17:06:39
 *
 *  @brief 是否可以选择改视图
 *
 *  @param tabBarController 当前tabBarController
 *  @param viewController   当前选择的视图
 *
 *  @return YES,可以显示
 */
- (BOOL)tabBarController:(LGTabBarController *)tabBarController shouldSelectViewController:( UIViewController *)viewController;

/**
 *  @author linguang, 16-06-27 17:06:52
 *
 *  @brief  已经显示的视图
 *
 *  @param tabBarController 当前标签视图
 *  @param viewController   显示的视图
 */
- (void)tabBarController:(LGTabBarController *)tabBarController didSelectViewController:(UIViewController *)viewController;

@end
