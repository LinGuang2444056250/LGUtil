//
//  LGPreviewImageView.h
//  AisenYun
//
//  Created by linguang on 16/4/6.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LGPreviewImageView : UIImageView

@property (nonatomic, retain) NSIndexPath *indexPath; /**< 当前的indexPath */
@property (nonatomic, assign) NSInteger index; /**< 当前数 */
@property (nonatomic, assign) BOOL isregist; /**< 是否注册 */

@end
