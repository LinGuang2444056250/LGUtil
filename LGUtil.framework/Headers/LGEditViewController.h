//
//  LGEditViewController.h
//  MicroCityProgram
//
//  Created by huadong on 15/3/22.
//  Copyright (c) 2015年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LGTextField.h"
#import "LGTextView.h"
#import "LGViewController.h"

/**
 * @brief 编辑输入框样式
 */
typedef NS_ENUM(NSInteger, LGEditViewType) {
    LGEditViewTypeTextField, /**< 单行 */
    LGEditViewTypeTextView, /**< 多行 */
};

typedef void (^editCancelBlock)(void);
typedef void (^editCompleteBlock)(NSString *sureText ,NSString *oldText);

@protocol LGEditViewControllerDelegate;

@interface LGEditViewController : LGViewController

@property (nonatomic, copy) editCancelBlock cancelBlock;/**< click cancel button block */
@property (nonatomic, copy) editCompleteBlock successBlock;/**< click sure button block */

@property (nonatomic, assign) id<LGEditViewControllerDelegate> delegate; /**< edit viewcontroller delegate */
@property (nonatomic, assign) LGEditViewType editViewType;
@property (nonatomic, assign) NSUInteger maxTextLength; /**<  最多字符限制 */
@property (nonatomic, assign) NSInteger minTextLength; /**< 最少字符限制 */
@property (nonatomic, assign) UIKeyboardType keyboardType; /**< 当前键盘样式 */

@property (nonatomic, readonly) id identifierCode; /**< identifier code */

- (id)initWithPlaceHolder:(NSString *)placeHolder defaultText:(NSString *)defaultText identifierCode:(id)code;

@end

@protocol LGEditViewControllerDelegate <NSObject>

- (void)lgEditViewControllerClickCancel:(LGEditViewController *)editViewController;

- (void)lgEditViewController:(LGEditViewController *)editViewController didSaveText:(NSString *)saveText;

@end
