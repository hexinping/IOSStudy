//
//  Gun.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Gun.h"

@implementation Gun


- (id)init
{
    if (self = [super init]) {
        _bulletCount = 10;
    }
    return self;
}
- (void)shoot
{
    if (_bulletCount > 0) {
        _bulletCount--;
         NSLog(@"剩余子弹 %d", _bulletCount);
    }else
    {
        NSLog(@"请上子弹");
    }
}
@end
