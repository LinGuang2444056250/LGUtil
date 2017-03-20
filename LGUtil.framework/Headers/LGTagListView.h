//
//  LGTagListView.h
//  LGUtil
//
//  Created by linguang on 2016/12/30.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

/**
 *	@brief	标签列表代理
 */
@protocol LGTagListDelegate;

@interface LGTagListView : UIView
{
    NSMutableArray *_buttonArray; /**< 标签按钮数组 */
}

@property (nonatomic, retain) UIColor *tagBackgroundColor; /**< 标签背景颜色 */
@property (nonatomic, retain) UIColor *tagBackgroundSelectColor; /**< 标签选定颜色 */
@property (nonatomic, retain) UIColor *tagColor; /**< 标签文字颜色 */
@property (nonatomic, retain) UIColor *tagSelectColor; /**< 标签选中文字颜色 */
@property (nonatomic, retain) UIFont *tagFont; /**< 标签文字字体 */
@property (nonatomic, assign) CGFloat tagSpacing; /**< 间距 */
@property (nonatomic, assign) UIEdgeInsets tagButtonEdgeInsets; /**< tag文字距离四周的边距 */

@property (nonatomic, retain) NSArray *tagArray; /**< 标签数组 */
@property (nonatomic, assign) id<LGTagListDelegate> delegate; /**< 标签按钮点击代理 */

/**
 添加标签

 @param tag 标签名称
 */
- (void)addTag:(NSString *)tag;

/**
 插入标签到对应的下标

 @param tag 标签名称
 @param index 对应的下标
 */
- (void)insertTag:(NSString *)tag atIndex:(NSInteger)index;

/**
 移除对应位置的标签

 @param index 下标
 */
- (void)removeTagAtIndex:(NSUInteger)index;

/**
 需要设置标签按钮可以调这个属性

 @param button 需要设置的button
 */
- (void)setButtonStyleWithButton:(UIButton *)button;

@end

@protocol LGTagListDelegate <NSObject>

/**
 点击标签按钮的代理

 @param tagListView 当前标签列表视图
 @param index 点击下标
 @param tagTitle 标签名称
 */
- (void)tagListView:(LGTagListView *)tagListView clickTagWithIndex:(NSInteger)index tagTitle:(NSString *)tagTitle;

@end
