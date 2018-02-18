//
//  Iphone.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Iphone.h"

@implementation Iphone
/*
+ (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    if (kFlashlightStatusOpen == status) {
//        打开闪光灯
//        [Iphone openFlashlight];
//        self 谁调用这个方法slef就代表谁
//        self == Iphone
 
//         +[Iphone openFlashlight]: unrecognized selector sent to class
 
 // 错误,因为谁调用这个方法self就代表谁,此时self代表类,对象方法只能通过对象调用
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
*/

- (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    
    NSLog(@"self = %p", self);
    
    if (kFlashlightStatusOpen == status) {
        //        打开闪光灯
        //        self 谁调用这个方法slef就代表谁
        //        self == ip
        [self openFlashlight];
        
    }else
    {
        //        关闭闪光灯
        //        在对象方法中self可以调用其它对象方法
        [self closeFlashlight];
    }
    
    NSLog(@"拍照");
}


- (void)openFlashlight
{

    NSLog(@"openFlashlight cpu = %d", self->_cpu);
    NSLog(@"Iphone - 打开闪光灯");
}

- (void)closeFlashlight
{
    NSLog(@"Iphone - 关闭闪光灯");
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
