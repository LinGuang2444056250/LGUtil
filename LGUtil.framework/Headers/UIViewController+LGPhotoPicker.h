//
//  UIViewController+LGPhotoPicker.h
//  LGUtil
//
//  Created by linguang on 15/5/7.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LGImagePickerViewController.h"

@interface UIViewController (LGPhotoPicker)<LGImagePickerViewControllerDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

/**
 获取相机权限

 @return YES 有相机权限，NO，无相机权限
 */
+ (BOOL)getCameraAuthorization;

/**
 *	@brief	图片多选
 */
- (void)presentMultiPhotoPickerViewControllerWithMaxPhotoCount:(NSInteger)maxPhotoCount;

/**
 *	@brief	照片单选
 */
- (void)presentSinglePhotoPickerViewController;

/**
 单选照片是否允许编辑

 @param allowEditing 允许编辑
 */
- (void)presentSinglePhotoPickerViewControllerWithAllowEditing:(BOOL)allowEditing;

/**
 *	@brief	照相机
 */
- (void)presentTakePhotoViewController;

/**
 照相机是否允许编辑

 @param allowEditing YES为允许编辑，NO为不允许编辑
 */
- (void)presentTakePhotoViewControllerWithAllowEditing:(BOOL)allowEditing;

/**
 *	@brief	选择的图片（在调用的viewcontroller中实现此方法就可以接收图片）
 *
 *	@param 	selectImages 	已选择的图片
 */
- (void)photoPickerDidSelectImages:(NSArray *)selectImages;

/**
 *	@brief	图片选择器已经取消（在调用的viewcontroller中实现此方法就可以接收取消）
 *
 *	@param 	viewController 	取消的视图
 */
- (void)photoPickerDidCancelWithPhotoPickerViewController:(UIViewController *)viewController;

@end

extern NSString * const LGPhotoPickerImageForOriginalImage; /**< 原图 */
extern NSString * const LGPhotoPickerImageForEditImage; /**< 编辑之后的图 */
extern NSString * const LGPhotoPickerImageForThumbnail; /**< 缩略图 */
