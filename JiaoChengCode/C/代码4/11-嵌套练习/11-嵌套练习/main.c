//
//  main.c
//  11-嵌套练习
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    /*
     提示用户输入一个整数，根据用户输入的整数输出如下图形
     例如用户输入4
     
     ****
     ****
     ****
     ****
     */
    
//    printf("***\n");
//    printf("***\n");
//    printf("***\n");
    
    /*
//    外循环控制行数
    for (int i = 0; i < 2; i++) {
//        printf("****\n");
//        内循环控制列数
        for (int j = 0; j < 4; j++)//1 2 3
        {
            printf("*");
        }
        printf("\n");
    }
    */
    
    
    /*
     接收用户输入的整数，输出如下图形
     用户输入的是3
     
     ***
     **
     *
     
     美行的列数是递减
     */
    
    /*
    printf("请输入一个正整数\n");
    int number = -1;
    scanf("%d", &number);
    
//    int count = 3;
//    int count = 0;
     
    for (int i = 0; i < number; i++) {
     
//        printf("i = %d\n", i);
//        printf("count = %d\n", count);
//        for (int j = 0; j < count; j++) {
//        for (int j = count; j < 3; j++) {
     
//     外循环每循环一次 i的值递增1
        for (int j = i; j < number; j++) {
            printf("*");
        }
//        count--;//2 1 0
//        count++;//1 2
        printf("\n");
    }
     */
    
    
    /*
     接收用户输入的整数，输出如下图形
     例如用户输入的是3，输出如下图形
     
     *
     **
     ***
    
     */
    
    int number = -1;
    
    while (number < 0) {
        printf("请输入一个正整数\n");
        scanf("%d", &number);
    }
    
//    行数
    for (int i = 0; i < number; i++) {//1
//        列数
        for (int j = 0; j <= i; j++) {//1
            printf("*");
        }
        printf("\n");
    }
    
    
    /*
     尖尖朝上，改变内循环的条件表达式，让内循环的条件表达式随着外循环的i值变化
     
     尖尖朝下，改变内循环的初始化表达式，让内循环的初始化表达式随着外循环的i值变化
     */
    
    return 0;
}

