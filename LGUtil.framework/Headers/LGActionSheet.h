//
//  LGActionSheet.h
//  LGUtil
//
//  Created by linguang on 15/4/26.
//  Copyright (c) 2015年 huyanping. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LGActionSheetButtonType)
{
    LGActionSheetButtonTypeNormal,
    LGActionSheetButtonTypeCancel,
    LGActionSheetButtonTypeOk,
};

@protocol LGActionSheetDelegate;

@interface LGActionSheet : UIView

@property (nonatomic, assign) NSInteger cancelButtonIndex;
@property (nonatomic, assign) id<LGActionSheetDelegate> delegate; /**< actionsheet delegate */

@property (nonatomic, assign) UIView *actionSheetCustomView; /**< action sheet custom view */

- (id)initWithTitle:(NSString *)title message:(NSString *)message delegate:(id<LGActionSheetDelegate>)aDelegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

- (void)show;

- (void)hidden;

@end


@protocol LGActionSheetDelegate <NSObject>

- (void)lgActionSheet:(LGActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex;

@end
