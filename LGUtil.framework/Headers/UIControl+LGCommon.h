//
//  UIControl+LGCommon.h
//  LGUtil
//
//  Created by linguang on 16/8/16.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^LGActionBlock)(id sender, UIControlEvents controlEvents);

@interface UIControl (LGCommon)

/**
 *  @author linguang, 16-08-16 13:08:00
 *
 *  @brief 添加动作block方法
 *
 *  @param actionBlock   执行的block
 *  @param controlEvents 执行的事件
 */
- (void)addActionBlock:(LGActionBlock)actionBlock forControlEvents:(UIControlEvents)controlEvents;

/**
 *  @author linguang, 16-08-16 13:08:21
 *
 *  @brief 移除当前事件的执行block
 *
 *  @param controlEvents 当前事件
 */
- (void)removeActionBlockForControlEvents:(UIControlEvents)controlEvents;

@end
