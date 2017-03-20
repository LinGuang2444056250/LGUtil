//
//  LGTextView.h
//  MicroCityProgram
//
//  Created by apple on 15-2-1.
//  Copyright (c) 2015年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LGTextViewDelegate;

@interface LGTextView : UIView

@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIFont *font;

@property (nonatomic, assign) BOOL isHiddenBorder;
@property (nonatomic, assign) id<LGTextViewDelegate> delegate;

@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, assign) NSRange selectRange;

@property(nonatomic,getter=isScrollEnabled) BOOL          scrollEnabled;

- (void)reloadInputViews;

- (void)scrollRangeToVisible:(NSRange)range;

@end

@protocol LGTextViewDelegate <NSObject>

@optional

- (BOOL)lgTextViewShouldBeginEditing:(LGTextView *)textView;
- (BOOL)lgTextViewShouldEndEditing:(LGTextView *)textView;

- (void)lgTextViewDidBeginEditing:(LGTextView *)textView;
- (void)lgTextViewDidEndEditing:(LGTextView *)textView;

- (BOOL)lgTextView:(LGTextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text;
- (void)lgTextViewDidChange:(LGTextView *)textView;

- (void)lgTextViewDidChangeSelection:(LGTextView *)textView;

@end
