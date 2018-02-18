//
//  main.m
//  06-类方法
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Caclulator.h"

int main(int argc, const char * argv[])
{
//    Caclulator *c = [Caclulator new];
////    只要看到[]左边写的是一个对象(指针),它就会去找减号开头的方法
//    int sum = [c sumWithNumber1:10 andNumber2:20];
//    NSLog(@"sum  = %d", sum);
//    
//    
////    [类名/对象  方法名称];
////    只要看到[]左边写的是一个类名,它就会区找加号开头的方法
//    int sum3 = [Caclulator sumWithNumber1:6 andNumber2:6];
//    NSLog(@"sum3 = %d", sum3);
    
    
    int result = [Caclulator averageWithNumber1:10 andNumber2:20];
    NSLog(@"result = %d", result);
    
    return 0;
}

void test()
{
    Caclulator *c1 = [Caclulator new];
//    对象方法只能通过对象调用 ,-号开头的方法都是对象方法
    int sum1 = [c1 sumWithNumber1:5 andNumber2:6];
    
    
    [Caclulator sumWithNumber1:8 andNumber2:8];
}

