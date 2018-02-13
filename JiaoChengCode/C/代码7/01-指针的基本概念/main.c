//
//  main.c
//  01-指针的基本概念
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

// 基本数据类型作为函数参数传递是值传递
void change(int *val)// int val = 0ffc1;
{
//    val = 55;
    *val = 55;
}

int main(int argc, const char * argv[])
{
    
    int number = 10;
    change(&number);
    printf("number = %d\n", number);
    
    
    return 0;
}

void test()
{
    int number = 10;
    //    change(&number);
    //    printf("number = %d\n", number);
    
    /*
     指针变量：
     作为：专门用来保存地址
     定义格式：
     变量类型 *变量名；
     注意：定义变量的时候 变量名前的星号仅仅是一个象征，象征着定义出来的变量是指针变量
     星号不是变量名的一部分
     
     指针变量占用8个字节的存储空间
     */
    int *p;
    //    只要把一个变量的地址赋值给了指针变量，我们称之为指针变量指向了它
    p = &number;
    
    //    int a;
    //    a = 10;
    
    int b = 55;
    //    b = 20;
    int *ip;
    
    ip = &b;
    *ip = 100;// 等号左边的ip前面的星代表者访问指针变量指向的那块存储空间
    
    //    printf("b =%d\n", b);
    printf("b =%d\n", *ip);
}

