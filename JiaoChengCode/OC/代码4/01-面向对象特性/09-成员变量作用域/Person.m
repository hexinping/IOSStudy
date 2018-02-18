//
//  Person.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person


- (void)test
{
//    当属性是public的时候可以在本类的对象方法中直接访问
    NSLog(@"_age = %d",_age);
//    当属性是private的时候可以在本类的对象方法中直接访问
    NSLog(@"_weight = %d", _weight);
//    当属性是protected的时候可以在本类对象方法中直接访问
    NSLog(@"_height = %.1f", _height);
}
@end
