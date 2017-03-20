//
//  LGData.h
//  LGUtil
//
//  Created by linguang on 16/7/6.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @author linguang, 16-07-06 18:07:08
 *
 *  @brief 请求状态,包括错误状态
 */
typedef NS_ENUM(NSInteger,LGRequestErrorStatus) {
    LGRequestErrorStatusSucceed = 0, /**< 请求成功 */
    LGRequestErrorStatusFailed = 1, /**< 请求失败 */
    LGRequestErrorStatusConnectFailed = 2, /**< 连接失败 */
    LGRequestErrorStatusTimedOut = 3, /**< 请求超时 */
    LGRequestErrorStatusCancelled = 4, /**< 请求已取消 */
    LGRequestErrorStatusUrlErrorFormat = 5, /**< 请求地址格式错误 */
};

/**
 *	@brief	提交数据格式
 */
typedef NS_ENUM(NSInteger, LGPostDataFormatType)
{
    LGPostDataFormatFile = 0, /**< 文件上传 */
    LGPostDataFormatCommon = 1, /**< 普通上传 */
};

/**
 *  @author linguang, 16-07-07 11:07:38
 *
 *  @brief 请求block
 *
 *  @param status         请求状态
 *  @param responseObject 返回数据
 */
typedef void (^LGBaseBlock)(LGRequestErrorStatus status,id responseObject,NSDictionary *requestInfo);

@interface LGData : NSObject

#pragma mark - Common

/**
 *  @author linguang, 16-07-07 12:07:23
 *
 *  @brief 设置当前请求地址基础头
 *
 *  @param currentAppBaseURL 当前请求地址
 */
+ (void)setCurrentAppBaseURL:(NSString *)currentAppBaseURL;

/**
 *  @author linguang, 16-07-07 12:07:14
 *
 *  @brief 当前请求地址
 *
 *  @return 当前请求地址头
 */
+ (NSString *)currentAppBaseURL;

/**
 *  @author linguang, 16-07-15 10:07:30
 *
 *  @brief 返回完整的网络路径
 *
 *  @param urlString 访问的url内容
 *
 *  @return 网络请求URL
 */
+ (NSURL *)urlWithUrlContent:(NSString *)urlString;

/**
 *  @author linguang, 16-07-15 16:07:46
 *
 *  @brief 设置常用请求延时
 *
 *  @param timeOutSeconds 延时时间
 */
+ (void)setTimeOutSeconds:(NSTimeInterval)timeOutSeconds;

/**
 *  @author linguang, 16-09-06 11:09:49
 *
 *  @brief 把ASI的错误信息转换为LG的错误状态
 *
 *  @param error 错误
 *
 *  @return 请求错误
 */
+ (LGRequestErrorStatus)requestErrorStatusWithError:(NSError *)error;

/**
 *  @author linguang, 16-08-05 18:08:28
 *
 *  @brief 获取错误信息，如果想自定义，请在bundle_LocalizedString中修改
 *
 *  @param status 错误状态
 *
 *  @return 错误描述
 */
+ (NSString *)requestErrorDescriptionWithErrorStatus:(LGRequestErrorStatus)status;

#pragma mark - sync request

/**
 *  @author linguang, 16-07-15 11:07:45
 *
 *  @brief 同步请求网络数据，应用内有且只有一个
 *
 *  @param url   请求地址
 *  @param block 请求完成的回调
 */
+ (void)syncRequestWithURL:(NSString *)url requestBlock:(LGBaseBlock)block;

#pragma mark - async request

/**
 *  @author linguang, 16-07-15 11:07:27
 *
 *  @brief 无参数异步请求数据(会自动输出错误信息)
 *
 *  @param url          请求的地址
 *  @param notification 接收数据的通知
 *  @param currentObject 当前请求类
 */
+ (void)asyncRequestWithURL:(NSString *)url receiveNotification:(NSString *)notification currentObject:(NSObject *)currentObject;

/**
 *  @author linguang, 16-07-15 12:07:58
 *
 *  @brief 异步提交数据(会自动输出错误信息)
 *
 *  @param url          提交的地址
 *  @param params       提交的参数
 *  @param notification 接收的通知
 *  @param currentObject 当前请求类
 */
+ (void)asyncRequestWithURL:(NSString *)url postParams:(NSDictionary *)params receiveNotification:(NSString *)notification currentObject:(NSObject *)currentObject;

/**
 *  @author linguang, 16-07-15 11:07:07
 *
 *  @brief 无参数异步请求数据(需要手动显示请求错误的信息)
 *
 *  @param url   请求的地址
 *  @param block 请求完成的回调
 *  @param currentObject 当前请求类
 */
+ (void)asyncRequestWithURL:(NSString *)url requestBlock:(LGBaseBlock)block currentObject:(NSObject *)currentObject;

/**
 *  @author linguang, 16-07-06 18:07:16
 *
 *  @brief 异步提交数据
 *
 *  @param url    请求地址(需要手动显示错误)
 *  @param params 提交的数据
                  可以额外设置单个属性 LGPostDataFormat设置提交方式，默认是文件上传，如果是普通上传，需要设置
                  LGPostDataTimeOutSeconds 设置延时
                  提交正文内容 imageArrays 里面全部是图片数组
                  fileArrays 里面是多个文件上传，里面是每个字典，字典里有data(文件路径或者二进制),key(需要的key值，默认是file),contentType(文件类型,如果不设置会自动取扩展名),fileName(文件名称,服务器用来接收)
                  file 只是单个文件，优先图片，如果有扩展名，会优先取扩展名，没有扩展名判断图片格式
 *  @param block  执行完成的回调
 *  @param currentObject 当前请求类
 */
+ (void)asyncRequestWithURL:(NSString *)url postParams:(NSDictionary *)params requestBlock:(LGBaseBlock)block currentObject:(NSObject *)currentObject;

@end

//notification值
extern NSString * const LGDataNotificationNameKey; /**< 通知名称 NSString*/
extern NSString * const LGDataUrlKey; /**< 请求地址 */
extern NSString * const LGDataUrlShortCutKey; /**< 请求地址简单缩写 */
extern NSString * const LGDataPostDataKey; /**< 提交数据 */
extern NSString * const LGDataCurrentReuqestIdKey; /**< 当前请求id */

//请求错误判断 兼容之前的版本
extern NSString * const LGRequestError; /**< 请求出现错误 */

//post属性
extern NSString * const LGPostDataFormat; /**< 推送数据格式 LGPostDataFormatFile(文件上传) LGPostDataFormatDefault(普通上传) */
extern NSString * const LGPostDataTimeOutSeconds; /**< 延迟时间 CGFloat */
