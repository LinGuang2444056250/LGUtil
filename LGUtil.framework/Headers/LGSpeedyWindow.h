//
//  LGSpeedyWindow.h
//  LGUtil
//
//  Created by linguang on 15/8/24.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LGSpeedyWindowDelegate;

@interface LGSpeedyWindow : NSObject

@property (assign, nonatomic) id<LGSpeedyWindowDelegate> windowDelegate;

@property (nonatomic, assign) BOOL displayState; /**< diasplay state */
@property (nonatomic, assign) BOOL isAdsorb; /**< 依附边框 */

/**
 *  @author linguang, 15-08-24 11:08:04
 *
 *  @brief  初始化快捷窗口
 *
 *  @param point  默认显示的点
 *  @param height 高度
 *
 *  @return 快捷窗口
 */
- (id)initWithDefaultPoint:(CGPoint)point defaultHeight:(CGFloat)height;

/**
 *  @author linguang, 15-08-24 11:08:40
 *
 *  @brief  显示快捷窗口
 */
- (void)show;

/**
 *  @author linguang, 15-08-24 11:08:44
 *
 *  @brief  设置显示状态以及动画
 *
 *  @param state    YES,为显示，NO为不显示
 *  @param animated 动画
 */
- (void)setDisplayState:(BOOL)state animation:(BOOL)animated;

/**
 *  @author linguang, 15-08-24 11:08:17
 *
 *  @brief  保存移动之后的位置
 *
 *  @param postion 位置信息
 */
+ (void)saveSpeedyWindowPostion:(CGPoint)postion;

/**
 *  @author linguang, 15-08-24 11:08:20
 *
 *  @brief  保存快捷窗口的状态
 *
 *  @param state YES为显示，NO为隐藏
 */
+ (void)saveSpeedyWindowDisplayState:(BOOL)state;

/**
 *  @author linguang, 15-08-24 11:08:20
 *
 *  @brief  保存快捷窗口是否依附边框
 *
 *  @param state YES为是，NO为否
 */
+ (void)saveSpeedyWindowDisplayadsorbState:(BOOL)state;

/**
 *  @author linguang, 15-08-24 11:08:34
 *
 *  @brief  最后一次快捷窗口的显示状态
 *
 *  @return YES为显示,NO为不显示
 */
+ (BOOL)latestSpeedyWindowDisplayState;

/**
 *  @author linguang, 15-08-24 11:08:34
 *
 *  @brief  最后一次快捷窗口是否依附边框
 *
 *  @return YES为依附,NO为否
 */
+ (BOOL)latestSpeedyWindowDisplayAdsorbState;

/**
 *  @author linguang, 15-08-24 11:08:34
 *
 *  @brief  最后一次快捷窗口坐标
 *
 *  @return 上一次快捷窗口的位置
 */
+ (NSString *)latestSpeedyWindowDisplayPostion;

@end

@protocol LGSpeedyWindowDelegate <NSObject>

@optional

- (void)didClickedWithSpeedyWindow:(LGSpeedyWindow *)windowView;

@end
