//
//  main.m
//  04-self注意
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iphone2.h"

int main(int argc, const char * argv[])
{
//  同时有对象方法和类方法存在的时候,self不会调错
//    
//    Iphone2 *ip = [Iphone2 new];
//    [ip cameraWithFlashlightStatus:kFlashlightStatusClose];
    
//    [Iphone2 cameraWithFlashlightStatus:kFlashlightStatusClose];
    
    
//    Iphone2 *ip = [Iphone2 new];
//    [ip closeFlashlight];
    
    [Iphone2 openFlashlight];
    return 0;
}

