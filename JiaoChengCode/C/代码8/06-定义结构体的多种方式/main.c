//
//  main.c
//  06-定义结构体的多种方式
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
//  方式一:现定义结构体类型再定义结构体变量
    struct Person
    {
        int age;
        int no;
    };
    struct Person p;
     */
    
    /*
//    方式二:定义结构体类型的同时定义结构体变量
//    下面这句话做了两件事情:
//    1.定义结构体类型
//    2.通过刚刚定义的结构体类型定义结构体变量
    struct Person
    {
        int age;
        int no;
    } p;
    struct Person p2;
    */
    
//    方式三:匿名结构体
//    定义结构体类型的同时定义结构体变量,且省略了结构体类型名称
//    缺点没有结构体类型名称不能复用
    struct
    {
        int age;
        int no;
    } p;

    
    struct
    {
        int age;
        int no;
    } p2 = {30, 20};
    
    printf("age = %d, no = %d\n", p2.age, p2.no);
    
    return 0;
}

