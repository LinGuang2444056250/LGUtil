//
//  LGPreviewImageViewController.h
//  LGUtil
//
//  Created by linguang on 15/11/9.
//  Copyright © 2015年 AiSheng. All rights reserved.
//

#import "LGViewController.h"

@interface LGPreviewImageViewController : LGViewController

@property (nonatomic, retain) NSIndexPath *indexPath; /**< indexPath */
@property (nonatomic, assign) NSUInteger currentIndex; /**< current index */
@property (nonatomic, retain) NSString *identifier; /**< identifier*/
@property (nonatomic, retain) UIImage *currentImage; /**< current image */

- (id)initWithIsSavePhoto:(BOOL)savePhto;

@end
