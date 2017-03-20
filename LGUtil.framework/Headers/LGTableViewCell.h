//
//  LGTableViewCell.h
//  LGUtil
//
//  Created by linguang on 16/7/24.
//  Copyright © 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LGTableViewCell : UITableViewCell
{
    NSIndexPath *_lgIndexPath; /**< index path */
    CGFloat _accessoryWidth; /**< 右侧的accessory view的宽度 */
}

@property (nonatomic, retain) NSIndexPath *lgIndexPath; /**< index path */
@property (nonatomic, assign) CGFloat accessoryWidth; /**< 右侧的accessory view的宽度 */
@property (nonatomic, retain) UIImageView *accessIndicatorImageView; /**< 箭头 */

@end
