//
//  LGApp.h
//  LGUtil
//
//  Created by linguang on 16/7/26.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/**
 *  @author linguang, 16-09-02 17:09:16
 *
 *  @brief 分享完成回调
 *
 *  @param finished 是否完成
 */
typedef void (^LGAppCompletionBlock)(BOOL finished);

/**
 *  @author linguang, 16-09-02 17:09:26
 *
 *  @brief 分享的block
 *
 *  @param viewController 当前的视图
 *  @param title          分享的标题
 *  @param image          分享的图片
 *  @param content        分享的内容
 *  @param linkUrl        链接地址
 *  @param completionBlock 分享回调
 */
typedef void (^LGAppShareBlock)(UIViewController *viewController,NSString *title,id image,NSString *content, NSString *linkUrl,LGAppCompletionBlock completionBlock);

@interface LGApp : NSObject

/**
 *  @author linguang, 16-09-02 16:09:45
 *
 *  @brief 当前app
 *
 *  @return app单例
 */
+ (instancetype)sharedApp;

/**
 *  @author linguang, 16-09-02 17:09:29
 *
 *  @brief 设置app分享，如果没有设置，则会调用系统的分享
 */
+ (void)setAppShareBlock:(LGAppShareBlock)shareBlock;

/**
 *  @author linguang, 16-09-02 17:09:36
 *
 *  @brief 分享内容
 *
 *  @param title           标题
 *  @param image           图片
 *  @param content         内容
 *  @param linkUrl         链接
 *  @param completionBlock 分享之后的回调
 *  @param viewController  当前视图
 */
+ (void)shareTitle:(NSString *)title image:(id)image content:(NSString *)content linkUrl:(NSString *)linkUrl completionBlock:(LGAppCompletionBlock)completionBlock atViewController:(UIViewController *)viewController;

#pragma mark - 常用方法

/**
 *  @author linguang, 16-07-26 17:07:50
 *
 *  @brief 当前app的名称
 *
 *  @return 当前app的名称
 */
+ (NSString *)currentAppName;

/**
 *  @author linguang, 16-07-26 17:07:34
 *
 *  @brief 当前app的版本号
 *
 *  @return 当前app的版本号
 */
+ (NSString *)currentAppVersion;

/**
 *  @author linguang, 16-07-26 18:07:04
 *
 *  @brief 当前应用build版本号
 *
 *  @return build版本号
 */
+ (NSString *)currentAppBuildVersion;

/**
 *  @author linguang, 16-07-28 13:07:16
 *
 *  @brief 设置当前应用的主题颜色
 *
 *  @param color 主题颜色
 */
+ (void)setTopicColor:(UIColor *)color;

/**
 *  @author linguang, 16-07-28 13:07:23
 *
 *  @brief 当前应用主题颜色
 *
 *  @return 主题颜色
 */
+ (UIColor *)topicColor;

/**
 设置awesome导航栏按钮字体大小

 @param size 字体大小
 */
+ (void)setAwesomeBarItemSize:(float)size;

/**
 返回awesome按钮大小

 @return 按钮字体大小
 */
+ (float)awesomeBarItemSize;

/**
 设置导航栏标题字体大小

 @param size 字体大小
 */
+ (void)setNavigationTitleFontSize:(float)size;

/**
 当前导航栏标题字体大小

 @return 字体大小
 */
+ (float)navigationTitleFontSize;

/**
 设置导航栏标题颜色

 @param color 颜色
 */
+ (void)setNavigationTitleColor:(UIColor *)color;

/**
 返回当前导航栏标题颜色

 @return 标题颜色
 */
+ (UIColor *)navigationTitleColor;

/**
 设置当前导航栏主题色

 @param tintColor 当前导航栏主题色
 */
+ (void)setNavigationTintColor:(UIColor *)tintColor;

/**
 获取当前导航栏主题色

 @return 主题色
 */
+ (UIColor *)navigationTintColor;

/**
 设置导航栏图标按钮大小

 @param size 按钮大小
 */
+ (void)setBarItemAwesomeIconSize:(float)size;

/**
 获取导航栏图标按钮大小

 @return 按钮大小
 */
+ (float)barItemAwesomeIconSize;

/**
 设置导航栏按钮文字字体大小

 @param size 字体大小
 */
+ (void)setBarItemButtonFontSize:(float)size;

/**
 当前导航栏按钮文字字体大小

 @return 字体大小
 */
+ (float)barItemButtonFontSize;

@end
