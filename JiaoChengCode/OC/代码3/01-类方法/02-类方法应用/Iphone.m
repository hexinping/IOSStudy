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
    NSString *rs = [Iphone StringWithColor:_color];
    NSLog(@"cpu = %d, size = %.1f color = %@", _cpu, _size, rs);
}

// 这个方法称之为工具方法
+ (NSString *)StringWithColor:(IColor)color
{
    switch (color) {
        case kIColorBlack:
            return @"黑色";
            break;
        case kIColorWithe:
            return @"白色";
            break;
        case kIColorTuHaoJin:
            return @"土豪金";
            break;
        default:
            return @"山寨颜色";
            break;
    }
    
}
@end
