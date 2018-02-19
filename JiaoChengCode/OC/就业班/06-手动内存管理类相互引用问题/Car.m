//
//  Car.m
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import "Car.h"
#import "Person.h"

@implementation Car

- (void)dealloc
{
    [super dealloc];
//    [_person release];
    NSLog(@"Car 被销毁了");
}

- (void)run
{
//    [_person eat];
    [_person eat];
}

@end
