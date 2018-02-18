//
//  main.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Calculator.h"

int main(int argc, const char * argv[])
{
    /*
    Calculator *c = [Calculator new];
    int sum = [c sumWithNumber1:10 andNumber2:20];
    NSLog(@"sum = %d", sum);
    
//    类方法用类名调用
    
     '+[Calculator sumWithNumber1:andNumber2:]: unrecognized selector sent to class 
//    对象方法只能通过对象调用
    int sum1 = [Calculator sumWithNumber1:30 andNumber2:40];
    NSLog(@"sum1 = %d", sum1);
    
    
     '-[Calculator sumWithNumber1:andNumber2:]: unrecognized selector sent to instance
     
//     类方法只能通过类调用
     int sum2 = [c sumWithNumber1:50 andNumber2:50];
     NSLog(@"sum2 = %d", sum1);
    */
    
//    类方法不能访问实例变量
//    Calculator *c = [Calculator new];
//    int sum = [c sumWithNumber1:20 andNumber2:10];
//    NSLog(@"sum = %d", sum);
    
    
//    int result = [Calculator averageWithNumber1:10 andNumber2:20];
//    NSLog(@"result = %d", result);
//    
//    Calculator *c = [Calculator new];
//    int result1 = [c averageWithNumber1:20 andNumber2:20];
//    NSLog(@"result1 = %d", result1);
    
//    [Calculator test];
    
    
    /*
     1.对象方法
     >减号 - 开头
     >只能由对象调用
     >对象方法中可以访问成员变量(实例变量)
     >对象方法中可以调用类方法
     
     2.类方法
     >加号 +开头
     >只能由类名调用
     >类方法中不可以访问成员变量(实例变量)
     >类方法中不可以调用对象方法
     >类方法中可以调用类方法(同名的除外)
     
     允许有同名的对象方法和类方法,系统通过+ - 来区分
     
     类方法的使用场合:
     当方法中没有使用到成员变量的时候尽量用类方法
     >执行效率高(如果对象方法要现找到对象再通过isa指针找到方法,而类方法直接找到方法)
     >优化内存(类方法不需要创建对象)
     >类方法一般用于编写工具方法
     */
    return 0;
}

