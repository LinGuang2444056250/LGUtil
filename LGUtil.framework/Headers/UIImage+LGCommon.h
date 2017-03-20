//
//  UIImage+LGCommon.h
//  LGUtil
//
//  Created by linguang on 16/6/2.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreImage/CoreImage.h>
#import <CoreGraphics/CoreGraphics.h>

@interface UIImage (LGCommon)

#pragma mark - 图片处理

/**
 图片是否拥有透明通道

 @return YES为有透明通道
 */
- (BOOL)hasAlphaChannel;

/**
 *  @author linguang, 16-06-03 17:06:09
 *
 *  @brief 修复方向
 *
 *  @return 返回修复成功的图片
 */
- (UIImage *)lgFixOrientation;

/**
 *  @author linguang, 16-06-03 17:06:36
 *
 *  @brief 修复方向
 *
 *  @param scale 是否缩放
 *
 *  @return 修复成功的图片
 */
- (UIImage *)lgFixOrientationWithScale:(BOOL)scale;

/**
 *  @author linguang, 16-06-06 11:06:04
 *
 *  @brief 对图片进行滤镜处理
 *
 *  @param filterName CIPhotoEffectInstant(怀旧), CIPhotoEffectMono(单色), CIPhotoEffectNoir(黑白), CIPhotoEffectFade(褪色), CIPhotoEffectTonal(色调), CIPhotoEffectProcess(冲印), CIPhotoEffectTransfer(岁月), CIPhotoEffectChrome(铭黄), CILinearToSRGBToneCurve, CISRGBToneCurveToLinear, CIGaussianBlur, CIBoxBlur, CIDiscBlur, CISepiaTone, CIDepthOfField
 *
 *  @return 处理之后的图片
 */
- (UIImage *)filterImageWithFilterName:(NSString *)filterName;

/**
 *  @author linguang, 16-06-06 11:06:10
 *
 *  @brief 对图片进行模糊处理
 *
 *  @param name   CIGaussianBlur(高斯模糊)、CIBoxBlur(均值模糊 Available in iOS 9.0 and later)、CIDiscBlur(环形卷积模糊(Available in iOS 9.0 and later))、CIMedianFilter(中值模糊, 用于消除图像噪点, 无需设置radius(Available in iOS 9.0 and later))、CIMotionBlur(运动模糊, 用于模拟相机移动拍摄时的扫尾效果(Available in iOS 9.0 and later))
 *  @param radius 对应的值，CIMedianFilter
 *
 *  @return 模糊处理之后的图片
 */
- (UIImage *)blurImageWithBlurName:(NSString *)name radius:(NSInteger)radius;

/**
 *  @author linguang, 16-06-06 11:06:07
 *
 *  @brief 调整图片饱和度，亮度，对比度
 *
 *  @param saturation 饱和度
 *  @param brightness 亮度: -1.0 ~ 1.0
 *  @param contrast   对比度
 *
 *  @return 调整之后的图片
 */
- (UIImage *)colorControlsWithSaturation:(CGFloat)saturation brightness:(CGFloat)brightness contrast:(CGFloat)contrast;

/**
 *  @author linguang, 16-07-25 16:07:00
 *
 *  @brief 把图片转换为提交的data
 *
 *  @return 提交的data
 */
- (NSData *)lgPostData;

/**
 *  @author linguang, 16-07-25 16:07:05
 *
 *  @brief 把image压缩成限制长度，限制最大大小的data
 *
 *  @param maxFileSize 文件最大大小K 0是原图
 *  @param maxWidth    图片最大长度 0是原图
 *
 *  @return 转换的二进制流
 */
- (NSData *)lgPostDataWithMaxFileSize:(NSUInteger)maxFileSize maxWidth:(CGFloat)maxWidth;

/**
 *  @author linguang, 16-07-25 16:07:59
 *
 *  @brief 缩放图片到指定尺寸
 *
 *  @param scaleSize 缩放的尺寸
 *
 *  @return 缩放之后的图片
 */
- (UIImage *)lgImageWithScaleSize:(CGSize)scaleSize;

/**
 设置图片透明度

 @param alpha 透明度
 @return 添加透明之后的图片
 */
- (UIImage *)lgImageByApplyingAlpha:(CGFloat)alpha;

#pragma mark - 扩展方法

/**
 *  @author linguang, 16-06-03 14:06:02
 *
 *  @brief 全屏截图
 *
 *  @return 截图
 */
+ (UIImage *)lgShotScreen;

/**
 *  @brief 通过UIView 转换成UIImage
 *  @param view 您要转化的view视图
 *  @return 转化之后的UIImage
 */
+ (UIImage *)lgImageWithView:(UIView *)view;

/**
 *  @author linguang, 16-06-03 15:06:27
 *
 *  @brief 截取view中某个区域生成一张图片
 *
 *  @param view  目标view
 *  @param scope 截取区域
 *
 *  @return 图片
 */
+ (UIImage *)lgImageShotWithView:(UIView *)view scope:(CGRect)scope;

/**
 *  @brief 图片平铺返回UIImage
 *  @param image 目标图片,您要平铺的图片
 *  @param size 平铺之后的大小
 *  @return 结果图片，平铺之后的图片
 */
+ (UIImage *)lgImageWithPatterImage:(UIImage *)image size:(CGSize)size;

/**
 *  @brief 返回一个颜色图片
 *  @param color 颜色
 *  @param imageSize 图片大小
 *  @return 图片
 */
+ (UIImage *)lgImageWithColor:(UIColor *)color imageSize:(CGSize)imageSize;

/**
 *  @author linguang, 16-06-06 14:06:16
 *
 *  @brief 生成黑色的二维码,识别速度比较快
 *
 *  @param content 里面包含的内容
 *
 *  @return 生成的二维码图片
 */
+ (UIImage *)qrCodeImageWithContent:(NSString *)content;

/**
 *  @author linguang, 16-06-06 14:06:56
 *
 *  @brief 生成带logo,指定颜色，指定大小的二维码
 *
 *  @param content   包含的内容
 *  @param width     二维码的宽度
 *  @param logo      上面要添加的logo，比如头像、公司logo
 *  @param logoFrame logo的位置及尺寸
 *  @param color     二维码颜色
 *
 *  @return 生成的二维码图片
 */
+ (UIImage *)qrCodeImageWithContent:(NSString *)content codeImageWidth:(CGFloat)width logo:(UIImage *)logo logoFrame:(CGRect)logoFrame color:(UIColor *)color;

/**
 *  @author linguang, 16-06-06 17:06:10
 *
 *  @brief 从图片识别出二维码扫描结果
 *
 *  @return 扫描的由字符串组成的数组
 */
- (NSArray *)qrCodeArrays;

/**
 *  @author linguang, 16-06-30 14:06:48
 *
 *  @brief 转换image,如果为空则调用lgImageUrlWithImage
 *
 *  @param image 可能是UIImage,NSString,NSURL
 *
 *  @return 图片
 */
+ (UIImage *)lgImageWithImage:(id)image;

/**
 *  @author linguang, 16-06-30 14:06:20
 *
 *  @brief 转换为图片地址，如果为空，则传入的不是地址
 *
 *  @param image 可能是UIImage,NSString,NSURL
 *
 *  @return 图片地址
 */
+ (NSURL *)lgImageUrlWithImage:(id)image;

@end
