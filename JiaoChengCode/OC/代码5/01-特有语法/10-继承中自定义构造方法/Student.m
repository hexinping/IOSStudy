//
//  Student.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Student.h"

@implementation Student

/*
- (id)initWithAge:(int)age andName:(NSString *)name
{
    if (self = [super init]) {
//        现在本类中找,如果本类没有再区父类中找
        [self setAge:age];
        _name = name;
    }
    return self;
}
*/



- (id)initWithAge:(int)age andName:(NSString *)name
{
    self = [super initWithAge:age];
    if (self) {
        _name = name;
    }
    return self;
}


- (void)infomation
{
    [super infomation];
    NSLog(@"name = %@", _name);
}
@end
