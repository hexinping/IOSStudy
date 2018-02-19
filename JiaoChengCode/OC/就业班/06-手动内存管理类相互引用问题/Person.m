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
    [super dealloc];
    [_car release];
    NSLog(@"Person 被销毁了");
}

- (void)eat
{
    NSLog(@"人吃东西才有力气");
}

@end
