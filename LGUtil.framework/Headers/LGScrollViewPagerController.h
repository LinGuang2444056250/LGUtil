//
//  LGScrollViewPagerController.h
//  LGUtil
//
//  Created by linguang on 15/5/29.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	top view location
 */
typedef NS_ENUM(NSInteger, LGScrollViewPagerTopViewLocation)
{
    LGScrollViewPagerTopViewLocationTop    = 0,/**< top, screen's topest location  */
    LGScrollViewPagerTopViewLocationBottom = 1,/**< bottom, screen's bottomest location */
};

/**
 *	@brief	scroll view pager controlelr data source
 */
@protocol LGScrollViewPagerControllerDataSource;

/**
 *	@brief	scroll view pager controlelr delegate
 */
@protocol LGScrollViewPagerControllerDelegate;

/**
 *	@brief	scroll view pager controller
 */
@interface LGScrollViewPagerController : UIViewController

@property (nonatomic, retain) UIColor   *topTitleNormalColor;/**< view pager top title normal color */
@property (nonatomic, retain) UIColor   *topTitleSelectColor;/**< view pager top title select color */
@property (nonatomic, retain) UIFont    *topTitleFont;       /**< top title font */
@property (nonatomic, retain) UIColor   *topViewColor;       /**< top view background color */
@property (nonatomic, retain) UIColor   *topLineColor;       /**< top line view colors */

@property (nonatomic, retain) NSArray   *topTitleArray;      /**< current display top title array */
@property (nonatomic, retain) NSArray   *views;              /**< current display views */
@property (nonatomic, retain) NSArray   *viewControllers;    /**< current display viewControllers */

@property (nonatomic, assign) NSInteger currentSelectIndex;  /**< current select index */
@property (nonatomic, assign) CGFloat   topPromptLineHeight; /**< top single prompt line view height */
@property (nonatomic, assign) CGFloat   topSingleViewWidth;  /**< top single view width */
@property (nonatomic, assign) CGFloat   topViewHeight;       /**< top view height */
@property (nonatomic, assign) CGFloat   viewSpacingWidth;    /**< single view spacing width */
@property (nonatomic, assign) CGFloat   offsetY; /**< offset y */
@property (nonatomic, assign) UIEdgeInsets topScrollInset; /**< inset */
@property (nonatomic, assign) BOOL      topMenuUserInterfaced; /**< 菜单是否可以点击 */
@property (nonatomic, assign) BOOL      topMenuHidden; /**< 菜单是否隐藏 */
@property (nonatomic, assign) BOOL      scrollEnabled; /**< 是否可以滚动 */

@property (nonatomic, assign) id<LGScrollViewPagerControllerDataSource> dataSource; /**< scroll pager controller datasource */
@property (nonatomic, assign) id<LGScrollViewPagerControllerDelegate> delegate; /**< scroll pager controller delegate */
@property (nonatomic, assign) LGScrollViewPagerTopViewLocation topViewLocation;     /**< changes tab bar's location in the screen, Defaults to top */

/**
 *	@brief	reload scroll view pager controller when you change properties.
 */
- (void)reloadScrollPagerData;

/**
 设置当前index

 @param currentSelectIndex 当前index
 @param animated           动画
 */
- (void)setCurrentSelectIndex:(NSInteger)currentSelectIndex animated:(BOOL)animated;

/**
 *  @author linguang, 16-07-21 18:07:54
 *
 *  @brief 添加到上方菜单栏视图
 *
 *  @param topSubView 添加的视图
 */
- (void)addTopSubView:(UIView *)topSubView;

@end

@protocol LGScrollViewPagerControllerDataSource <NSObject>

@required

- (NSInteger)numberOfScrollViewPagerCountWithScrollViewPagerController:(LGScrollViewPagerController *)scrollPagerController;

@optional

- (NSString *)scrollViewPagerController:(LGScrollViewPagerController *)scrollPagerController titleOfTopViewAtIndex:(NSInteger)index;

- (UIView *)scrollViewPagerController:(LGScrollViewPagerController *)scrollPagerController viewAtContentScrollViewWithIndex:(NSInteger)index;

- (UIViewController *)scrollViewPagerController:(LGScrollViewPagerController *)scrollPagerController viewControllerAtContentScrollViewWithIndex:(NSInteger)index;

@end

@protocol LGScrollViewPagerControllerDelegate <NSObject>

@optional

- (void)scrollViewPager:(LGScrollViewPagerController *)scrollViewPager willChangeWithIndex:(NSInteger)index;

- (void)scrollViewPager:(LGScrollViewPagerController *)scrollViewPager didChangeWithIndex:(NSInteger)index;

@end
