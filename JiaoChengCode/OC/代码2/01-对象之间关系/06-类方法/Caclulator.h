//
//  Caclulator.h
//  01-对象之间关系
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Caclulator : NSObject
{
    int _value;
}

/**
 *  计算两个数的和
 *
 *  @param number1 第一个数
 *  @param number2 第二个数
 */
- (int)sumWithNumber1:(int)number1 andNumber2:(int)number2;
/*
 类方法以+号开头
 类方法可以和对象方法同名
 类方法用类名调用
 */
+ (int)sumWithNumber1:(int)number1 andNumber2:(int)number2;

//计算平均值
/**
 *  求平均值
 *
 *  @param number1 第一个数
 *  @param number2 第二个数
 *
 *  @return 平均值
 */
+ (int)averageWithNumber1:(int)number1 andNumber2:(int)number2;
@end
