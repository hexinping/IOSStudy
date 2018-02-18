//
//  Phone.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//闪光灯状态
typedef enum
{
    kFlashlightStatusOpen,
    kFlashlightStatusClose
}FlashlightStatus;

@interface Phone : NSObject
{
    @public
    int _cpu;
}
//拍照
- (void)cameraWithFlashlightStatus:(FlashlightStatus)status;
//打开闪光灯
- (void)openFlashlight;
//关闭闪光灯
- (void)closeFlashlight;

+ (void)test;
- (void)test;
@end
