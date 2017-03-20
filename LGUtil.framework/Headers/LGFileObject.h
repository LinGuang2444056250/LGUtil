//
//  LGFileObject.h
//  AisenYun
//
//  Created by linguang on 16/4/8.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGFileObject : NSObject

@property (nonatomic, retain) NSString *fileName; /**< 文件名称 */
@property (nonatomic, retain) NSString *fileExtension; /**< 文件扩展名 */
@property (nonatomic, retain) NSString *createDate; /**< 文件创建时间 */
@property (nonatomic, retain) NSString *modifyDate; /**< 修改时间 */
@property (nonatomic, assign) long long length; /**< 文件字节 */
@property (nonatomic, assign) BOOL isDirectory; /**< 是否是文件夹 */
@property (nonatomic, assign) NSInteger count; /**< 文件夹中文件个数 */

@end
