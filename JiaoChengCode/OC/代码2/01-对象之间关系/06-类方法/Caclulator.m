//
//  Caclulator.m
//  01-对象之间关系
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Caclulator.h"

@implementation Caclulator

- (int)sumWithNumber1:(int)number1 andNumber2:(int)number2
{
    return  number1 + number2;
}

+ (int)sumWithNumber1:(int)number1 andNumber2:(int)number2
{
    return number1 + number2;
}


+ (int)averageWithNumber1:(int)number1 andNumber2:(int)number2
{
//    在类方法中可以调用类方法
    int sum = [Caclulator sumWithNumber1:number1 andNumber2:number2];
    int average = sum/2;
    return average;
}
@end
