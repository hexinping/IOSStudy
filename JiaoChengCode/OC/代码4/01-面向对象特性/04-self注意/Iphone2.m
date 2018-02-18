//
//  Iphone2.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

//
//  Iphone.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Iphone2.h"

@implementation Iphone2
+ (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    if (kFlashlightStatusOpen == status)
    {
        //        打开闪光灯
        [self openFlashlight];
        
    }else
    {
        
        //        关闭闪光灯
        [self closeFlashlight];
    }
    
    NSLog(@"拍照");
}

+ (void)openFlashlight
{
    
    NSLog(@"类方法 - 打开闪光灯");
//    在类方法中不能利用self调用和自己同名的类方法,会造成死循环
    [self openFlashlight];
}

+ (void)closeFlashlight
{
    NSLog(@"类方法 - 关闭闪光灯");
}

#pragma mark - 对象方法

- (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    
    NSLog(@"self = %p", self);
    
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
    
    NSLog(@"对象方法 - 打开闪光灯");
}

- (void)closeFlashlight
{
    NSLog(@"对象方法 - 关闭闪光灯");
//    在对象方法中不能利用self调用和自己同名的对象方法,会造成死循环
//    [self closeFlashlight];
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
