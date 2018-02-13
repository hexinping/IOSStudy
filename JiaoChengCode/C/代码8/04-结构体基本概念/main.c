//
//  main.c
//  04-结构体基本概念
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    1.结构体:构造类型 ,可以保存不同类型的数据
//    2.数组: 构造类型,只能保存同一种数据类型
//    char int float double
//    int ages[5] = {12, 14, 15, 17, 11};
    
//     名字 年龄 升高
//    int person[3] = {"jackson", 22, 1.78};
    
//    变量类型 变量名称;
//    int a;
    
    /*
//    结构体类型 结构体变量名;
     结构体类型定义
    struct 结构体类型名称
    {
        成员类型 成员名称;
    };
     */
    
//    定义结构体类型,不会分配存储空间
    struct Person
    {
//        说明结构体中的有哪些成员
        char *name;//注意后面是分好不是逗号
        int age;
        float height;
    };//这里也有分号,表示定义结束
    
    
//    根据定义的结构体类型定义结构体变量,才会分配存储空间
    struct Person p;
    p.name = "jackson";//把字符串赋值给p这个结构体中的name这个成员
    p.age = 20;
    p.height = 1.88;
    
//    printf("name = %s, age = %d, height = %f\n", p.name, p.age, p.height);
    

//    int ages2[4];
//    ages2[0] = 10;
//    int ages2[2] = {1, 3};
//    printf("%d", ages[0]);
    
//    第二种初始化方式0-->按照结构体类型顺序赋值
//    struct Person myPerson = {"jordan", 20, 1.88};
//     printf("name = %s, age = %d, height = %f\n", myPerson.name, myPerson.age, myPerson.height);
    
//    第三种初始化方式-->指定赋值顺序
//    int ages[5] = {[3] = 2, [4] = 5};
    struct Person p2 = {.age = 30, .name = "iverson", .height = 1.88};
    printf("name = %s, age = %d, height = %f\n", p2.name, p2.age, p2.height);
    
    return 0;
}

