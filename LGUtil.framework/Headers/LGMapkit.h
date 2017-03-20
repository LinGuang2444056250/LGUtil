//
//  LGMapkit.h
//  LGUtil
//
//  Created by linguang on 2016/12/21.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "LGMacro.h"

/**
 *	@brief	各个地图，各个地图必须在info.plist中配置 LSApplicationQueriesSchemes
 */
typedef NS_ENUM(NSInteger, LGMapType)
{
    LGMapTypeApple = 0, /**< 苹果地图 不用配置*/
    LGMapTypeBaidu = 1, /**< 百度地图 baidumap*/
    LGMapTypeGaoDe = 2, /**< 高德地图 iosamap*/
    LGMapTypeTencent = 3, /**< 腾讯地图 qqmap*/
    LGMapTypeGoogle = 4, /**< 谷歌地图 comgooglemaps*/
};

/**
 *	@brief	路线方式
 */
typedef NS_ENUM(NSInteger, LGMapRouteMode)
{
    LGMapRouteModeWalking = 0, /**< 步行方式 */
    LGMapRouteModeTransit = 1, /**< 公交方式 */
    LGMapRouteModeDriving = 2, /**< 驾车方式  */
};

/**
 *	@brief	调起状态
 */
typedef NS_ENUM(NSInteger, LGMapStatus)
{
    LGMapStatusUnknow = 0, /**< 未知错误 */
    LGMapStatusUninstalled = -1, /**< 未安装 */
    LGMapStatusSuccess = 1, /**< 成功 */
};

@interface LGMapkit : NSObject

/**
 把火星坐标转换为百度坐标

 @param gg_lat 火星纬度
 @param gg_lon 火星经度
 @param bd_lat 百度纬度
 @param bd_lon 百度经度
 @return 百度坐标
 */
LG_EXTERN void LGTransformMarsFromBaidu(double gg_lat, double gg_lon, double *bd_lat, double *bd_lon);

/**
 把百度坐标转换为火星坐标

 @param bd_lat 百度纬度
 @param bd_lon 百度经度
 @param gg_lat 火星纬度
 @param gg_lon 火星经度
 @return 火星坐标
 */
LG_EXTERN void LGTransformBaiduFromMars(double bd_lat, double bd_lon, double *gg_lat, double *gg_lon);

/**
 打开地图app进行路径规划

 @param mapType 地图app
 @param fromCoordinate 起点经纬度
 @param fromName 起点名称
 @param toCoordinate 终点经纬度
 @param toName 终点名称
 @param routeMode 路线方式
 @param backScheme 返回scheme
 @return 调起状态值
 */
+ (LGMapStatus)openMapAppRouteWithMapType:(LGMapType)mapType
                         fromCoordinate2D:(CLLocationCoordinate2D)fromCoordinate
                                 fromName:(NSString *)fromName
                           toCoordinate2D:(CLLocationCoordinate2D)toCoordinate
                                   toName:(NSString *)toName
                                routeMode:(LGMapRouteMode)routeMode
                               backScheme:(NSString *)backScheme;

@end
