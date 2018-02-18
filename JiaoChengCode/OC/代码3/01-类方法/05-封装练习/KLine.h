//
//  KLine.h
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KLine : NSObject
{
    int _minPrice;// 最低价格
    int _maxPrice;// 最高价格
    int _averagePrice;// 平均价格
}

- (void)setMinPrice:(int)minPrice;
- (int)minPrice;

- (void)setMaxPrice:(int)maxPrice;
- (int)maxPrice;

- (int)averagePrice;
@end
