//
//  LGScrollView.h
//
//  Created by LG on 15-1-23.
//  Copyright (c) 2015年 lingguan. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LGScrollViewDelegate;

@interface LGScrollView : UIView

@property (nonatomic, assign) id<LGScrollViewDelegate> scrollViewDelegate;

@property (nonatomic, assign) NSUInteger currentPage;
@property (nonatomic, retain) UIImage *currentImage;

- (id)initWithFrame:(CGRect)frame withImageArray:(NSArray *)aImageArray index:(NSUInteger)index;

@end

@protocol LGScrollViewDelegate <NSObject>

@optional

- (void)scrollView:(LGScrollView *)aScrollView didSelectAtIndex:(NSUInteger)aIndex;

- (void)scrollView:(LGScrollView *)aScrollView didScrollWithIndex:(NSUInteger)aIndex;

@end
