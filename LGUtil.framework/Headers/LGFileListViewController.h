//
//  LGFileListViewController.h
//  AisenYun
//
//  Created by linguang on 16/4/8.
//  Copyright © 2016年 AiSheng. All rights reserved.
//

#import "LGViewController.h"

@interface LGFileListViewController : LGViewController

@property (nonatomic, assign) BOOL firstLoaded; /**< 第一次加载是否完成 */

- (id)initWithGroupPath:(NSString *)groupPath;

@end
