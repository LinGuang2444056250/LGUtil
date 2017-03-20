//
//  LGFile.h
//  LGUtil
//
//  Created by linguang on 16/6/1.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

/**
 *	@brief	文件目录
 */
typedef NS_ENUM(NSInteger, LGFileCatalogType)
{
    LGFileCatalogTypeHome,     /**< 程序的Home目录 */
    LGFileCatalogTypeDocuments,/**< document目录 说明:苹果建议将程序中建立的或在程序中浏览到的文件数据保存在该目录下，iTunes备份和恢复的时候会包括此目录*/
    LGFileCatalogTypeCache,    /**< 获取Cache目录 说明:存放缓存文件，iTunes不会备份此目录，此目录下文件不会在应用退出删除*/
    LGFileCatalogTypeLibrary,  /**< 获取Library目录 说明:存储程序的默认设置或其它状态信息*/
    LGFileCatalogTypeTmp,      /**< 获取Tmp目录 说明:提供一个即时创建临时文件的地方,在重启时会丢弃所有的tmp文件*/
};

/**
 *	@brief	没有返回文件的block
 */
typedef void(^LGFileNoParamsBlock)();

/**
 *	@brief	文件管理
 */
@interface LGFile : NSObject

/**
 *	@brief	取出沙盒不同目录的文件夹的路径
 *
 *	@param 	catalogType 	目录类型
 *
 *	@return 对应目录类型的路径
 */
+ (NSString *)pathStringWithFileCatalogType:(LGFileCatalogType)catalogType;

/**
 *	@brief	取出沙盒不同目录的统一文件夹的路径（建议使用这个，可以统一管理 *）
 *
 *	@param 	catalogType 	目录类型
 *
 *	@return	对应目录类型下的公共文件夹的路径
 */
+ (NSString *)pathStringAtFolderFileCatalogType:(LGFileCatalogType)catalogType;

/**
 *  @author linguang, 15-10-10 11:10:28
 *
 *  @brief  取出沙盒下不同目录下的同一文件夹的文件夹的路径
 *
 *  @param catalogType 目录类型
 *  @param folderName  文件夹名称
 *
 *  @return 文件夹路径
 */
+ (NSString *)folderPathStringAtFolderFileCatalogType:(LGFileCatalogType)catalogType folderName:(NSString *)folderName;

/**
 *  @author linguang, 16-03-02 11:03:53
 *
 *  @brief 在当前文件夹路径下创建一个文件夹
 *
 *  @param currentFolderPath 当前的文件夹路径
 *  @param folderName        文件夹名
 *
 *  @return 创建的文件夹的路径
 */
+ (NSString *)folderPathStringAtFolderPath:(NSString *)currentFolderPath folderName:(NSString *)folderName;

/**
 *	@brief	设置该路径不备份
 *
 *	@param 	_URL 	文件路径url
 *
 *	@return	YES成功设置 NO设置失败
 */
+ (BOOL)addSkipBackupAttributeToItemAtURL:(NSURL *)_URL;

/**
 *	@brief	移除该目录的公共文件夹中的数据
 *
 *	@param 	catalogType 	目录类型
 *
 */
+ (void)removeFolderFileWithFileCatalogType:(LGFileCatalogType)catalogType completeBlock:(LGFileNoParamsBlock)completeBlock;

/**
 *  @author linguang, 16-06-01 14:06:37
 *
 *  @brief 移除路径下的所有文件
 *
 *  @param path          路径
 *  @param completeBlock 移除成功之后的回调
 */
+ (void)removeAllContentAtPath:(NSString *)path completeBlock:(LGFileNoParamsBlock)completeBlock;

#pragma mark - 计算大小

/**
 *  @author linguang, 16-06-02 18:06:06
 *
 *  @brief 获取磁盘总空间大小
 *
 *  @return 磁盘空间总大小 M
 */
+ (CGFloat)systemDiskOfAllSizeMBytes;

/**
 *  @author linguang, 16-06-02 18:06:17
 *
 *  @brief 获取磁盘可用空间大小
 *
 *  @return 磁盘可用大小 M
 */
+ (CGFloat)systemDiskOfFreeSizeMBytes;

/**
 *  @author linguang, 16-06-03 10:06:12
 *
 *  @brief 获取文件大小
 *
 *  @param filePath 文件路径
 *
 *  @return 文件大小
 */
+ (long long)fileSizeAtPath:(NSString *)filePath;

/**
 *  @author linguang, 16-06-03 10:06:47
 *
 *  @brief 获取文件下所有文件的大小
 *
 *  @param folderPath 文件夹路径
 *
 *  @return 所有文件大小
 */
+ (long long)folderSizeAtPath:(NSString *)folderPath;

@end
