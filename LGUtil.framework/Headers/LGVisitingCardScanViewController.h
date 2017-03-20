//
//  LGVisitingCardScanViewController.h
//  AisenYun
//
//  Created by linguang on 16/4/18.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import "LGViewController.h"

/**
 *	@brief	名片拍摄完的代理
 */
@protocol LGVisitingCardScanDelegate;

@interface LGVisitingCardScanViewController : LGViewController

/**
 *  @author linguang, 16-09-01 11:09:31
 *
 *  @brief 用宽高比例初始化拍照视图
 *
 *  @param ratio 宽高比率
 *
 *  @return 拍照
 */
- (id)initWithWidthHeightRatio:(CGFloat)ratio;

@property (nonatomic, assign) id<LGVisitingCardScanDelegate> cardDelegate; /**< 名片代理 */

@end

@protocol LGVisitingCardScanDelegate <NSObject>

@optional

/**
 *  @author linguang, 16-09-01 11:09:47
 *
 *  @brief 拍照完成的代理
 *
 *  @param viewController 当前拍照视图
 *  @param cardImage      完成的图片
 */
- (void)visitingCardScanViewController:(LGVisitingCardScanViewController *)viewController didFinishedWithImage:(UIImage *)cardImage;

/**
 *  @author linguang, 16-09-01 11:09:08
 *
 *  @brief 拍照取消的回调
 *
 *  @param viewController 当前拍照视图
 */
- (void)visitingCardScanDidCancelWithViewController:(LGVisitingCardScanViewController *)viewController;

@end
