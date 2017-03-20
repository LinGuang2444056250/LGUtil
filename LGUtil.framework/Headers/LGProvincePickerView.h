//
//  LGProvincePickerView.h
//  LGUtil
//
//  Created by linguang on 15/7/6.
//  Copyright (c) 2015年 AiSheng. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *	@brief	显示的省市县
 */
typedef NS_ENUM(NSInteger, LGProvincePickerViewType)
{
    LGProvincePickerViewTypeDefault         = 0,/**< 省市县显示三列 */
    LGProvincePickerViewTypeOnlyProvince    = 1,/**< 只显示省 */
    LGProvincePickerViewTypeProvinceAndCity = 2,/**< 显示省市 */
};

@interface LGProvincePickerView : UIPickerView

@property (nonatomic, assign) CGFloat rowHeight; /**< 显示的每一行的高度 */

- (id)initWithFrame:(CGRect)frame pickerViewType:(LGProvincePickerViewType)pickerViewType;

- (void)selectProvince:(NSString *)province city:(NSString *)city district:(NSString *)district animated:(BOOL)animated;

- (NSString *)selectProvinceString;

- (NSString *)selectCityString;

- (NSString *)selectDistrictString;

- (NSString *)selectProvinceCode;

- (NSString *)selectCityCode;

- (NSString *)selectCode;

+ (NSArray *)provinceArray;

+ (void)setProvinceArray:(NSArray *)provinceArray;

@end

