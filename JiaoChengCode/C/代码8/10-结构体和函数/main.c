//
//  main.c
//  10-结构体和函数
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

struct Person
{
    int age;
    char *name;
};

//当结构体作为函数参数传递的之后是值传递
void test(struct Person temp)// struct Person temp = p;
{
    temp.age = 55;
}

void test2(struct Person *pointer)
{
//    (*pointer).age = 250;
    pointer->age = 250;
}

void test3(struct Person *pointer)
{
    struct Person p2 = {1, "gay"};
    pointer = &p2;
    pointer->age = 88;
}

int main(int argc, const char * argv[])
{
    
    struct Person p = {30, "jay"};
//    test(p);
//    test2(&p);
    test3(&p);
    
    printf("age = %d\n", p.age);
    return 0;
}

