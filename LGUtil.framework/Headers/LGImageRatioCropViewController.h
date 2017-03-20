//
//  LGImageRatioCropViewController.h
//  LGUtil
//
//  Created by linguang on 2017/2/7.
//  Copyright © 2017年 LG. All rights reserved.
//

#import "LGViewController.h"

/**
 *	@brief	图片裁剪代理
 */
@protocol LGImageRatioCropDelegate;

/**
 根据宽高比进行裁剪
 */
@interface LGImageRatioCropViewController : LGViewController

@property (nonatomic, assign) id<LGImageRatioCropDelegate> cropDelegate; /**< 裁剪代理 */

/**
 初始化裁剪视图

 @param image 当前图片
 @param ratio 裁剪区域
 @return 裁剪视图控制器
 */
- (id)initWithImage:(UIImage *)image widthHeightRatio:(CGFloat)ratio;

/**
 隐藏当前视图
 */
- (void)dismissCurrentViewController;

@end

@protocol LGImageRatioCropDelegate <NSObject>

@optional

/**
 裁剪成功之后的回调

 @param cropViewController 裁剪视图
 @param cropImage 裁剪完成之后的图片
 */
- (void)imageRatioCropViewController:(LGImageRatioCropViewController *)cropViewController
            didFinishedWithCropImage:(UIImage *)cropImage;

/**
 取消裁剪之后的回调

 @param cropViewController 裁剪视图
 */
- (void)imageRatioCropViewControllerDidCancel:(LGImageRatioCropViewController *)cropViewController;

@end
