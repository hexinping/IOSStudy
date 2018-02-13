//
//  main.c
//  07-结构体类型的作用域
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//和全局变量作用域一样
struct Person
{
    int age;
};

void test()
{
    struct Person
    {
        int age;
    };
    
    struct Person p = {33};
    printf("age = %d\n", p.age);
}

int main(int argc, const char * argv[])
{

//    和局部变量的作用域一样
//    struct Person
//    {
//        int age;
//    };
    test();
    
    struct Person p;
    p.age = 10;
    
//    printf("age = %d\n", p.age);
    
    return 0;
}

