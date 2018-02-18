//
//  Person.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person

// 重写set方法
// 1.当想控制外界传入的一些数据的合理性安全性的时候我们就需要手动实现set方法
- (void)setAge:(int)age
{
    _age = age;
    if (_age < 0) {
        _age = 0;
    }
}

// 2.当我们手动同时实现了set/get方法的时候,property就不会自动给我们生成成员变量
//- (int)age
//{
//    return _age;
//}
@end
