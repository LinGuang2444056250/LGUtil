//
//  LGFileReadManage.h
//  AisenYun
//
//  Created by linguang on 16/4/8.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LGFileObject.h"

/**
 *	@brief 文件类型
 */
typedef NS_ENUM(NSInteger, LGFileType)
{
    LGFileTypeUnknow, /**< 未知 */
    LGFileTypePicture, /**< 图片 */
    LGFileTypeMusic, /**< 音乐 */
    LGFileTypeVideo, /**< 视频  */
    LGFileTypeTxt, /**< 文本 */
    LGFileTypePdf, /**< PDF文档 */
    LGFileTypeExcel, /**< 表格 */
    LGFileTypePpt, /**< ppt 幻灯片 */
    LGFileTypeWord, /**< word 文档 */
    LGFileTypeFlash, /**< flash */
    LGFileTypeZip, /**< 压缩包 */
};

@interface LGFileReadManage : NSObject

/**
 *  @author linguang, 16-04-08 21:04:38
 *
 *  @brief 通过字节得到描述的大小
 *
 *  @param size 字节
 *
 *  @return 描述的大小 898B,8.01K...
 */
+ (NSString *)fileDescriptionSizeWithFileSize:(long long)size;

/**
 *  @author linguang, 16-04-10 23:04:56
 *
 *  @brief 获取文件属性
 *
 *  @param filePath 文件路径
 *
 *  @return 文件封装好的方法
 */
+ (LGFileObject *)fileObjectWithFileUrl:(NSString *)filePath;

/**
 *  @author linguang, 16-07-26 11:07:25
 *
 *  @brief 通过文件扩展获取文件类型
 *
 *  @param extension 文件扩展
 *
 *  @return 文件类型
 */
+ (LGFileType)fileTypeWithFileExtension:(NSString *)extension;

@end
