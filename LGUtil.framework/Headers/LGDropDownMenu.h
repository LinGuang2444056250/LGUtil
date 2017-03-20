//
//  LGDropDownMenu.h
//  LGUtil
//
//  Created by linguang on 15/6/10.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef LG_INSTANCETYPE
#if __has_feature(objc_instancetype)
#define LG_INSTANCETYPE instancetype
#else
#define LG_INSTANCETYPE id
#endif
#endif

#ifndef LG_STRONG
#if __has_feature(objc_arc)
#define LG_STRONG strong
#else
#define LG_STRONG retain
#endif
#endif

#ifndef LG_WEAK
#if __has_feature(objc_arc_weak)
#define LG_WEAK weak
#elif __has_feature(objc_arc)
#define LG_WEAK unsafe_unretained
#else
#define LG_WEAK assign
#endif
#endif

/**
 *	@brief	drop down menu column
 */
typedef NS_ENUM(NSInteger, LGDropDownMenuColumn)
{
    LGDropDownMenuColumnLeft, /**< left column */
    LGDropDownMenuColumnRight,/**< right column */
};

/**
 *	@brief	drop down menu option number of columns
 */
typedef NS_ENUM(NSInteger, LGDropDownMenuColumnType)
{
    LGDropDownMenuColumnTypeSingle, /**< single column */
    LGDropDownMenuColumnTypeDouble, /**< double column */
};

/**
 *	@brief	drop down menu indicator style
 */
typedef NS_ENUM(NSInteger, LGDropDownMenuIndicatorStyle)
{
    LGDropDownMenuIndicatorStyleDefault, /**< default style */
    LGDropDownMenuIndicatorStyleNone,    /**< none style */
};

@class LGDropDownMenuIndexPath;

/**
 *	@brief	drop down menu data source
 */
@protocol LGDropDownMenuDataSource;

/**
 *	@brief	drop down menu delegate
 */
@protocol LGDropDownMenuDelegate;

/**
 *	@brief  custom drop down menu
 */
@interface LGDropDownMenu : UIView

@property (nonatomic, LG_WEAK) id<LGDropDownMenuDataSource> dataSource; /**< drop menu data source */
@property (nonatomic, LG_WEAK) id<LGDropDownMenuDelegate> delegate; /**< drop menu delegate */

@property (nonatomic, LG_STRONG) UIFont *menuTitleFont; /**< menu title font */
@property (nonatomic, LG_STRONG) UIColor *menuNormalColor; /**< menu normal color */
@property (nonatomic, LG_STRONG) UIColor *menuHighLightColor; /**< menu highlight color */
@property (nonatomic, LG_STRONG) UIColor *menuSelectColor; /**< menu select color */
@property (nonatomic, LG_STRONG) UIColor *indicatorColor; /**< indicator nomal color */

@property (nonatomic, LG_STRONG) LGDropDownMenuIndexPath *menuSelectIndexPath; /**< menu select index */

- (void)reloadData;

@end

@interface LGDropDownMenuIndexPath : NSObject

@property (nonatomic, assign) NSInteger option;   /**< menu option */
@property (nonatomic, assign) NSInteger leftRow;  /**< left row */
@property (nonatomic, assign) NSInteger rightRow; /**< right row */

- (LG_INSTANCETYPE)initWithOption:(NSInteger)option leftRow:(NSInteger)leftRow rightRow:(NSInteger)rightRow;

+ (LG_INSTANCETYPE)indexPathWithOption:(NSInteger)option leftRow:(NSInteger)leftRow rightRow:(NSInteger)rightRow;

@end

@protocol LGDropDownMenuDataSource <NSObject>

@required

- (NSInteger)dropDownMenu:(LGDropDownMenu *)menu numberOfLeftRowAtOption:(NSInteger)option;

- (NSString *)dropDownMenu:(LGDropDownMenu *)menu titleOfLeftRowAtOption:(NSInteger)option leftRow:(NSInteger)leftRow;


@optional

- (NSInteger)numberOfOptionInDropDownMenu:(LGDropDownMenu *)menu;

- (NSInteger)dropDownMenu:(LGDropDownMenu *)menu numberOfRightRowAtOption:(NSInteger)option leftRow:(NSInteger)leftRow;

- (NSString *)dropDownMenu:(LGDropDownMenu *)menu titleOfLeftRowAtOption:(NSInteger)option leftRow:(NSInteger)leftRow rightRow:(NSInteger)rightRow;

- (LGDropDownMenuColumnType)dropDownMenu:(LGDropDownMenu *)menu typeOfColumnAtOption:(NSInteger)option;

- (LGDropDownMenuIndicatorStyle)dropDownMenu:(LGDropDownMenu *)menu indicatorStyleForOption:(NSInteger)option;

- (CGFloat)dropDownMenu:(LGDropDownMenu *)menu widthOfMenuOptionAtOption:(NSInteger)option;

@end

@protocol LGDropDownMenuDelegate <NSObject>

@optional

- (BOOL)dropDownMenu:(LGDropDownMenu *)menu menuOptionTappedWithOption:(NSInteger)option;

- (void)dropDownMenu:(LGDropDownMenu *)menu didSelectRowAtIndexPath:(LGDropDownMenuIndexPath *)indexPath;

@end

