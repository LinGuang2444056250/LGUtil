//
//  LGPhotoBrowserViewController.h
//  MicroCityProgram
//
//  Created by apple on 15-1-20.
//  Copyright (c) 2015年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LGViewController.h"

@protocol LGPhotoBrowserDelegate;

@interface LGPhotoBrowserViewController : LGViewController

@property (nonatomic, assign) id<LGPhotoBrowserDelegate> photoBrowserDelegate;

@property (nonatomic, assign) NSUInteger photoTag;

- (id)initWithImageUrlArray:(NSArray *)aImageArray WithIndex:(NSUInteger)aIndex;

@end

@protocol LGPhotoBrowserDelegate <NSObject>

@optional

- (void)photoBrowser:(LGPhotoBrowserViewController *)_photoBrowser didScrollIndex:(NSUInteger)_index;

@end