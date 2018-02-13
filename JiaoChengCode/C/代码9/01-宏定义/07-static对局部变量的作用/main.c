//
//  main.c
//  07-static对局部变量的作用
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


void test()
{
    int a = 0;//重新分配

//    当局部变量用static修饰之后就会延长局部变量的声明周期,
//    当程序第一次执行到定义变量的位置会给变量开辟存储空间,直到程序结束才会释放
//    注意点:虽然static修饰局部变量后延长了局部变量的声明周期,但是并没有改变局部变量的作用范围
    static int b = 0;//只会初始化一次
    
    a++;
    b++;
    printf("a = %d, b = %d\n", a, b);
}

void test2(int r)
{
    static double pi = 3.1415926;//分配10此存储空间
    double result = 2 * pi * r;//分配10此存储空间
    printf("pi = %lf\n", result);
    
}
int main(int argc, const char * argv[])
{

//    test();
//    test();
//    printf("b = %d\n", b);
    
    for (int i = 0; i < 10; i++) {
        test2(i);
    }
    return 0;
}

