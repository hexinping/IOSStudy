//
//  main.c
//  07-逗号运算符
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    逗号运算符是用来连接表达式的
//    int a, b;
    /*
     int a;
     int b;
     */
//    逗号运算符的运算结果是最后一个表达式的值
    
    int b;
    int a;// 30
    b = (a = 5, a++, a *= 5, a -= 1);
    printf("b = %d\n", b);
    return 0;
}

