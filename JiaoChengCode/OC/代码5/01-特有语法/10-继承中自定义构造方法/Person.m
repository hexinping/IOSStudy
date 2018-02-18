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
        _age = 1;
    }
    
    return self;
}

- (id)initWithAge:(int)age
{
    if (self = [super init]) {
        _age = age;
    }
    return self;
}




- (void)infomation
{
    NSLog(@"age = %d", _age);
}
@end
