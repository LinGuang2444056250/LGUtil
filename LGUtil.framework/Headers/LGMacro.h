
//
//  LGMacro.h
//  LGUtil
//
//  Created by linguang on 16/6/24.
//  Copyright © 2016年 LG. All rights reserved.
//

#ifndef LGMacro_h
#define LGMacro_h

#import "LGFrame.h"
#import <UIKit/UIKit.h>

#pragma mark - Define

#if !defined(LG_EXTERN)
#  if defined(__cplusplus)
#   define LG_EXTERN extern "C"
#  else
#   define LG_EXTERN extern
#  endif
#endif

//MARK: 当前系统版本号
#define LG_SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] doubleValue]
//MARK:状态栏高度
#define LGCommonStatusHeight ([[LGFrame sharedFrame] lgStatusHeight])
//MARK:导航栏高度
#define LGCommonNavigationHeight ([[LGFrame sharedFrame] lgNavigationHeight])
//MARK:当前应用窗口宽度
#define LGCommonWidth ([[LGFrame sharedFrame] lgWidth])
//MARK:当前应用窗口高度
#define LGCommonHeight ([[LGFrame sharedFrame] lgHeight] - LGCommonStatusHeight)
//MARK:当前应用窗口frame
#define LGCommonFrame ([[LGFrame sharedFrame] frame])
//MARK:当前应用窗口除去导航栏的frame
#define LGCommonFrameWithOutBar ([[LGFrame sharedFrame] frameWithOutNavigationBar])

#endif /* LGMacro_h */
