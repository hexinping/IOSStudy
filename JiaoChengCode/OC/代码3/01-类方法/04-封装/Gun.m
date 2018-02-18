//
//  Gun.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Gun.h"

@implementation Gun

- (void)shoot
{
    if (_bulletCount > 1) {
        _bulletCount -= 1;
    }
    NSLog(@"剩余子弹 %d", _bulletCount);
}

- (void)addBulletCount:(int)count
{
//    在方法中过滤脏数据
    if (count < 0) {
        count = 0;
    }
        _bulletCount = count;
    
}
/*
 成员变量以下划线开头好处
 1.可以和局部变量区分开来
 2.可以和方法的参数区分开来
 3.只要你打下划线就可以找到成员变量
 4.ios程序员都按照这个规则区写,提高了代码的阅读性
 */
- (void)setBulletCount:(int)bulletCount
{
    if (bulletCount < 0) {
        bulletCount = 0;
    }
    _bulletCount = bulletCount;

}

- (int)bulletCount
{
    return _bulletCount;
}


- (void)setModel:(NSString *)model
{
    _model = model;
}
- (NSString *)model
{
    return _model;
}

- (void)setColor:(IColor)color
{
    _color = color;
}
- (IColor)color
{
    return _color;
}

//- (void)setSerial:(NSString *)serial
//{
//    _serial = serial;
//}
- (NSString *)serial
{
    return @"itcast007";
}

@end
