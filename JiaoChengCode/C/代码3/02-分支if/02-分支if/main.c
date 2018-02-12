//
//  main.c
//  02-分支if
//
//  Created by apple on 14-2-19.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 1.if第一种格式：
 if (条件表达式)
 {
    语句1；
    ...
 }
 特点： 只有条件满足才会执行if后面大括号中的内容
 
 2.if第二种格式
 if (条件表达式)
 {
     语句1；
     ...
 }
 else
 {
     语句1；
     ...
 }
 特点：当条件满足就执行if后面大括号中的内容，条件不满足就执行else后面大括号中的内容（但凡遇到if else格式就想去WC）
 
 3.if第三种格式
 if (条件表达式1)
 {
     语句1；
     ...
 }
 else if(条件表达式2)
 {
     语句1；
     ...
 }
 else if(条件表达式3)
 {
     语句1；
     ...
 }
 ...
 else
 {
     语句1；
     ...
 }
 特点：
 1.这么多大括号中只有一个大括号中的内容会被执行
 2.当执行到后面条件的时候证明前面的条件不满足
 
 4.if第四种格式：
 if (条件表达式)
    语句1；
 
 特点：当条件表达式为真的时候会执行if后面的第一条语句
 注意点：在以后开发中尽量不要写第四种格式
 */

int main(int argc, const char * argv[])
{
    /*
    int age = 10;
    if (age >= 18)
    {
        printf("给予上网卡\n");
    }
    else
    {
        printf("叫上你的爸爸妈妈一起来\n");
    }
     */
    
    /*
    int a = 2;
    if (a == 2) {
        printf("2222222\n");
    }else if (a == 5)
    {
        printf("55555555\n");
    }else if (a == 10)
    {
        printf("101010101010\n");
    }else
    {
        printf("other\n");
    }
     */
    /*
    int b = 2;
    if (b++ == 2) {//4
        printf("2222222\n");
    }else if (b++ == 5)//5
    {
        printf("55555555\n");
    }else if (b++ == 10)//6
    {
        printf("101010101010\n");
    }else
    {
        printf("other\n");
    }
    
    printf("b = %d\n", b);
     */
    
    int a = 11;
    if (a == 10)
        printf("10101010\n");
    printf("other\n");
    
    return 0;
}

