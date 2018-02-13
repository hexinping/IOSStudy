//
//  main.c
//  09-返回指针的函数
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//int test()
//{
//    return 10.1;
//}

/*
 
 返回值类型 函数名(形参类型 形参名称, ...)
 {
    函数体;
 }
 */

char* test2()
{
//    return "lnj";
    /*
     注意点:
     当用数组来保存字符串的时候,是放在栈中的,当函数执行完毕就释放了
     
     
     */
//    char name[10] = "lnj";
    
//    常量
    char *name = "lnj";
    return name;
}

int main(int argc, const char * argv[])
{

//    double result = test();
//    printf("%f\n", result);
    
    char *result = test2();
    printf("%s\n", result);
    printf("今天天气为什么没有昨天好哦啊\n");
    
    return 0;
}

