//
//  LGLocalizedString.h
//  AisenYun
//
//  Created by linguang on 15/12/1.
//  Copyright © 2015年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>

#define LGLocalizedString(key) [[LGLocalizedString sharedLocalizedString] localizedStringWithKey:(key)]

/**
 *	@brief	设置语言类型
 */
typedef NS_ENUM(NSInteger, LGLocalizedType)
{
    LGLocalizedTypeSystem, /**< 系统默认 */
    LGLocalizedTypeBase, /**< 基础语言 */
    LGLocalizedTypeEnglish, /**< 英语 */
    LGLocalizedTypeChineseSimplified, /**< 中文简体 */
    LGLocalizedTypeChineseTraditional, /**< 中文繁体 */
};

extern NSString * const LGLocalizedStringWillChangeNotification; /**< 设置语言已变化 */

/**
 *  @author linguang, 16-06-02 16:06:09
 *
 *  @brief 国际化语言，只支持英语、中文简体、中文繁体
 */
@interface LGLocalizedString : NSObject

@property (nonatomic, assign) LGLocalizedType currentLocalizedType; /**< 当前语言 */

/**
 *	@brief	当前处理string
 *
 *	@return	当前本地化string
 */
+ (instancetype)sharedLocalizedString;

/**
 *  @author linguang, 16-06-02 16:06:33
 *
 *  @brief 通过key取出对应的国际化文字
 *
 *  @param key 对应的key
 *
 *  @return 结果文字
 */
- (NSString *)localizedStringWithKey:(NSString *)key;
- (NSString *)localizedStringWithKey:(NSString *)key bundle:(NSBundle *)bundle;

+ (NSString *)fileNameWithLocalizedType:(LGLocalizedType)type;
+ (NSString *)descriptionStringWithLocalizedType:(LGLocalizedType)type;

@end
