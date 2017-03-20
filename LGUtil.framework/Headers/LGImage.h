//
//  LGImage.h
//  LGUtil
//
//  Created by linguang on 16/6/3.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*
 1.JPEG
 - 文件头标识 (2 bytes): 0xff, 0xd8 (SOI) (JPEG 文件标识)
 - 文件结束标识 (2 bytes): 0xff, 0xd9 (EOI)
 
 2.TGA
 - 未压缩的前5字节    00 00 02 00 00
 - RLE压缩的前5字节   00 00 10 00 00
 
 3.PNG
 - 文件头标识 (8 bytes)   89 50 4E 47 0D 0A 1A 0A
 
 4.GIF
 - 文件头标识 (6 bytes)   47 49 46 38 39(37) 61
 G    I   F   8    9 (7)   a
 
 5.BMP
 - 文件头标识 (2 bytes)   42 4D
 B  M
 
 6.PCX
 - 文件头标识 (1 bytes)   0A
 
 7.TIFF
 - 文件头标识 (2 bytes)   4D 4D 或 49 49
 
 8.ICO
 - 文件头标识 (8 bytes)   00 00 01 00 01 00 20 20
 
 9.CUR
 - 文件头标识 (8 bytes)   00 00 02 00 01 00 20 20
 
 10.IFF
 - 文件头标识 (4 bytes)   46 4F 52 4D
 F   O  R  M
 
 11.ANI
 - 文件头标识 (4 bytes)   52 49 46 46
 R   I    F   F
 */
typedef NS_ENUM (NSInteger,LGImageType)
{
    LGImageTypeJPEG,
    LGImageTypePNG,
    LGImageTypeBMP,
    LGImageTypeTGA,
    LGImageTypeGIF,
    LGImageTypePCX,
    LGImageTypeTIFF,
    LGImageTypeICO,
    LGImageTypeCUR,
    LGImageTypeIFF,
    LGImageTypeANI,
    LGImageTypeNONE,
};

@interface LGImage : NSObject

#pragma mark - 快捷取图片

/**
 *  @author linguang, 16-06-03 12:06:54
 *
 *  @brief 取出LGImage.bundle中的图片，图片不缓存到内存中
 *
 *  @param imageName 图片名称
 *
 *  @return UIImage类型
 */
+ (UIImage *)bundleImageNamed:(NSString *)imageName;

/**
 *  @author linguang, 16-06-03 12:06:59
 *
 *  @brief 取出CommonImage文件夹下的文件名，图片缓存到内存中
 *
 *  @param imageName 图片名称
 *
 *  @return 图片
 */
+ (UIImage *)imageNamed:(NSString *)imageName;

/**
 *  @author linguang, 16-09-02 12:09:46
 *
 *  @brief 取出IMResource文件夹下的文件名
 *
 *  @param imageName 图片名称
 *
 *  @return 图片
 */
+ (UIImage *)imImageNamed:(NSString *)imageName;

/**
 *  @author linguang, 16-06-03 12:06:32
 *
 *  @brief 取出OtherImage文件夹下的图片，图片缓存到内存中
 *
 *  @param imageName 图片名称
 *
 *  @return 图片
 */
+ (UIImage *)otherImageNamed:(NSString *)imageName;

#pragma mark - 缓存图片

/**
 *  @author linguang, 16-06-06 15:06:57
 *
 *  @brief 保存图片
 *
 *  @param imageId   图片标识符
 *  @param saveImage 保存的图片
 */
+ (void)saveImageWithImageId:(NSString *)imageId saveImage:(UIImage *)saveImage;

/**
 *  @author linguang, 16-06-06 15:06:45
 *
 *  @brief 取出保存图片，一般通过绘制的图片需要保存
 *
 *  @param imageId 图片id
 *
 *  @return 图片
 */
+ (UIImage *)savedImageWithImageId:(NSString *)imageId;

#pragma mark - 图片格式

/**
 *  @author linguang, 16-07-20 15:07:37
 *
 *  @brief 判断当前图片类型
 *
 *  @param imageData 图片二进制
 *
 *  @return 图片格式
 */
+ (LGImageType)imageTypeWithData:(NSData *)imageData;

/**
 *  @author linguang, 16-08-29 18:08:31
 *
 *  @brief 判断当前图片后缀名
 *
 *  @param imageData 图片二进制
 *
 *  @return 图片后缀名
 */
+ (NSString *)imageExtensionWithData:(NSData *)imageData;

#pragma mark - 图片尺寸

/**
 *  @author linguang, 16-07-25 15:07:15
 *
 *  @brief 缩放成标准(800)的尺寸
 *
 *  @param sourceSize 目标尺寸
 *
 *  @return 缩放之后的尺寸
 */
+ (CGSize)scaleSize:(CGSize)sourceSize;

/**
 *  @author linguang, 16-07-25 15:07:27
 *
 *  @brief 缩放成固定宽度的尺寸
 *
 *  @param sourceSize 目标尺寸
 *  @param maxWidth   最大宽度
 *
 *  @return 缩放之后的尺寸
 */
+ (CGSize)scaleSize:(CGSize)sourceSize maxWidth:(CGFloat)maxWidth;

/**
 *  @author linguang, 16-07-25 17:07:29
 *
 *  @brief 得到图片尺寸，最好在异步执行，比较费时
 *
 *  @param image 图片，可以是图片路径，图片，二进制，图片网络地址
 *
 *  @return 图片尺寸
 */
+ (CGSize)imageSizeWithImage:(id)image;

/**
 *  @author linguang, 16-07-25 18:07:17
 *
 *  @brief 得到图片尺寸，最好在异步执行，比较费时
 *
 *  @param image       图片，可以是图片路径，图片，二进制，图片网络地址
 *  @param defaultSize 存在图片时的默认尺寸
 *
 *  @return 图片尺寸
 */
+ (CGSize)imageSizeWithImage:(id)image defaultSize:(CGSize)defaultSize;

#pragma mark - 其他

/**
 *  @author linguang, 16-08-31 12:08:09
 *
 *  @brief 保存图片二进制到临时文件，会自动添加图片后缀名，在应用退出的时候回删除
 *
 *  @param imageData  图片二进制
 *
 *  @return 图片保存之后的路径，如果保存没有成功，则返回nil
 */
+ (NSString *)saveImageToTempFileWithImageData:(NSData *)imageData;

@end
