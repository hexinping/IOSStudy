//
//  main.c
//  02-指针变量注意点
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
     1.错误写法， 指针变量保存变量的地址的类型必须和指针变量的类型一样
    int *p;
//    int i = 10;
//    p = &i;
    double d = 10.1;
    p = &i;
    */
    
    /*
     2.指针变量只能存储地址，不要直接给它赋值常量
    int *p;
    p = 250;
    */
    
    /*
     3.指针变量没有初始化，不要利用指针变量间接的访问
    int *p;
    printf("%d\n", *p);
     */
    /*
     4.指针变量也是变量，所以也可以定义的同时初始化
//    int a;
//    a = 10;
    int a = 10;
    
//    int *p;
//    p = &a;
    int *p = &a;
     */
    
    /*
    int a = 10;
    int *p = &a;
    
//    *p = &a;//自己搞自己，自己保存了自己的地址
    
//    5. 多个指针变量同时指向了同一个变量
//    int *b;
//    b = &a;
    
//    6. 指针变量的指向是可以改变的
    int c = 20;
    p = &c;
    
    printf("%d\n", *p);
    */
    
    
    int a = 10;
    int *p = &a;
    printf("%d\n", *p);
    
//    清空指针
//    p = 0;
    p = NULL;
    
    return 0;
}

