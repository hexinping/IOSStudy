//
//  main.c
//  05-结构体内存分析
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    struct Person
    {
//        结构体变量分配存储空间按照补齐算法
        int age;
//        int no;
        char c;//分配的存储空间必须是占用字节最大的成员的倍数
        char *name; //8 + 1 + 4 = 13
    };

    struct Person p;
    unsigned long size = sizeof(p);
    printf("size = %lu\n", size);
    
    return 0;
}

void test()
{
    
    //    1.定义结构体类型,  不会分配存储空间
    struct Date
    {
        int year;//第一个成员的地址就是结构体变量的地址
        int month;
        int day;
    };
    
    //    2.通过结构体类型定义结构体变量, 这个时候才会真正的分配存储空间
    struct Date d1 = {2014, 3, 1};
    
    //    printf("year = %p, month = %p, day = %p\n", &d1.year, &d1.month, &d1.day);
    //
    //    printf("d1 = %p\n", &d1);
    
    
    struct Date d2;
    d2 = d1;//把d1中的所有成员对应的赋值给d2中的成员
    d2.year = 2015;
    //    printf("year = %d, month = %d, day = %d\n", d2.year, d2.month, d2.day);
    printf("year = %d, month = %d, day = %d\n", d1.year, d1.month, d1.day);
    
}

