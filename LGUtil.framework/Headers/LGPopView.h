//
//  LGPopView.h
//  LGUtil
//
//  Created by amin on 2017/2/15.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	弹出动画
 */
typedef NS_ENUM(NSInteger, LGPopAnimationStyle)
{
    LGPopAnimationStyleDefault = 0, /**< 默认动画 */
    LGPopAnimationStyleDownToUp = 1, /**< 从下面滑动显示出 */
    LGPopAnimationStyleFade = 2, /**< 透明度逐渐变化 */
};

/**
 *	@brief	弹出视图代理
 */
@protocol LGPopViewDelegate;

@interface LGPopView : UIView
{
    UIView *_contentView; /**< 显示视图 */
}

@property (nonatomic, assign) LGPopAnimationStyle animateStyle; /**< 动画样式 */
@property (nonatomic, assign) id<LGPopViewDelegate> popDelegate; /**< 代理 */

/**
 弹出视图初始化

 @return 弹出视图
 */
- (id)init;

/**
 显示弹出视图

 @param animated 显示动画
 */
- (void)showPopViewWithAnimate:(BOOL)animated;

/**
 隐藏掉弹出视图

 @param animated 隐藏动画
 */
- (void)dismissPopViewWithAnimate:(BOOL)animated;

@end

@protocol LGPopViewDelegate <NSObject>

@optional

/**
 显示弹出视图代理

 @param popView 弹出视图
 */
- (void)didShowPopView:(LGPopView *)popView;

/**
 隐藏弹出视图代理

 @param popView 弹出视图
 */
- (void)didDismissPopView:(LGPopView *)popView;

@end
