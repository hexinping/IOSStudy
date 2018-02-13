//
//  main.c
//  06-static和extern对变量的作用
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include "lnj.h"
/*
 "全局"变量分为两种:
 外部变量:
 >特点:能再本文件和其它文件中访问,所有的同名外部变量都使用同一块存储空间
 >默认情况下所有的全局变量都是外部变量
 
 内部变量:
 >特点:只能被本文件访问,不能被其它文件访问
 >不同文件中的内部变量互不干扰
 
 static对变量的作用:
 >定义一个内部变量
 
 extern对变量的作用:
 >声明一个外部变量
 
 */
//int num;
//定义一个内部变量
static int value;
//注意:声明一个变量
//extern int num;

//int num;
//int num;
//int num;
//int num;
int num;

 void test5();
int main(int argc, const char * argv[])
{

//    num = 30;
    test();
    printf("main value = %d\n", value);
    
//    当把lnj.c里面的num和本文件的num注视掉只有 extern int num;时编译会报错
//    注意extern仅仅是声明一个外部全局变量,并没有给它开辟存储空间
    extern int num;
    printf("num = %d\n", num);
//    void test5();
//    test5();
    
    return 0;
}


void test5()
{
    
}
