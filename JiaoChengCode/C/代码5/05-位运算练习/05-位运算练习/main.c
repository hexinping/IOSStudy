//
//  main.c
//  05-位运算练习
//
//  Created by apple on 14-2-23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

// 要求用户输入两个整数，交换这两个整数的值后输出
int main(int argc, const char * argv[])
{

    int a = 10;//可乐
    int b = 20;//雪碧
    
//    a = 20 b = 10;
    printf("交换之前：a = %d, b = %d\n", a, b);
    /*
//    第一种方式,开发中常用
    int temp;//空瓶子
    temp = a;
    a = b;
    b = temp;
     */
    /*
//     第二种方式
    a = b - a;//20 - 10   a = 10
    b = b - a;//20 - 10   b = 10
    a = b + a;//10 + 10   a = 20
    */
    
    /*
//    第三种方式
    a = a ^ b;//a = 10 ^ 20;
    b = a ^ b;//b = 10 ^ 20 ^ 20;  b = 10
    a = a ^ b;//a = 10 ^ 20 ^ 10;  a = 20
    */
    printf("交换之后：a = %d, b = %d\n", a, b);
    return 0;
}

