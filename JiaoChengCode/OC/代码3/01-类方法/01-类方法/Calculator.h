//
//  Calculator.h
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calculator : NSObject
{
    int _sum;
}
// 求和
// sumWithNumber1:andNumber2:
- (int)sumWithNumber1:(int)number1 andNumber2:(int)number2;

//类方法以加号开头
//sumWithNumber1:andNumber2:
+ (int)sumWithNumber1:(int)number1 andNumber2:(int)number2;

+ (int)averageWithNumber1:(int)number1 andNumber2:(int)number2;

- (int)averageWithNumber1:(int)number1 andNumber2:(int)number2;


+ (void)test;
@end
