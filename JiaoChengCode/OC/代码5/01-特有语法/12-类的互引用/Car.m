//
//  Car.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Car.h"
//在.m中使用到改类的时候必须导入改类的头问题(声明)
#import "Person.h"


@implementation Car

- (void)run:(Person *)person  andAddress:(NSString *)address;
{
    [person run];
    NSLog(@"%@ 开车到 %@ 去",person , address);
}
@end
