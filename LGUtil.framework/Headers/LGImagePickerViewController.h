//
//  LGImagePickerViewController.h
//  MicroCityProgram
//
//  Created by huadong on 15/3/17.
//  Copyright (c) 2015年 slideview. All rights reserved.
//

#import "LGNavigationController.h"
#import "LGPhotoManage.h"

@protocol LGImagePickerViewControllerDelegate;

@interface LGImagePickerViewController : LGNavigationController

@property (nonatomic, retain) NSMutableArray *selectedAssets;

@property (nonatomic, assign) id<UINavigationControllerDelegate,LGImagePickerViewControllerDelegate> delegate;

@property (nonatomic, assign) NSInteger maximumNumberOfSelection; /**< 最多选择照片数 */
@property (nonatomic, assign) NSInteger minimumNumberOfSelection; /**< 最少选择照片数 */

@property (nonatomic, retain) ALAssetsFilter *assetsFilter;

@property (nonatomic, assign) BOOL showEmptyGroups; /**< 显示空的相册 */

@end

@protocol LGImagePickerViewControllerDelegate <NSObject>

- (void)lgImagePickerViewControllerDidCancel:(LGImagePickerViewController *)picker;

- (void)lgImagePickerViewController:(LGImagePickerViewController *)picker didFinishPickingAssets:(NSArray *)assets;

@end