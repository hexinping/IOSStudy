//
//  main.c
//  08-typedef
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//给int类型取了一个别名叫MyInt
typedef int MyInt;

//可以给别名再取别名
typedef MyInt Integer;

typedef char MyC;

typedef char * String;

/*
//struct Person
//{
//    int age;
//};

// 给结构体类型起别名
//typedef struct Person SPerson;

//干了两件事
//1.定义结构体类型
//2.给刚刚定义的类型起一个别
//typedef struct Person
//{
//    int age;
//} SPerson2;

 //干了两件事
 //1.定义没有名字结构体类型
 //2.给刚刚定义的类型起一个别
//typedef struct
//{
//    int age;
//} SPerson3;
*/
/*
//enum Sex
//{
//    Male,//男
//    FeMale//女
//};

// 给枚举类型起别忙
//typedef enum Sex MySex;

 //干了两件事
 //1.定义枚举体类型
 //2.给刚刚定义的类型起一个别
//typedef enum Sex
//{
//    Male,//男
//    FeMale//女
//} MySex2;

 //干了两件事
 //1.定义没有名字的枚举体类型
 //2.给刚刚定义的类型起一个别
//typedef enum
//{
////    k + 别名 + 含义
//    kSexMale,
//    kSexFeMale
//} Sex;
*/

/*
void test()
{
    printf("abc\n");
}

void test2()
{
    printf("123\n");
}

// 给指针取别名和给其它类型起别名不一样
// 注意:MyPointer 就是新的类型名称
//typedef void (*MyPointer)();//MyPointer  == void (*p)()

typedef void (*MyPointer)(); // MyPointer == void (*p)()
*/

struct Person
{
    int age;
};

typedef struct Person * MyPersonPointer;


/*
 1.typedef 作用:给已经存储的类型起一个新的名字
 2.使用场合:
 >基本数据类型
 >指针
 >结构体
 >枚举
 >指向函数的指针
 */
int main(int argc, const char * argv[])
{
    struct Person person = {30};
//    person.age = 55;
    
//    指针类型 *指针变量名;
//    struct Person *p;
//    p = &person;
    
//    注意既然以及给指向结构体的指针定义了一个别名,定义的时候以及有*了所以通过别名来定义变量的时候不要再加*了
    MyPersonPointer p = &person;
    p->age = 90;
    printf("age = %d\n", (*p).age);
    
    
    
//    MyPointer p = test;
//    p();
//    
//    MyPointer p2 = test2;
//    p2();
//    void (*p)() = test;
//    
//    void (*p2)() =  test2;
//    p();
    
//    enum Sex s = Male;
//    MySex s1 = FeMale;
//    MySex2 s2 = Male;
    
//    Sex s3 = kSexMale;
    
    
/*
//    struct Person p = {30};
//    printf("age = %d\n", p.age);
    
//    struct Person p1 = {20};
    
//    SPerson p2 = {44};
//    printf("age = %d\n", p2.age);
    
//    SPerson2 p3 = {55};
//    printf("age = %d\n", p3.age);
    
    SPerson3 p4 = {99};
    printf("age = %d\n", p4.age);
    */
    
    
   /*
//    int a = 10;
//    MyInt a = 20;
//    Integer a = 88;
//    printf("a = %d\n", a);
    
//    char c = 'a';
//    MyC c = 'w';
//    printf("c = %c\n", c);
    
//    char *name = "lee";
//    String name = "cjk";
//    printf("%s\n", name);
*/
    return 0;
}

