//
//  Iphone.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Iphone.h"

@implementation Iphone

- (void)aboutMyPhone
{
    NSLog(@"cpu = %d, size = %.1f weight = %d", _cpu, _size, _weight);
}
- (void)brand
{
    NSLog(@"苹果手机");
}

- (void)callWithNumber:(NSString *)number
{
    NSLog(@"打电话给 %@", number);
}
@end
