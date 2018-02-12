//
//  main.c
//  07-for
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

/*
 
 for (初始化表达式; 条件表达式; 循环后操作表达式)
 {
    语句；
    ...
 }
 
 初始化表达式：在整个for循环中只会执行一次
 条件表达式：只有条件为真才会执行循环体
 循环后操作表达式：当循环体执行完毕之后就会执行 循环后操作表达式
 
 */

#include <stdio.h>

int main(int argc, const char * argv[])
{
//    int count = 0;
//    while (count < 5) {
//        printf("转圈 %d\n", count);
//        count++;
//    }
    
//    int count = 0;
    
//              1         2,5,8      4,7
    for (int count = 0;count < 5;count++)
    {
//        3  ,6
        printf("转圈 %d\n", count);
//        count++;
    }
    
    /*
     1.执行初始化表达式 （有且仅执行一次）
     2.判断条件表达式
     3.条件为真执行循环体
     4.执行循环后操作表达式
     5.判断条件表达式
     6.重复3～5步
     */
    return 0;
}

