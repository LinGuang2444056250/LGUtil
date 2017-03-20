//
//  LGPercentProgressView.h
//  LGUtil
//
//  Created by linguang on 16/6/7.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  @author linguang, 16-06-07 16:06:28
 *
 *  @brief 显示百分比的进度条
 */
@interface LGPercentProgressView : UIView

@property (nonatomic, retain) UIView *progressView; /**< 进度条 */
@property (nonatomic, retain) UILabel *percentLabel; /**< 上传百分比 */

@property (nonatomic, assign) BOOL isNeedDisplayPercent; /**< 是否需要显示百分比,默认是YES */
@property (nonatomic, assign) float progress; /**< 进度条 0 - 1 */

- (void)setProgress:(float)progress animated:(BOOL)animated;

@end
