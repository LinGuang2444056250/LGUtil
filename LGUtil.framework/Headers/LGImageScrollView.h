//
//  LGImageScrollView.h
//  MicroCityProgram
//
//  Created by apple on 15-1-19.
//  Copyright (c) 2015年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LGImageScrollViewDelegate;

@interface LGImageScrollView : UIView

@property (nonatomic, assign) id<LGImageScrollViewDelegate> scrollViewDelegate;

@property (nonatomic, assign) NSUInteger currentPage;
@property (nonatomic, retain) UIImage *currentImage;

- (id)initWithFrame:(CGRect)frame withImageUrlArray:(NSArray *)aImageArray index:(NSUInteger)index;

@end

@protocol LGImageScrollViewDelegate <NSObject>

@optional

- (void)imageScrollViewSingleTapWithView:(LGImageScrollView *)aImageScrollView;

- (void)imageScrollViewDoubleTapWithView:(LGImageScrollView *)aImageScrollView;

- (void)imageScrollViewDidAppearAtView:(LGImageScrollView *)aImageScrollView withImage:(UIImage *)aImage withPage:(NSUInteger)aPage;

@end
