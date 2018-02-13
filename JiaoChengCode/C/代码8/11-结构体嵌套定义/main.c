//
//  main.c
//  11-结构体嵌套定义
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
    struct Time
    {
        int HH;
        int mm;
    };
    
    struct Date
    {
        int year;
        int month;
        int day;
        struct Time time;
    };

//    结构体是可以嵌套定义的,可以把其它结构体当作自己的成员的一部分
    struct Person
    {
        int age;
//        出生日期
//        int year;
//        int month;
//        int day;
        struct Date birthDay;
        
//        入职日期
//        int year2;
//        int month2;
//        int day2;
//        struct Date ru;
        
//        离职日期
//        int year3;
//        int month3;
//        int day3;
//        struct Date li;
        
        
    };
    struct Person p = {
        28,
        {2013, 12, 12, {16, 30}}
    };
    
    printf("HH = %d, mm = %d\n", p.birthDay.time.HH, p.birthDay.time.mm);

    struct Person p = {
        28,
        {1980, 2, 11},
        {2008, 4, 1},
        {2013, 10, 1}
    };
    
//    连续访问,现找到P结构体中的li成员,然后再在li结构体中找年这个成员
    printf("year = %d, month = %d, day = %d\n",p.li.year, p.li.month, p.li.day);
    
    */
    
    
//    结构体的嵌套定义不能自己搞自己
    /*
    struct Person
    {
        int age;
        struct Person p;
    };
    struct Person myPerson;
     */
    
    return 0;
}

