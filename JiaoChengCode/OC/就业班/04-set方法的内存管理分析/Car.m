//
//  Car.m
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import "Car.h"

@implementation Car

- (void)dealloc
{
    [super dealloc];
    NSLog(@"Car 被销毁了 %d速度",_speed);
}

- (void)run
{
    NSLog(@"汽车跑起来了");
}

@end
