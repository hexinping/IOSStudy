//
//  Girl.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Girl.h"

@implementation Girl

- (void)test
{
//    在子类中该可以访问父类中protected修饰的成员变量
    NSLog(@"_no = %d", _no);
    
//    在子类中该可以访问父类中public修饰的成员变量
    NSLog(@"_age = %d", _age);
    
//    在子类中该"不可以"访问父类中private修饰的成员变量
//    NSLog(@"_weight = %d", _weight);
}
@end
