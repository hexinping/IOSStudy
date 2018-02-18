//
//  Person.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person

+ (id)person
{
//    Person *p1 = [Person alloc];
//    Person *p2 = [p1 init];
//    return p2;
    
//    return [[Person alloc]init];
//    self 谁调用就代表谁
    return [[self alloc]init];
}

/*
+ (id)personWithAge:(int)age
{
    Person *p = [[Person alloc]init];
    [p setAge:age];
    return p;
}
*/

+ (id)personWithAge:(int)age
{
    Person *p = [self person];
    [p setAge:age];
    return p;
}


@end
