//
//  LGAlertView.h
//  AisenYun
//
//  Created by linguang on 15/12/23.
//  Copyright © 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LGAlertView;

/**
 *  @author linguang, 16-08-24 15:08:06
 *
 *  @brief alertView代理block
 *
 *  @param buttonIndex 对应的点击index
 *  @param alertView   提示框
 */
typedef void (^LGAlertViewBlock)(NSUInteger buttonIndex, LGAlertView *alertView);

@interface LGAlertView : UIAlertView

+ (id)showAlertWithTitle:(NSString *)title message:(NSString *)message completionBlock:(LGAlertViewBlock)block cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

@end
