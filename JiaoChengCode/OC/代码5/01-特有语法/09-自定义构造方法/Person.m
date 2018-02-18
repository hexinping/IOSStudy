//
//  Person.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person


- (id)init
{
    if (self = [super init]) {
        _age = 18;
    }
    return self;
}

/*
 // 自定义构造方法纯粹就是自己按照一定的约定书写的一个方法
 > 一定是对象方法 -号开头
 > 方法名称一般以init开头
 > 返回值一般是id
 */

- (id)initWithAge:(int)age
{
    self = [super init];
    if (self) {
//        把传入的年龄赋值给成员变量
        _age = age;
    }
    return self;
}

- (id)initWithAge:(int)age andGender:(Gender)gender
{
    self = [super init];
    if (self) {
        _age = age;
        _gender = gender;
    }
    return  self;
}

- (void)infomation
{
    NSLog(@"age = %d gender = %d", _age, _gender);
}
@end
