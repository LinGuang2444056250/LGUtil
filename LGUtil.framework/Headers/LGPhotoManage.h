//
//  LGPhotoManage.h
//  AisenYun
//
//  Created by linguang on 16/5/3.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <Photos/Photos.h>

/**
 *	@brief	相册获取类型
 */
typedef NS_ENUM(NSInteger, LGPhotoFetchType)
{
    LGPhotoFetchTypeDefault, /**< 不区分类型 */
    LGPhotoFetchTypeAllPhoto, /**< 所有照片 */
    LGPhotoFetchTypeAllVideo, /**< 所有视频 */
};

//相册图片管理
@interface LGPhotoManage : NSObject

//默认的相册管理
+ (ALAssetsLibrary *)defaultAssetsLibrary;

@end

//相册属性
@interface LGPhotoGroup : NSObject

@property (nonatomic, retain) UIImage *posterImage; /**< 相册封面图片 */
@property (nonatomic, retain) NSString *groupName; /**< 相册名称 */
@property (nonatomic, assign) NSInteger photoCount; /**< 照片数量 */

@end

//照片属性
@interface LGPhoto : NSObject

@property (nonatomic, retain) UIImage *thumbnail; /**< 正方形的缩略图 */
@property (nonatomic, retain) UIImage *aspectRatioThumbnail; /**< 等比的缩略图 */
@property (nonatomic, retain) UIImage *originalImage; /**< 原图 */

@end
