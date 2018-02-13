//
//  zhangyong.c
//  01-宏定义
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

static void test3();

//完整的定义一个外部函数
extern void test()
{
    printf("hello world\n");
}

void test2()
{
//    test();
    test3();
}

//代表定义了一个内部函数
static void test3()
{
    printf("内部函数\n");
}
