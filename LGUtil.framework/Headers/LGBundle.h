//
//  LGBundle.h
//  LGUtil
//
//  Created by linguang on 16/6/3.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	bundle类型
 */
typedef NS_ENUM (NSInteger, LGBundleType)
{
    LGBundleTypeSystem = 0, /**< 系统bundle */
    LGBundleTypeImage = 1, /**< 项目里Data文件夹下LGImage.bundle */
    LGBundleTypeJson = 3,
    LGBundleTypeJavaScript = 4,
    LGBundleTypeUtil = 10,
};

/**
 *	@brief	bundle 管理
 */
@interface LGBundle : NSObject

/**
 *	@brief	取出bundle
 *
 *	@param 	bundleType 	bundle 类型
 *
 *	@return	bundle
 */
+ (NSBundle *)bundlePathWithBundleType:(LGBundleType)bundleType;

/**
 *	@brief	取出当前bundle的文件路径
 *
 *	@param 	bundleType 	bundle 类型
 *	@param 	fileName 	文件名
 *
 *	@return	文件路径
 */
+ (NSString *)filePathFromBundleWithBundleType:(LGBundleType)bundleType fileName:(NSString *)fileName;

@end
