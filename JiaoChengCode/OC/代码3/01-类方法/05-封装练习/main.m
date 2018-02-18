//
//  main.m
//  05-封装练习
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KLine.h"

/*
 设计一个K线类
 *最低价格(可读写)
 *最高价格(可读写)
 *平均价格(只读)
 */
int main(int argc, const char * argv[])
{

    KLine *k = [KLine new];
    [k setMinPrice:10];
    [k setMaxPrice:20];
    int average = [k averagePrice];
    NSLog(@"average =%d", average);
    
    int average1 = [k averagePrice];
    NSLog(@"average1 =%d", average1);
    
    int average2 = [k averagePrice];
    NSLog(@"average2 =%d", average2);
    return 0;
}

