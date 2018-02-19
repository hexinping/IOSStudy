//
//  Person.m
//  01-手动内存管理基本概念
//
//  Created by aplle on 14-3-17.
//
//

#import "Person.h"

@implementation Person

- (void)dealloc
{
    [super dealloc];
    
    NSLog(@"Person 被销毁了");
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"age = %d",_age];
}
- (void)run
{
    NSLog(@"人跑起来了");
}

@end
