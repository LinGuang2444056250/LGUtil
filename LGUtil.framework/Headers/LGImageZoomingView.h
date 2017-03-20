//
//  LGImageZoomingView.h
//  MicroCityProgram
//
//  Created by apple on 15-1-16.
//  Copyright (c) 2015年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LGImageZoomingViewDelegate;

@interface LGImageZoomingView : UIScrollView

@property (nonatomic, assign) id<LGImageZoomingViewDelegate> imageZoomingDelegate;

@property (nonatomic, readonly) UIImage *image;

- (void)displayImage:(UIImage *)image;

- (void)recoverFromResizing;

- (void)setHUDIsHidden:(BOOL)aIsHidden;

@end

@protocol LGImageZoomingViewDelegate <NSObject>

@optional

- (void)LGImageZoomingViewSingleTapWithLGImageZoomingView:(LGImageZoomingView *)aImageZoomingView;

- (void)LGImageZoomingViewDoubleTapWithLGImageZoomingView:(LGImageZoomingView *)aImageZoomingView;

@end
