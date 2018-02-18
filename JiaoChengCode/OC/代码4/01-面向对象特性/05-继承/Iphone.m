//
//  Iphone.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Iphone.h"

@implementation Iphone

// 如果在子类中实现了和父类中同名同类型的方法,我们称之为重写
- (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    NSLog(@"Iphone 拍照");
}

+ (void)test
{
    NSLog(@"Iphone test");
}
@end
