//
//  main.c
//  10-变量
//
//  Created by apple on 14-2-16.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>



/*
 int  整型  //4个字节
 double /float 浮点型 8个
 char 字符型 //1个字节
 
1. 定义变量
 变量类型 变量名;
 2.初始化（第一次给变量赋值）
 变量名 = 值；
 3.变量可以相互赋值
 int a = 10;
 int b = a;
 4.变量的作用域：
 变量的作用域范围是从定义的那一行开始，直到遇到return或者 }
 5.变量的输出
 格式符号： 
 *int
 %i  %d
 当想让整数按照指定位数来显示的时候可以在%号和i之间加入0N，如果位数不足用0来补
 
 *double/float 
 %f
 当向保留指定小数位数的时候可以在%号和f之间加入.N,想保留几位N就写几
 
 
 *char 
 %c
 
 6.注意点
 变量使用前必须先进行初始化
 */

int test()
{
    //  定义变量
    int score;
    //    初始化（变量第一次赋值称之为初始化）
    score = 105;
    score = 108;
    //    定义变量的同时进行初始化
    int number = 99;
    
    int v1,v2,v3;
    v1 = v2 = v3 = 10;
    
    int n1 = 10;
    int n2 = n2;
    return 0;
}

int test2()
{
    //    变量时由作用域（有效的范围）
    //    int b;
    ////    b = a;
    //    int a = 10;
    
    //    变量的作用域范围是从定义的那一行开始，直到遇到return或者}
    //    int v1 = 10;
    //    int v2 = 20;
    
    //    int number = 100;
    //    call();
    //    number = 100;
    
    /*
     {
     int a = 10;
     }
     a = 20;
     */
    
    
    int score = 105;
    
    int bestScore = 3161;
    
    int time = 47;
    //    printf("score = %i  bestScore = %i  time = %i \n", score, bestScore, time);
    
    //    格式符号 （占位符号）
    //    printf("%i  \n", score);
    
    char c = 'a';
    //    printf("%c  \n", c);
    
    float height = 1.75f;
    //    printf("%f \n", height);
    
    //    printf("%i %c %f", time, c, height);
    
    double dd = 1.88;
    //    printf("%.2f \n", dd);
    
    /*
     001.png
     002.png
     003.png
     */
    
    //    扩充知识
    int v1 = 1;//01
    printf("%03i \n", v1);
    return 0;
}

int call()
{
    int number = 55;
    return 0;
}

int main(int argc, const char * argv[])
{
//  断点，xcode提供给我们开发调试用得
//    在程序运行的过程中暂停程序
    int number;
//    想使用一个变量必须先进行初始化，如果没有先对变量number进行初始化里面的值是不确定的
    printf("%d\n", number);
    
    number = 10;
    
    printf("%d \n", number);
    return 0;//结束函数
}










