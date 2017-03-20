//
//  LGTabBar.h
//  LGUtil
//
//  Created by linguang on 16/6/7.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	点击代理
 */
@protocol LGTabBarDelegate;

@class LGTabBarItem;

//这些属性必须在初始化之前设置
extern NSString * const LGTabBarHeight; /**< 标签高度 NSValue*/
extern NSString * const LGTabBarCenterCircleHidden; /**< 中间圈是否隐藏 NSValue */
extern NSString * const LGTabBarCenterCircleHeight; /**< 中间圈高度 NSValue */
extern NSString * const LGTabBarCenterCircleSpacing; /**< 中间圈与里面按钮的间隔 */
extern NSString * const LGTabBarLineColor; /**< tabBar 分割线的颜色 */

@interface LGTabBar : UIView

@property (nonatomic, retain) UIImageView *backgroundView; /**< 背景视图 */
@property (nonatomic, assign) id<LGTabBarDelegate> delegate; /**< tabbar代理 */
@property (nonatomic, assign) NSInteger selectIndex; /**< 选中的索引 */

@property (nonatomic, retain) UIFont *font; /**< 文字字体 */
@property (nonatomic, retain) UIColor *tintColor; /**< 默认文字颜色 */
@property (nonatomic, retain) UIColor *selectTintColor; /**< 选中文字颜色 */

@property (nonatomic, assign) UIEdgeInsets titleEdgeInsets; /**< 文字距离四周 */
@property (nonatomic, assign) UIEdgeInsets imageEdgeInsets; /**< 图片距离四周 */

/**
 *  @author linguang, 16-06-08 11:06:16
 *
 *  @brief 初始化
 *
 *  @param frame       tabbar位置
 *  @param tabBarItems 显示Item
 *
 */
- (id)initWithFrame:(CGRect)frame tabBarItems:(NSArray *)tabBarItems;

/**
 *  @author linguang, 16-06-08 11:06:03
 *
 *  @brief 选中对应索引的标签
 *
 *  @param index 标签的索引
 */
- (void)selectTabAtIndex:(NSInteger)index;

/**
 *  @author linguang, 16-06-08 11:06:27
 *
 *  @brief 移除对应索引的标签
 *
 *  @param index 索引
 */
- (void)removeTabAtIndex:(NSInteger)index;

/**
 *  @author linguang, 16-06-08 12:06:18
 *
 *  @brief 在对应的索引位置插入标签
 *
 *  @param barItem 标签
 *  @param index   索引位置
 */
- (void)insertTabWithTabBarItem:(LGTabBarItem *)barItem atIndex:(NSInteger)index;

/**
 *  @author linguang, 16-06-08 13:06:05
 *
 *  @brief 替换对应索引位置的标签
 *
 *  @param barItem 标签
 *  @param index   替换的索引
 */
- (void)replaceTabWithTabBarItem:(LGTabBarItem *)barItem atIndex:(NSInteger)index;

/**
 *  @author linguang, 16-06-08 16:06:11
 *
 *  @brief 设置背景
 *
 *  @param backImage 背景图片
 */
- (void)setBackgroudImage:(UIImage *)backImage;

/**
 *  @author linguang, 16-06-08 16:06:16
 *
 *  @brief 设置tabbar上面的未读消息数
 *
 *  @param badgeNumber 图标数
 *  @param index       显示的索引
 *  @param badgeOffSet 调整位置
 */
- (void)setBadgeNumber:(NSInteger)badgeNumber AtIndex:(NSInteger)index badgeOffSet:(UIEdgeInsets)badgeOffSet;

/**
 *  @author linguang, 16-06-08 16:06:24
 *
 *  @brief 设置tabBar上面的红点
 *
 *  @param index       显示的索引
 *  @param badgeOffSet 显示的位置
 */
- (void)setBadgeSpotAtIndex:(NSInteger)index badgeOffSet:(UIEdgeInsets)badgeOffSet;

/**
 *  @author linguang, 16-06-08 16:06:58
 *
 *  @brief 隐藏显示的红点或者未读消息数
 *
 *  @param index 当前的索引
 */
- (void)hiddenBadgeViewAtIndex:(NSInteger)index;

/**
 *  @author linguang, 16-06-20 11:06:35
 *
 *  @brief 取出标签栏的属性
 *
 *  @param key 对应的key
 *
 *  @return 返回相应的结果
 */
+ (id)tabBarValueForKey:(NSString *)key;

/**
 *  @author linguang, 16-06-20 11:06:30
 *
 *  @brief 设置标签栏的私有属性
 *
 *  @param value 设置的值
 *  @param key   变量key
 */
+ (void)setTabBarValue:(id)value forKey:(NSString *)key;

@end

@interface LGTabBarItem : NSObject

- (id)initWithTitle:(NSString *)title normalImage:(UIImage *)normalImage selectImage:(UIImage *)selectImage;

@property (nonatomic, retain) NSString *title; /**< 文字 */
@property (nonatomic, retain) UIImage *normalImage; /**< 默认图片 */
@property (nonatomic, retain) UIImage *selectImage; /**< 选中图片 */

@end

@protocol LGTabBarDelegate <NSObject>

@optional

/**
 *	@brief	自定义标签栏的点击代理
 *
 *	@param 	tabBar 	点击的标签
 *	@param 	index 	标签的索引计数
 */
- (void)tabBar:(LGTabBar *)tabBar didSelectIndex:(NSInteger)index;

@end
