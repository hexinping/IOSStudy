//
//  main.c
//  06-sizeof
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
//     sizeof可以用来计算一个变量、常量、数据类型所占用的存储空间的大小
//    注意：sizeof是一个运算符，不是一个函数
//     sizeof();
    
//    int num = sizeof(10);
//    int num = sizeof 10;
    
    double a = 10.0;
//    int num = sizeof(a);
//    int num = sizeof a;
    
//    int num = sizeof(float);
//    注意点，当计算的是数据类型的时候不能省略小括号
//    错误写法： int num = sizeof float;
//    printf("num = %d\n", num);
    
    return 0;
}

