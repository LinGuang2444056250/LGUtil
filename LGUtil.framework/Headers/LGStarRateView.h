//
//  LGStarRateView.h
//  LenovoPrint
//
//  Created by linguang on 2017/3/2.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	星级评价代理
 */
@protocol LGStarRateDelegate;

/**
 星级评价视图
 */
@interface LGStarRateView : UIView

@property (nonatomic, retain) UIImage *backStarImage; /**< 背景星图片 */
@property (nonatomic, retain) UIImage *starImage; /**< 星级图片 */
@property (nonatomic, assign) CGFloat stepLength; /**< 每一块的宽度 0-1  */
@property (nonatomic, assign) BOOL editEnabled; /**< 是否可以编辑 */
@property (nonatomic, assign) CGFloat starSpacing; /**< 星星间隔 */
@property (nonatomic, assign) CGFloat starValue; /**< 星级数值 0 - starCount */
@property (nonatomic, assign) id<LGStarRateDelegate> starRateDelegate; /**< 星级评价代理 */

/**
 初始化星级评价视图

 @param frame 星级frame
 @param starCount 星星的数量
 @return 星级评价view
 */
- (id)initWithFrame:(CGRect)frame starCount:(NSInteger)starCount;

@end

@protocol LGStarRateDelegate <NSObject>

/**
 星级评价视图的星级发生变化

 @param starRateView 星级评价视图
 @param starValue 星值
 */
- (void)starRateView:(LGStarRateView *)starRateView didChangeWithStarValue:(CGFloat)starValue;

@end
