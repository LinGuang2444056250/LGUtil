//
//  LGPopoverListView.h
//  MicroCityProgram
//
//  Created by huadong on 14-10-21.
//  Copyright (c) 2014年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSString+FontAwesome.h"

extern NSString * const LGPopoverListLevelKey; /**< 级key */
extern NSString * const LGPopoverListPopKeyCode; /**< code值 */
extern NSString * const LGPopoverListPopKeyName; /**< 名称 */

@protocol LGPopoverListViewDelegate;

typedef enum {
    LGPopoverListViewLevelStyleSingleLevel = 0,
    LGPopoverListViewLevelStyleMutiLevel = 22
}LGPopoverListViewLevelStyle;

/**
 *	@brief	弹出视图样式
 */
typedef NS_ENUM(NSInteger, LGPopoverListViewStyle)
{
    LGPopoverListViewStyleDefault, /**< 默认样式 */
    LGPopoverListViewStyleNoCancel, /**< 没有取消按钮的样式,标题,只支持单层选择 */
};

@interface LGPopoverListView : UIView<UITableViewDataSource,UITableViewDelegate>
{
    NSMutableArray *_levelArray;
    BOOL _isUseFontAwesome;
}

@property (nonatomic, assign) id<LGPopoverListViewDelegate> delegate;
@property (nonatomic, retain) NSMutableArray *levelArray;
@property (nonatomic, retain) NSArray *tempLevelArray;
@property (nonatomic, retain) NSArray *secondArray;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, assign) LGPopoverListViewLevelStyle popStyle; /**< level */
@property (nonatomic, assign) BOOL isUseFontAwesome; /**< is use NSString + FontAwesome */

@property (nonatomic, assign) CGFloat cornerRadius; /**< corner radius */
@property (nonatomic, retain) UIColor *navigationBackgroundColor; /**< 导航栏背景色 */
@property (nonatomic, retain) UIColor *titleColor; /**< 导航栏字体颜色 */
@property (nonatomic, assign) NSInteger selectIndex; /**< 当前选择的index */
@property (nonatomic, retain) UIColor *selectColor; /**< 选择的颜色 */

- (id)initWithListArray:(NSArray *)alevelArray popoverListViewStyle:(LGPopoverListViewLevelStyle)_style;

- (id)initWithListArray:(NSArray *)alevelArray popoverListViewStyle:(LGPopoverListViewLevelStyle)_style popoverViewStyle:(LGPopoverListViewStyle)viewStyle;

- (void)showPopoverListView;

- (void)dismissPopoverListView;

@end

@protocol LGPopoverListViewDelegate <NSObject>

@optional

- (void)popverListView:(LGPopoverListView *)_listView DidSelectAtIndex:(NSInteger)_index withDictionary:(NSDictionary *)_dicationary;

- (void)popoverListViewDidEndWithLGPopoverListView:(LGPopoverListView *)_listView;

@end
