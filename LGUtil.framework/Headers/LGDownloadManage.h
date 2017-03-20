//
//  LGDownloadManage.h
//  AisenYun
//
//  Created by linguang on 16/3/18.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	下载状态
 */
typedef NS_ENUM(NSInteger, LGDownloadStatus)
{
    LGDownloadStatusNotStarted, /**< 未开始 */
    LGDownloadStatusDownloading, /**< 正在下载 */
    LGDownloadStatusDownloadSuccessed, /**< 下载成功 */
    LGDownloadStatusDownloadFailure, /**< 下载失败*/
};

/**
 *  @author linguang, 16-03-19 22:03:42
 *
 *  @brief 下载进度block
 *
 *  @param receivedSize 接收到的数据字节数1
 *  @param totalSize    总的数据字节数
 *  @param tag          设置tag值
 */
typedef void(^LGDownloadProgressBlock)(long long receivedSize, long long totalSize, NSInteger tag);

/**
 *  @author linguang, 16-03-19 22:03:03
 *
 *  @brief 下载完成后block
 *
 *  @param downloadStatus 下载状态
 *  @param filePath       下载文件路径
 *  @param tag          设置tag值
 */
typedef void(^LGDownloadCompletionBlock)(LGDownloadStatus downloadStatus,NSString *filePath, NSInteger tag);

/**
 *	@brief	下载管理
 */
@interface LGDownloadManage : NSObject

/**
 *	@brief	下载单例
 *
 *	@return	下载实体类
 */
+ (instancetype)sharedDownloadManage;

/**
 *  @author linguang, 16-03-20 00:03:59
 *
 *  @brief 异步下载文件
 *
 *  @param fileUrl         文件地址
 *  @param tag             设置的临时tag值
 *  @param progressBlock   进度回调
 *  @param completionBlock 完成回调
 */
- (void)asyncDownloadFileWithFileUrl:(NSString *)fileUrl tag:(NSInteger)tag progressBlock:(LGDownloadProgressBlock)progressBlock completionBlock:(LGDownloadCompletionBlock)completionBlock;

/**
 *  @author linguang, 16-03-20 16:03:41
 *
 *  @brief  下载进度
 *
 *  @param fileUrl 文件地址
 *
 *  @return 进度 0-1
 */
- (float)progressDownloadWithFileUrl:(NSString *)fileUrl;

/**
 *  @author linguang, 16-03-20 16:03:37
 *
 *  @brief 清空下载完成的文件
 *
 *  @param fileUrl 文件地址
 */
- (void)clearDownloadFileWithFileUrl:(NSString *)fileUrl;

/**
 *  @author linguang, 16-03-20 15:03:19
 *
 *  @brief 停止当前下载
 *
 *  @param fileUrl 当前下载的地址
 */
- (void)stopDownloadWithFileUrl:(NSString *)fileUrl;

/**
 *  @author linguang, 16-03-19 03:03:41
 *
 *  @brief 通过下载地址获取文件名称，带有扩展名
 *
 *  @param downloadUrl 下载地址
 *
 *  @return 文件名 123.txt
 */
- (NSString *)fileNameWithDownloadUrl:(NSString *)downloadUrl;

/**
 *  @author linguang, 16-03-19 03:03:36
 *
 *  @brief 通过下载地址获取到当前的下载状态
 *
 *  @param downloadUrl 下载地址
 *
 *  @return 下载状态
 */
- (LGDownloadStatus)downloadStatusWithDownloadUrl:(NSString *)downloadUrl;

/**
 *  @author linguang, 16-03-19 03:03:40
 *
 *  @brief 获取正在下载的文件临时路径
 *
 *  @param downloadUrl 下载地址
 *
 *  @return 文件下载临时路径
 */
- (NSString *)fileDownloadTempPathWithDownloadUrl:(NSString *)downloadUrl;

/**
 *  @author linguang, 16-03-19 03:03:01
 *
 *  @brief 通过下载地址获取到本地路径，没有下载完成返回nil
 *
 *  @param downloadUrl 下载地址
 *
 *  @return 文件的本地路径
 */
- (NSString *)fileLocalPathWithDownUrl:(NSString *)downloadUrl;

@end
