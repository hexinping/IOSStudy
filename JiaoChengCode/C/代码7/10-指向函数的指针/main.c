//
//  main.c
//  10-指向函数的指针
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//函数名就是函数的地址,  数组名就是数组的地址
void test()
{
    printf("老婆我们家我做主\n");
}

int sum(int val1, int val2)
{
    return val1 + val2;
}

int demo(int (*p)(int val1, int val2))//int (*p)(int val1, int val2) = sum;
{
    int result = 0;
    if (0) {
        result = p(30, 50);
    }else{
        result = -1;
    }
    return result;
}

int main(int argc, const char * argv[])
{
    
//    block

//    把函数当作参数来传递,用于接收某个函数
    int result = demo(sum);
    printf("result = %d\n", result);
    return 0;
}


void test3()
{
    
    /*
     1.是指针就有*
     2.是变量就有名称
     3.拷贝将来要指向的函数的返回值到左边
     4.拷贝将来要指向的函数的形参列表到右边
     */
    int (*p)(int val1, int val2);
    p = sum;
    
    //    int result  = sum(10, 20);
    //    int result  = (*p)(20, 20);
    //    int result = p(30, 50);
    //    printf("result = %d\n", result);
}

void test2()
{
    //    int a = 10;
    //    int *p = &a;
    //
    //    *p = 33;
    //    printf("%d\n", *p);
    //    test();
    
    /*
     
     void (*pointer)();
     
     (*pointer):固定写法,只要这样写就代表者将来定义出来的指针要指向一个函数
     左边void: 代表指针变量pointer将来指向的函数没有返回值
     右边(): 代表指针变量pointer将来指向的函数没有形参
     
     */
    
    //    定义了一个指向函数的指针,这个指针将来指向的函数没有返回值没有形参
    void (*pointer)();
    pointer = test;//注意函数名称后面千万不要写括号
    //    *pointer == test
    //    (*pointer)(); //间接调用
    //    test(); // 直接调用
    pointer(); //间接调用
    
    //    int ages[2] = {1, 3};
    //    int *p = ages;
    //
    //    printf("%d", ages[0]);
    //    printf("%d", p[0]);
    //    printf("%d", *(p + 0));
    
}

