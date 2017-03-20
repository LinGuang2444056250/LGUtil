//
//  LGUploadManage.h
//  AisenYun
//
//  Created by linguang on 16/4/11.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASINetWorkQueue.h"

/**
 *  @author linguang, 16-04-13 15:04:49
 *
 *  @brief 上传进度block
 *
 *  @param uploadedSize 上传的数据字节数
 *  @param totalSize    总的数据字节数
 *  @param tag          设置的tag值
 */
typedef void(^LGUploadProgressBlock)(long long uploadedSize, long long totalSize, NSInteger tag);

/**
 *  @author linguang, 16-04-13 15:04:33
 *
 *  @brief 上传完成的block
 *
 *  @param finished   上传是否完成，又或者中途失败
 *  @param baseObject 上传返回的数据
 *  @param tag        设置的tag值
 */
typedef void(^LGUploadCompletionBlock)(BOOL finished, id baseObject, NSInteger tag);

@interface LGUploadManage : NSObject

@property (nonatomic, retain) ASINetworkQueue *uploadQueue; /**< 上传队列 */
@property (nonatomic, assign) NSInteger uploadCount; /**< 上传个数 */

/**
 *	@brief	上传单例
 *
 *	@return	上传类
 */
+ (instancetype)sharedUploadManage;


/**
 *  @author linguang, 16-04-13 15:04:54
 *
 *  @brief 上传文件到服务器
 *
 *  @param url             上传接收的url
 *  @param dictionary      传的字段
 *  @param postFilePaths   上传的文件路径，请一定加扩展名，扩展名服务器用来判断是什么文件
 *  @param tag             上传的当前tag值
 *  @param progressBlock   上传进度block
 *  @param completionBlock 上传完成block
 */
- (void)asyncUploadFileWithUrl:(NSString *)url postDictionary:(NSDictionary *)dictionary postFilePaths:(NSArray *)postFilePaths tag:(NSInteger)tag progressBlock:(LGUploadProgressBlock)progressBlock completionBlock:(LGUploadCompletionBlock)completionBlock;

/**
 *  @author linguang, 16-04-13 16:04:31
 *
 *  @brief 当前tag的上传
 *
 *  @param tag 上传的tag值
 *
 *  @return 当前进度 0-1
 */
- (float)progressUploadWithTag:(NSInteger)tag;

/**
 *  @author linguang, 16-04-13 17:04:54
 *
 *  @brief 结束当前正在结束的任务
 *
 *  @param tag 当前re任务的
 */
- (void)stopUploadProgressWithTag:(NSInteger)tag;

@end
