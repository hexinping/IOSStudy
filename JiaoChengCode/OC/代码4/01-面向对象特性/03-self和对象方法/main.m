//
//  main.m
//  03-self和对象方法
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iphone.h"

int main(int argc, const char * argv[])
{
//    [Iphone cameraWithFlashlightStatus:kFlashlightStatusOpen];
    
    Iphone *ip = [Iphone new];
    [ip setCpu:2];
    
//    ip->_cpu = 20;
    NSLog(@"超频前:cpu = %d", [ip cpu]);
    NSLog(@"ip = %p", ip);
    [ip cameraWithFlashlightStatus:kFlashlightStatusOpen];
     NSLog(@"超频后:cpu = %d", [ip cpu]);
    
    /*
     总结:
     slef 谁调用当前方法,self就代表谁
     * self在对象方法中,self代表当前对象
     * self在类方法中个,self代表类
     
     > self在对象方法中 可以利用self->属性名称的方式访问成员变量
     
     > [self 方法名称]; 调用其它方法(类方法/对象方法)
     */
    return 0;
}

