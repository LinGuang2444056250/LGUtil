//
//  LGScrollZoomView.h
//  MicroCityProgram
//
//  Created by huadong on 14-12-5.
//  Copyright (c) 2014年 slideview. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LGScrollZoomViewDelegate;

@class LGScrollZoomViewScrollView;

@interface LGScrollZoomView : UIView<UIScrollViewDelegate>

@property (nonatomic, retain) UIImageView *bannerImageView;
@property (nonatomic, retain) LGScrollZoomViewScrollView *zoomScrollView;

@property (nonatomic, assign) id<LGScrollZoomViewDelegate> scrollZoomViewDelegate;
@property (nonatomic, assign) BOOL touching; /**< is touching */
@property (nonatomic, assign) CGFloat offsetY; /**< off set */
@property (nonatomic, assign) CGFloat parallaxHeight; /**< parallax height */
@property (nonatomic, assign) UIViewContentMode imageViewContentMode; /**< imageView contentMode */

- (id)initWithFrame:(CGRect)frame imageViewImageOrUrl:(id)_image;
- (id)initWithFrame:(CGRect)frame imageViewArray:(NSArray *)_imageArray;

- (void)setScrollZoomImage:(id)_image;

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView;
- (void)scrollViewDidScroll:(UIScrollView *)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView;

@end

@interface LGScrollZoomViewScrollView : UIView<UIScrollViewDelegate>

@property (nonatomic, assign) id<LGScrollZoomViewDelegate> scrollViewDelegate;

@property (nonatomic, retain) NSMutableArray *zoomScrollArray; /**< zoom scroll array */
@property (nonatomic, retain) NSMutableArray *imageViewerArray; /**< image viewer array */

- (id)initWithFrame:(CGRect)frame slideImages:(NSArray *)_slideImages;

@end

@protocol LGScrollZoomViewDelegate <NSObject>

@optional

- (void)scrollZoomView:(LGScrollZoomView *)aScrollZoomView didSelectIndex:(NSUInteger)_index;

- (BOOL)scrollZoomScrollView:(LGScrollZoomViewScrollView *)aScrollView didSelectIndex:(NSUInteger)_index;

@end
