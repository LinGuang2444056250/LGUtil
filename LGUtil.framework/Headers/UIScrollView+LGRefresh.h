//
//  UIScrollView+LGRefresh.h
//  LGUtil
//
//  Created by linguang on 16/7/22.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"

@interface UIScrollView (LGRefresh)

/**
 *  @author linguang, 16-07-22 19:07:00
 *
 *  @brief 初始化刷新
 *
 *  @param headerHidden 头部是否存在刷新
 *  @param footerHidden 底部是否存在刷新
 *  @param headerGif    头部是否使用动画
 *  @param target       刷新之后回调目标
 *  @param action       刷新之后的回调方法
 */
- (void)initRefreshWithHeaderHidden:(BOOL)headerHidden
                       footerHidden:(BOOL)footerHidden
                          headerGif:(BOOL)headerGif
                            target:(id)target
                      refreshAction:(SEL)action;

/**
 *  @author linguang, 16-08-01 10:08:43
 *
 *  @brief 开始头部刷新
 */
- (void)beginHeaderRefresh;

/**
 *  @author linguang, 16-08-01 10:08:23
 *
 *  @brief 开始底部刷新
 */
- (void)beginFooterRefresh;

/**
 *  @author linguang, 16-07-31 18:07:11
 *
 *  @brief 结束当前刷新（上拉、下拉）
 */
- (void)endCurrentRefresh;

@end
