//
//  UITextField+LGCommon.h
//  LGUtil
//
//  Created by linguang on 2017/3/15.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (LGCommon)

#pragma mark - 光标位置

/**
 获取光标选择的范围

 @return 光标选择范围
 */
- (NSRange)lgSelectedRange;

/**
 设置光标选择的范围

 @param range 光标选择货位
 */
- (void)lgSetSelectedRange:(NSRange)range;

@end
