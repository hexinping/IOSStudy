//
//  Iphone.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Iphone.h"

@implementation Iphone

+ (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    if (kFlashlightStatusOpen == status) {
//        打开闪光灯
//        [Iphone openFlashlight];
//        self 谁调用这个方法slef就代表谁
//        self == Iphone
        [self openFlashlight];
        
    }else
    {
//        关闭闪光灯
//        [Iphone closeFlashlight];
//        在类方法中利用self可以调用其它类方法
        [self closeFlashlight];
    }
    
    NSLog(@"拍照");
}

+ (void)openFlashlight
{
    NSLog(@"打开闪光灯");
}

+ (void)closeFlashlight
{
    NSLog(@"关闭闪光灯");
}

- (void)setCpu:(int)cpu
{
    _cpu = cpu;
    
}

- (int)cpu
{
    return _cpu;
}

@end
