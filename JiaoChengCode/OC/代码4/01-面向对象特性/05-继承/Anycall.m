//
//  Anycall.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Anycall.h"

@implementation Anycall

//+ (void)test
//{
//    NSLog(@"Anycall test");
//}

- (void)cameraWithFlashlightStatus:(FlashlightStatus)status
{
    NSLog(@"聚焦");
//    if (kFlashlightStatusOpen == status) {
//        //        打开闪光灯
//        [self openFlashlight];
//        
//    }else
//    {
//        //        关闭闪光灯
//        [self closeFlashlight];
//    }
//    
//    NSLog(@"拍照");
    
//    死循环
//    [self cameraWithFlashlightStatus:status];
    
//     super是明确的告诉程序要执行父类中的方法
//    super使用场合:子类重写父类方法的时候想保留父类的一些行为的时候
//    使用super在对象方法中调用父类的方法会调用父类的对象方法
    [super cameraWithFlashlightStatus:status];

}

+ (void)test
{
    NSLog(@"子类 test");
//    使用super在类方法中调用父类方法,会调用父类的类方法
    [super test];
}

- (void)test
{
    NSLog(@"子类 test");
    [super test];
}
@end
