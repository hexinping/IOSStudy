//
//  Person.m
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import "Person.h"

@implementation Person

- (void)dealloc
{
    //如果一个对象被生成成了成员变量或者是使用@property生成的符合内存管理的set方法,那么一定要在 dealloc函数对应一次release操作
    [super dealloc];
    [_car release];
    NSLog(@"Person 被销毁了");
}

@end
