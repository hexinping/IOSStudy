//
//  main.c
//  09-结构体指针
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    int a = 10;
//    a = 20;
//    int *p = &a;
//    *p = 30;
    
    struct Person
    {
        int age;
        int no;
    };
    
    struct Person xiaoP = {30, 55};
//    xiaoP.age = 31;
//    指针类型 *指针变量名称;
    struct Person *p;
    p = &xiaoP;
    
//    *p访问的是整个结构体的那块存储空间
//    (*p).age = 31;
//    访问指针变量p指向的存储空间中的age属性
    p->age = 35;//重点掌握方式

//    printf("age = %d, no = %d\n", xiaoP.age, xiaoP.no);
    printf("age = %d, no = %d\n", p->age, p->no);

    /*
     指向结构体的指针
     struct 结构体类型名称 *指针变量名;
     
     (*指针名称).成员名称;
     指针名称->成员名称;(重点)
     */
    return 0;
}

