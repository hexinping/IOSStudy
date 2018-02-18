//
//  Person.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void)feedDog:(Dog *)dog
{
    [dog eat];
}

- (void)feedCat:(Cat *)cat
{
    [cat eat];
}

- (void)feedAnimal:(Animal *)animal// Animal *animal = [Dog new];
{
//    运行时候动态绑定(动态的判断animal的真实类型)
    [animal eat];
}
@end
