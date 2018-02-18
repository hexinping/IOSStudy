//
//  KLine.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "KLine.h"

@implementation KLine
- (void)setMinPrice:(int)minPrice
{
    _minPrice = minPrice;
    
    _averagePrice = (_minPrice + _maxPrice) / 2;
}
- (int)minPrice
{
    return _minPrice;
}

// set方法监听了属性(成员变量)的改变
- (void)setMaxPrice:(int)maxPrice
{
    _maxPrice = maxPrice;
    _averagePrice = (_minPrice + _maxPrice) / 2;
}
- (int)maxPrice
{
    return _maxPrice;
}

- (int)averagePrice
{
    return _averagePrice;
}
@end
