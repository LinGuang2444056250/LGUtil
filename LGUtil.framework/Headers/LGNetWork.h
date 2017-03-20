//
//  LGNetWork.h
//  LGUtil
//
//  Created by linguang on 16/6/1.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @brief 网络状态
 */
typedef NS_OPTIONS(NSInteger, LGNetWorkConnectState) {
    LGNetWorkConnectStateError       = 0,  /**< 无网络状态 */
    LGNetWorkConnectStateWWAN        = 1,  /**< 3G网络    */
    LGNetWorkConnectStateWIFI        = 2   /**< WIFI网络  */
};

/**
 *	@brief	网络管理
 */
@interface LGNetWork : NSObject

/**
 * @brief 检查网络连接是否可用
 * @return BOOL YES 为可用 NO为不可用
 */
+ (BOOL)isConnectNetworkAvailable;

/**
 * @brief 判断当前网络的连接类型
 * @return LGNetWorkConnectState LGNetWorkConnectStateError没有网络连接
 *         LGNetWorkConnectStateWWAN为移动网络 LGNetWorkConnectStateWIFI为Wifi连接
 */
+ (LGNetWorkConnectState)connectNetWorkState;

/**
 *  @author linguang, 16-06-03 10:06:51
 *
 *  @brief 获取设备IP地址 以支持IPV6
 *
 *  @return IP地址
 */
+ (NSString *)getIPAddress;

@end
