//
//  LGStarView.h
//  LenovoPrint
//
//  Created by linguang on 2017/3/2.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	星星点击代理
 */
@protocol LGStarDelegate;

@interface LGStarView : UIView

@property (nonatomic, assign) CGFloat stepLength; /**< 每一块的宽度 0-1,建议可以被1整除 */
@property (nonatomic, assign) CGFloat starValue; /**< 星级值 0 - 1 */
@property (nonatomic, retain) UIImage *backStarImage; /**< 背景星星 */
@property (nonatomic, retain) UIImage *starImage; /**< 星星图片 */
@property (nonatomic, assign) id<LGStarDelegate> starDelegate; /**< 星星代理 */

@end

@protocol LGStarDelegate <NSObject>

/**
 点击星星

 @param starView 星星视图
 @param starValue 星星值
 */
- (void)starView:(LGStarView *)starView didClickWithStarValue:(CGFloat)starValue;

@end
