//
//  Girl.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Girl.h"

@implementation Girl

- (void)setAge:(int)age
{
    _age = age;
}
- (int)age
{
    return _age;
}

- (void)setName:(NSString *)name
{
    _name = name;
}
- (NSString *)name
{
    return _name;
}

- (void)setTel:(NSString *)tel
{
    _tel = tel;
}
- (NSString *)tel
{
    return _tel;
}


- (void)test
{
    NSLog(@"test");
}
- (NSString *)description
{
    NSString *str = [NSString stringWithFormat:@"age = %d, name = %@, tel = %@", _age, _name, _tel];
    return str;
}
@end
