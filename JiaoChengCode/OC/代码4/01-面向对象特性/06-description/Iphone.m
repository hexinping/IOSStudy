//
//  Iphone.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Iphone.h"

@implementation Iphone

- (void)setCpu:(int)cpu
{
    _cpu = cpu;
    
}
- (int)cpu
{
    return _cpu;
}

- (void)setSize:(int)size
{
    _size = size;
}
- (int)size
{
    return _size;
}

- (void)setWeight:(int)weight
{
    _weight = weight;
}
- (int)weight
{
    return _weight;
}

- (void)setColor:(int)color
{
    _color = color;
}
- (int)color
{
    return _color;
}

- (NSString *)description
{
    NSString *str = [NSString stringWithFormat:@"size  =%d, weight = %d, color = %d, cpu = %d", _size, _weight, _color, _cpu];
    return str;
}

+ (NSString *)description
{
    return @"加号开头的description方法";
}
@end
