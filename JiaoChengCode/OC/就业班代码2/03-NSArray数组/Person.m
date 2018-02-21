//
//  Person.m
//  02-集合类
//
//  Created by apple on 14-3-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import "Person.h"

@implementation Person

- (id)initWithName:(NSString *)name andAge:(int)age
{
    if (self = [super init])
    {
        _name = name;
        _age = age;
    }
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"age = %d name = %@",_age,_name];
}

@end
