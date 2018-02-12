//
//  main.c
//  01-while
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
 if (条件表达式)
 {
    语句；
    ...
 }
 
 while (条件表达式)
 {
     语句；
     ...
 }
 
// while后面大括号中的内容简称 循环体
 */

int main(int argc, const char * argv[])
{

//    1.要求一个人转圈 10圈
    /*
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    printf("转圈\n");
    */
    
//    初学者写循环结构分为两步
//    1.确定循环执行的操作
//    2.确定约束条件
    int count = 0;
    while (count < 5)
    {
        printf("转圈 %d\n", count);
        count++;//每次转圈结束增加一次
        
    }
    
    /*
     if :如果条件表达式成立就执行一次if后面大括号中的内容，如果条件不成立就跳过大括号中的内容
     
     while：如果条件表达式成立，就执行一次while后面大括号中的内容，执行完毕之后再此判断条件是否成立，如果又成立又执行大括号中的内容，直到条件表达式不成立为止
     */
    return 0;
}

