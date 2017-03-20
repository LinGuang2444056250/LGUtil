//
//  LGBaseModel.h
//  AisenYun
//
//  Created by linguang on 16/7/13.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @author linguang, 16-07-13 18:07:19
 *
 *  @brief 刷新block
 */
typedef void (^LGBaseRefreshBlock)(void);

@interface LGBaseModel : NSObject
{
    NSMutableArray *_resultArray; /**< 请求到的列表数据 */
    BOOL _refresh; /**< 是否刷新 */
    NSInteger _page; /**< 当前页数 */
    NSString *_lastLoadTime; /**< 最后一次加载时间 */
}

@property (nonatomic, retain) NSMutableArray *resultArray; /**< 请求到的列表数据 */
@property (nonatomic, assign) BOOL refresh; /**< 是否刷新 */
@property (nonatomic, assign) NSInteger page; /**< 当前页数 */
@property (nonatomic, retain) NSString *lastLoadTime; /**< 最后一次加载时间 */

/**
 *  @author linguang, 16-07-13 18:07:13
 *
 *  @brief 添加刷新的方法
 *
 *  @param target 刷新目标
 *  @param action 刷新动作
 */
- (void)addRefreshTarget:(id)target action:(SEL)action;

/**
 *  @author linguang, 16-07-13 18:07:23
 *
 *  @brief 添加刷新的代码块
 *
 *  @param block 代码
 */
- (void)addRefreshBlock:(LGBaseRefreshBlock)block;

/**
 *  @author linguang, 16-07-13 18:07:42
 *
 *  @brief 发送刷新信息
 */
- (void)sendRefreshInfo;

/**
 *  @author linguang, 16-07-14 17:07:15
 *
 *  @brief 开始请求数据
 */
- (void)startRequestData;

@end
