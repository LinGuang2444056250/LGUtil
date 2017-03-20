//
//  LGSearchViewController.h
//  LGUtil
//
//  Created by linguang on 16/8/5.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <LGUtil/LGUtil.h>

@interface LGSearchViewController : LGViewController
{
    NSMutableArray *_searchResultArray; /**< search result array */
    UITableView *_searchTableView; /**< search table view */
}

@property (nonatomic, retain) NSMutableArray *searchResultArray; /**< search result  array*/
@property (nonatomic, retain) UITableView *searchTableView; /**< search table view */

@property (nonatomic, assign) BOOL firstLoaded; /**< is first load completed*/
@property (nonatomic, assign, readonly) BOOL refresh; /**< 是否是刷新 */
@property (nonatomic, assign, readonly) NSInteger page; /**< 当前页数 */
@property (nonatomic, retain) NSString *lastLoadTime; /**< 上次加载的时间 */


/**
 *  @author linguang, 16-07-14 17:07:42
 *
 *  @brief 刷新搜索数据
 */
- (void)reloadSearchData;

/**
 *  @author linguang, 16-08-05 18:08:55
 *
 *  @brief 开始请求数据
 *
 *  @param content 搜索内容
 */
- (void)startRequestSearchDataWithSearchContent:(NSString *)content;

/**
 *  @author linguang, 16-03-01 11:03:33
 *
 *  @brief 搜索栏文字改变
 *
 *  @param text 改变之后的值
 */
- (void)searchTextDidChangeWithSearchText:(NSString *)text;

/**
 *  @author linguang, 15-08-05 18:08:14
 *
 *  @brief  加载搜索栏以及搜索栏的文字
 *
 *  @param placeHolder 搜索栏默认显示的提示文字
 */
- (void)loadSearchChatFriendNavigationWithPlaceHolder:(NSString *)placeHolder;

/**
 *  @author linguang, 15-08-05 18:08:05
 *
 *  @brief  获取搜索的URL
 *
 *  @param searchContent 当前搜索的内容
 *
 *  @return 搜索的URL
 */
- (NSString *)searchListUrlWithSearchContent:(NSString *)searchContent;


/**
 *	@brief	post提交的字典
 *
 *	@param 	searchContent 	搜索内容
 *
 *	@return	搜索需要提交的字典
 */
- (NSDictionary *)searchDictionaryWithSearchContent:(NSString *)searchContent;


/**
 *  @author linguang, 15-08-06 21:08:13
 *
 *  @brief  返回tableview的section 数
 *
 *  @param tableView 当前tableview
 *
 *  @return table view section count
 */
- (NSInteger)tableViewNumberOfSectionWithTableView:(UITableView *)tableView;

/**
 *  @author linguang, 15-08-06 21:08:56
 *
 *  @brief  返回tableview 对应section的行数
 *
 *  @param tableView 当前tableview
 *  @param section   当前section值
 *
 *  @return 返回tableview 行数
 */
- (NSInteger)tableViewNumberOfRowWithTableView:(UITableView *)tableView atSection:(NSInteger)section;

/**
 *  @author linguang, 15-08-05 18:08:41
 *
 *  @brief  table view height
 *
 *  @param tableView current tableview
 *  @param indexPath current tableview indexPath
 *
 *  @return table view height
 */
- (CGFloat)tableViewHeightWithTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath;

/**
 *  @author linguang, 15-08-06 21:08:13
 *
 *  @brief  返回tableview对应section的headerView的高度
 *
 *  @param tableView 当前的tableView
 *  @param section   当前的section
 *
 *  @return 高度
 */
- (CGFloat)tableViewHeightForHeaderWithTableView:(UITableView *)tableView InSection:(NSInteger)section;

/**
 *  @author linguang, 15-08-06 21:08:01
 *
 *  @brief  返回tableView对应section的headerView
 *
 *  @param tableView 当前的tableView
 *  @param section   当前的section
 *
 *  @return headerView
 */
- (UIView *)tableViewHeaderViewWithTableView:(UITableView *)tableView InSection:(NSInteger)section;

/**
 *  @author linguang, 15-08-06 21:08:13
 *
 *  @brief  返回tableview对应section的footerView的高度
 *
 *  @param tableView 当前的tableView
 *  @param section   当前的section
 *
 *  @return 高度
 */
- (CGFloat)tableViewHeightForFooterViewWithTableView:(UITableView *)tableView InSection:(NSInteger)section;

/**
 *  @author linguang, 15-08-06 21:08:01
 *
 *  @brief  返回tableView对应section的footerView
 *
 *  @param tableView 当前的tableView
 *  @param section   当前的section
 *
 *  @return footerView
 */
- (UIView *)tableViewFooterViewWithTableView:(UITableView *)tableView InSection:(NSInteger)section;

/**
 *  @author linguang, 15-08-05 18:08:12
 *
 *  @brief  tableview cell delegate
 *
 *  @param tableView current table view
 *  @param indexPath current indexPath
 *
 *  @return table view cell
 */
- (UITableViewCell *)tableViewCellWithTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath;

/**
 *  @author linguang, 15-08-05 18:08:45
 *
 *  @brief  tableview select indexpath function
 *
 *  @param tableView current tableview
 *  @param indexPath current indexPath
 */
- (void)tableViewDidSelectWithTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath;

/**
 *  @author linguang, 15-08-05 18:08:14
 *
 *  @brief  request complete with object
 *
 *  @param object request data
 */
- (void)getSearchListDataAtRequestCompleteWithObject:(id)object;

+ (void)setCurrentRefreshState:(BOOL)isCoffe;

@end
