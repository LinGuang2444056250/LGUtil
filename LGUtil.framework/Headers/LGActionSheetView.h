//
//  LGActionSheetView.h
//  LGUtil
//
//  Created by linguang on 2016/12/8.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LGActionSheetView;

/**
 actionSheet代理block

 @param actionSheetView actionSheetView
 @param buttonIndex 对应的点击index
 */
typedef void(^LGActionSheetViewBlock)(LGActionSheetView *actionSheetView, NSUInteger buttonIndex);

@interface LGActionSheetView : UIActionSheet

/**
 显示actionSheet

 @param title 显示名称
 @param block 当前block
 @param view 显示的父类视图
 @param cancelButtonTitle 取消按钮
 @param destructiveButtonTitle 红色显示按钮
 @param otherButtonTitles 其他按钮
 @return actionSheet
 */
+ (id)showActionSheetWithTitle:(NSString *)title completionBlock:(LGActionSheetViewBlock)block inView:(UIView *)view  cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

@end
