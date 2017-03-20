//
//  LGLaunchADView.h
//  LGUtil
//
//  Created by linguang on 15/8/18.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	launch ad view click type
 */
typedef NS_ENUM(NSInteger, LGLaunchAdViewClickType)
{
    LGLaunchAdViewClickTypeDefault, /**< default click */
    LGLaunchAdViewClickTypeBreak, /**< break button click */
};

/**
 *	@brief	launch ad view delegate
 */
@protocol LGLaunchAdViewDelegate;

@interface LGLaunchADView : UIView

@property (nonatomic, assign) id<LGLaunchAdViewDelegate> adDelegate; /**< launch ad view delegate */

/**
 *  @author linguang, 15-08-19 14:08:38
 *
 *  @brief  设置启动宣传图片当前显示的图片
 *
 *  @param image 显示的image
 */
- (void)setCurrentDisplayImage:(UIImage *)image;

/**
 *  @author linguang, 15-08-18 20:08:33
 *
 *  @brief  当前显示的启动图
 *
 *  @return 当前显示的image
 */
+ (UIImage *)defaultLaunchImageCurrentDisplay;

@end

@protocol LGLaunchAdViewDelegate <NSObject>

@optional

/**
 *  @author linguang, 15-08-19 15:08:19
 *
 *  @brief  结束显示图片
 *
 *  @param adView 当前的ad view
 */
- (void)launchAdDidEndWithLaunchAdView:(LGLaunchADView *)adView;

/**
 *  @author linguang, 15-08-19 15:08:59
 *
 *  @brief  在当前视图点击
 *
 *  @param adView    当前的ad view
 *  @param clickType 点击的类型
 */
- (void)launchAdView:(LGLaunchADView *)adView didClickWithClickType:(LGLaunchAdViewClickType)clickType;

/**
 *  @author linguang, 15-08-19 20:08:30
 *
 *  @brief  是否需要点击事件，默认为NO不可以点击
 *
 *  @param adView 当期ad view
 *
 *  @return YES为可以点击,NO为不可以点击
 */
- (BOOL)launchAdViewIsSupportClickWithAdView:(LGLaunchADView *)adView;

@end
