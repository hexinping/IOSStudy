//
//  main.m
//  01-第一个OC程序
//
//  Created by apple on 14-3-4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


/*
 拷贝NSLog的声明
 和框架名称一样的.h文件称之为主头文件,以后使用OC提供的框架只需要引入主头文件即可
 
 框架地址:
/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.0.sdk/System/Library/Frameworks
 */
#import <Foundation/Foundation.h>

#import "One.h"
#import "Two.h"
/*
 import和include一样都是用来拷贝文件
 区别:import是include的升级版, import可以自己防止重复拷贝
 */


// OC和C语言一样程序一启动都会执行main函数
int main(int argc, const char * argv[])
{
    /*
     区别:
     1.名字不同
     2.接收参数不同,printf接收C语言字符串,NSLog接收OC字符串
     3.打印信息不同
     4.NSLog会自动换行
     5.引入头文件不同
     */
    printf("hello world\n");
    NSLog(@"oc Hello world");
    NSLog(@"222222");
    
//    调用OC源文件中的函数
    test();
//    调用C源文件中的函数
    test2();
    return 0;
}

