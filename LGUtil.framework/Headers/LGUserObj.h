//
//  LGUserObj.h
//  LGUtil
//
//  Created by linguang on 2017/1/11.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

//set、get方法宏定义
#define LGUserObj_SetGet(Type, capitalName, lowerCaseName) \
- (void)set##capitalName:(Type *)temp \
{ \
    if (_##lowerCaseName == temp && _##lowerCaseName) \
    { \
        return; \
    } \
    LGRelease(_##lowerCaseName); \
    if (temp) { \
        _##lowerCaseName = [temp copy]; \
    } \
    [self setUserDefaultObject:_##lowerCaseName userDefaultName:Data##capitalName##UserDefault]; \
} \
 \
- (Type *)lowerCaseName \
{ \
    if (!_##lowerCaseName) { \
        Type *temp = [self userDefaultObjectForKey:Data##capitalName##UserDefault]; \
        if (temp) { \
            _##lowerCaseName = [temp copy]; \
        } \
    } \
    return _##lowerCaseName; \
}
/*
 //简写这种方法
- (void)setUserName:(NSString *)userName
{
    if (_userName == userName && _userName) {
        return;
    }
    LGRelease(_userName);
    if (userName) {
        _userName = [userName copy];
    }
    [self setUserDefaultObject:_userName userDefaultName:DataUserNameUserdefault];
}

- (NSString *)userName
{
    if (!_userName) {
        NSString *tempUserName = [self userDefaultObjectForKey:DataUserNameUserdefault];
        if (tempUserName) {
            _userName = [tempUserName copy];
        }
    }
    return _userName;
}
 */

/*
 #define Data<#cap#>UserDefault @"loginInfo_<#cap#>"
 */
#define DataUidUserDefault @"loginInfo_Uid"
#define DataAccountUserDefault @"loginInfo_Account"
#define DataPasswordUserDefault @"loginInfo_Password"
#define DataNickNameUserDefault @"loginInfo_NickName"
#define DataAvatarUserDefault @"loginInfo_Avatar"
#define DataSexUserDefault @"loginInfo_Sex"
#define DataBirthdayUserDefault @"loginInfo_Birthday"
#define DataPhoneUserDefault @"loginInfo_Phone"
#define DataEmailUserDefault @"loginInfo_Email"
#define DataSignatureUserDefault @"loginInfo_Signature"
#define DataAddressUserDefault @"loginInfo_Address"

/**
 *	@brief	数据发生改变的代理
 */
@protocol LGUserDelegate;

/**
 用户信息，谨记名称要一致
 */
@interface LGUserObj : NSObject
{
    NSString *_uid; /**< 用户id */
    NSString *_account; /**< 账号 */
    NSString *_password; /**< 密码 */
    NSString *_nickName; /**< 昵称 */
    NSString *_avatar; /**< 头像 */
    NSString *_sex; /**< 性别 */
    NSString *_birthday; /**< 生日 */
    NSString *_phone; /**< 手机 */
    NSString *_email; /**< 邮箱 */
    NSString *_signature; /**< 签名 */
    NSString *_address; /**< 地址 */
}

@property (nonatomic, copy) NSString *uid; /**< 用户id */
@property (nonatomic, copy) NSString *account; /**< 账号 */
@property (nonatomic, copy) NSString *password; /**< 密码 */
@property (nonatomic, copy) NSString *nickName; /**< 昵称 */
@property (nonatomic, copy) NSString *avatar; /**< 头像*/
@property (nonatomic, copy) NSString *sex; /**< 性别 */
@property (nonatomic, copy) NSString *birthday; /**< 生日 */
@property (nonatomic, copy) NSString *phone; /**< 手机号 */
@property (nonatomic, copy) NSString *email; /**< 邮箱*/
@property (nonatomic, copy) NSString *signature; /**< 邮箱 */
@property (nonatomic, copy) NSString *address; /**< 地址 */

/**
 当前用户信息

 @return 用户信息
 */
+ (instancetype)sharedUser;

/**
 设置用户代理

 @param userDelegate 用户接收代理
 */
- (void)setUserDelegate:(id<LGUserDelegate>)userDelegate;

/**
 移除用户代理

 @param userDelegate 用户代理
 */
- (void)removeUserDelegate:(id<LGUserDelegate>)userDelegate;

/**
 *	@brief	所有置空，如果要继承，请放到最后
 */
- (void)resetAllWithNil;

/**
 保存到userDefault中

 @param object 保存的内容
 @param defaultName default名称
 */
- (void)setUserDefaultObject:(id)object userDefaultName:(NSString *)defaultName;

/**
 从default中取出保存的内容

 @param defaultName default名称
 @return 保存的内容
 */
- (id)userDefaultObjectForKey:(NSString *)defaultName;

/**
 是否需要加密

 @param defaultName 加密的default名称
 @return YES需要加密，NO不需要加密
 */
- (BOOL)isEncodeOrDecodeWithUserDefaultsKey:(NSString *)defaultName;

@end

@protocol LGUserDelegate <NSObject>

@optional

/**
 *	@brief	当登录用户改变的时候，如果用户退出userId为空
 *
 *	@param 	userId 	当前登录的用户
 */
- (void)userIsChangeWithUserId:(NSString *)userId;

/**
 用户信息发生变化

 @param userObj 用户信息
 @param defaultName 发生变化的default
 */
- (void)userInformationIsChange:(LGUserObj *)userObj withDefaultName:(NSString *)defaultName;

@end
