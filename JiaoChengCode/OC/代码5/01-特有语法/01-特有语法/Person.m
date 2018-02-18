//
//  Person.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void)setAge:(int)age
{
    _age = age;
}

- (int)age
{
    return _age;
}

- (void)setNo:(int)no
{
    _no = no;
}

- (int)no
{
    return _no;
}

- (void)setName:(NSString *)name
{
    _name = name;
}

- (NSString *)name
{
    return _name;
}
//- (void)set_age:(int)_age
//{
//    
//}
//
//- (int)_age
//{
//    
//}
@end
