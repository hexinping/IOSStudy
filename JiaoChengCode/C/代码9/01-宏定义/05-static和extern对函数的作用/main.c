//
//  main.c
//  05-static和extern对函数的作用
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

/*
 1.外部函数
 >特点:定义的函数能被本文件和其它文件访问,
 >默认情况下所有的函数都是外部函数
 >注意:不能有同名的外部函数
 2.内部函数
 >特点:只能再本文件中访问
 >可以有同名的内部函数
 
 extern 对函数的作用:
 >完整的定义一个外部函数
 >完整的声明一个外部函数
 
 static 对函数的作用:
 >定义一个内部函数
 >声明一个内部函数(废物)
 */
#include <stdio.h>
#include "zhangyong.h"

int main(int argc, const char * argv[])
{

//    test2();
//    test();
    test3();
    return 0;
}

//void test()
//{
//    printf("abc\n");
//}

static void  test3()
{
    printf("main 内部函数\n");
}


