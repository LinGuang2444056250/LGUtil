//
//  LGTextField.h
//  MicroCityProgram
//
//  Created by huadong on 14-11-9.
//  Copyright (c) 2014年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LGTextFieldDelegate;

@interface LGTextField : UIView

@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) UIKeyboardType keyboardType;
@property (nonatomic, assign) id<LGTextFieldDelegate> delegate; /**< LGTextField delegate */
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, assign) UITextFieldViewMode  clearButtonMode;  /**< 显示清除的时候当编辑的时候 */
@property (nonatomic, assign) BOOL isHiddenBorder; /**< 是否隐藏边框 */

@property (nonatomic, retain) UITextField *aTextField;
@property (nonatomic, retain) UIView              *leftView;        // e.g. magnifying glass
@property (nonatomic, assign) UITextFieldViewMode  leftViewMode;    // sets when the left view shows up. default is UITextFieldViewModeNever

@property(nonatomic) UIReturnKeyType returnKeyType;                       // default is UIReturnKeyDefault (See note under UIReturnKeyType enum)

@end

@protocol LGTextFieldDelegate <NSObject>

@optional

- (void)lgTextFieldDidChange:(LGTextField *)textField;
- (BOOL)lgTextFieldShouldBeginEditing:(LGTextField *)textField;        // return NO to disallow editing.
- (void)lgTextFieldDidBeginEditing:(LGTextField *)textField;           // became first responder
- (BOOL)lgTextFieldShouldEndEditing:(LGTextField *)textField;          // return YES to allow editing to stop and to resign first responder status. NO to disallow the editing session to end
- (void)lgTextFieldDidEndEditing:(LGTextField *)textField;             // may be called if forced even if shouldEndEditing returns NO (e.g. view removed from window) or endEditing:YES called

- (BOOL)lgTextField:(LGTextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string;   // return NO to not change text

- (BOOL)lgTextFieldShouldClear:(LGTextField *)textField;               // called when clear button pressed. return NO to ignore (no notifications)
- (BOOL)lgTextFieldShouldReturn:(LGTextField *)textField;              // called when 'return' key pressed. return NO to ignore.


@end
