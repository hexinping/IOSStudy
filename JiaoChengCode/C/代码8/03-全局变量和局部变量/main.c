//
//  main.c
//  03-全局变量和局部变量
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
根据变量的作用域可以分为两种
 1.局部变量
 >定义:在函数内(代码块),形参都是局部变量
 >作用域:从定义的那一行开始直到}结束或者遇到return
 >生命周期:从定义的那一行开始分配存储空间,代码块结束后就自动释放
 
 2.全局变量
 >定义:在函数外定义的变量
 >作用域:从定义的那一行开始直到"文件"结尾
  >生命周期:程序一启动就会分配存储空间,直到程序结束
 */
/*
int e;
void test(int b)
{
//    int b;
    int a = 10;
    b = 20;
    e = 100;
//    f = 250;
}
int f;
int main(int argc, const char * argv[])
{
    int number = 10;
    test(number);
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
    {
        int c = 10;
    }
//    printf("c = %d\n", c);
    
    e = 200;
    return 0;
}
*/



int a = 10;
int b, c, d = 36;

void test(int e)// int e = 0
{
    int f = 10;
    e++;
    printf("e = %d\n", e);//  1 1 1
    b++;//1 2
    printf("b = %d\n", b);//1 2 3
    
}

int main(int argc, const char * argv[])
{
    test(0);
    test(0);
    test(0);
    
    return 0;
}
