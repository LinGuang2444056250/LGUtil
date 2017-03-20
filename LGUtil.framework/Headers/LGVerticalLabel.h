//
//  LGVerticalLabel.h
//  LGUtil
//
//  Created by linguang on 15/6/4.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	vertical enum
 */
typedef NS_ENUM(NSInteger, LGTextVerticalAlignment)
{
    LGTextVerticalAlignmentCenter = 0, /**< vertical alignment center */
    LGTextVerticalAlignmentTop = 1, /**< vertical alignment top */
    LGTextVerticalAlignmentBottom = 2, /**< vertical alignment bottom */
};

@interface LGVerticalLabel : UILabel
{
    LGTextVerticalAlignment _textVerticalAlignment; /**< text vertical alignment */
}

@property (nonatomic, assign) LGTextVerticalAlignment textVerticalAlignment; /**< text vertical alignment */

@end
