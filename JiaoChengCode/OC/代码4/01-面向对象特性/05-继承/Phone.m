//
//  Phone.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Phone.h"

@implementation Phone
- (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    
    if (kFlashlightStatusOpen == status) {
        //        打开闪光灯
        [self openFlashlight];
        
    }else
    {
        //        关闭闪光灯
        [self closeFlashlight];
    }
    
    NSLog(@"拍照");
}


- (void)openFlashlight
{
    
    NSLog(@"Phone  - 打开闪光灯");
}

- (void)closeFlashlight
{
    NSLog(@"Phone - 关闭闪光灯");
}

- (void)setCpu:(int)cpu
{
    _cpu = cpu;
    
}

- (int)cpu
{
    return _cpu;
}


+ (void)test
{
    NSLog(@"+ Phone test");
}

- (void)test
{
    NSLog(@"- Phone test");
}
@end
