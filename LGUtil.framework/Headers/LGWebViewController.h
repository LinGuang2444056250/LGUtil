//
//  LGWebViewController.h
//  MicroCityProgram
//
//  Created by huadong on 14-11-14.
//  Copyright (c) 2014年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LGViewController.h"

/**
 *	@brief	已封装的网页视图控制器
 */
@interface LGWebViewController : LGViewController

@property (nonatomic, retain) UIWebView             *anewsWebView;              /**< 当前页面显示的网页 */

@property (nonatomic, retain) NSDictionary          *lastDictionary;            /**< 传入的字典 */
@property (nonatomic, retain) NSString              *currentDisplayTitle;       /**< 当前显示的标题 */
@property (nonatomic, retain) NSString              *currentDisplayHtml;        /**< 当前显示的网页 */

@property (nonatomic, assign) BOOL                  imagePreview;               /**< 是否开启图片预览（默认为YES) 可以点击图片查看大图 */
@property (nonatomic, assign) BOOL                  disabledJump;               /**< 不允许跳转显示新页面 默认为NO */
@property (nonatomic, assign) BOOL                  canSlideBack;               /**< 是否允许滑动返回 默认是YES*/
@property (nonatomic, assign) BOOL                  finishIsLoadShareButton;    /**< 加载完成是否显示分享按钮 默认为 YES */

/**
 *	@brief	初始化 eg. @{@"title":@"百度",@"html":@"www.baidu.com"}
 *
 *	@param 	_dic 	传入的字典
 *
 *	@return	LGWebViewController 类
 */
- (id)initWithDictionary:(NSDictionary *)_dic;

/**
 *	@brief	初始化 通过title与html
 *
 *	@param 	title 	网页题目
 *	@param 	html 	网页显示的html
 *
 *	@return	LGWebViewController 类
 */
- (id)initWithTitle:(NSString *)title displayHtml:(NSString *)html;


/**
 *	@brief	网页加载成功（可在子类中进行调用）
 */
- (void)webViewControllerDidFinished;

/**
 *	@brief	网页加载失败（可在子类中进行调用）
 */
- (void)webViewDidFailed;

/**
 *  @author linguang, 16-07-29 10:07:33
 *
 *  @brief 网页分享
 *
 *  @param title    网页标题
 *  @param imageUrl 图片地址
 *  @param content  内容
 *  @param linkUrl  链接地址
 */
- (void)webViewSharedWithTitle:(NSString *)title imageUrl:(NSString *)imageUrl content:(NSString *)content linkUrl:(NSString *)linkUrl;

@end
