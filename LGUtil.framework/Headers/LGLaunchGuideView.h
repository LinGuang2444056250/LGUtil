//
//  LGLaunchGuideView.h
//  LGUtil
//
//  Created by linguang on 15/8/18.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	启动引导页面demo
 */
@protocol LGLaunchGuideViewDelegate;

@interface LGLaunchGuideView : UIView

@property (nonatomic, assign) id<LGLaunchGuideViewDelegate> guideDelegate; /**< 引导delegate */

@end

@protocol LGLaunchGuideViewDelegate <NSObject>

@optional

/**
 *  @author linguang, 15-08-20 12:08:41
 *
 *  @brief  启动页点击进入或者滑动进入的时候调用
 *
 *  @param guideView 当前引导页
 */
- (void)launchGuideDidEndWithGuideView:(LGLaunchGuideView *)guideView;

@end
