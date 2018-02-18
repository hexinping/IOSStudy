//
//  Calculator.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Calculator.h"

@implementation Calculator

- (int)sumWithNumber1:(int)number1 andNumber2:(int)number2
{
    _sum = number1 + number2;
    return _sum;
}

+ (int)sumWithNumber1:(int)number1 andNumber2:(int)number2
{
//    在类方法中不能访问成员变量(实例变量)
//    当方法中不使用成员变量的时候尽量使用类方法
//    _sum = number1 + number2;
//     return _sum;
    return number1 + number2;
}

+ (int)averageWithNumber1:(int)number1 andNumber2:(int)number2
{
//    int sum = number1 + number2;
//    在类方法中可以调用类方法
    int sum = [Calculator sumWithNumber1:number1 andNumber2:number2];
    int average = sum / 2;
    return average;
}

- (int)averageWithNumber1:(int)number1 andNumber2:(int)number2
{
//    在对象方法中也可以调用类方法
    int sum = [Calculator sumWithNumber1:number1 andNumber2:number2];
    int average = sum / 2;
    return average;
}

+ (void)test
{
//    在类方法中不能调用同名的类方法,会造成死循环
    NSLog(@"abcd");
    [Calculator test];
}
@end
