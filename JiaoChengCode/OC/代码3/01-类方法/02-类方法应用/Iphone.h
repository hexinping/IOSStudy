//
//  Iphone.h
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kIColorBlack,
    kIColorWithe,
    kIColorTuHaoJin
}IColor;

@interface Iphone : NSObject
{
    @public
    int _cpu;
    float _size;
    IColor _color;
}

- (void)aboutMyPhone;

//根据传入的颜色枚举返回对应的颜色
+ (NSString *)StringWithColor:(IColor)color;

@end
