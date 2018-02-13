//
//  main.c
//  04-指针练习
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

void swap(int val1, int val2);
void swap2(int *p1, int *p2);
void swap3(int *p1, int *p2);
int sum(int v1, int v2);
int sumAndMinus(int v1, int v2, int *ms);

int main(int argc, const char * argv[])
{

//    要求编写一个函数,返回两个数的和
//    要求编写一个函数,返回两个数的和与差
//    要求编写一个函数,返回两个数的和与差 平方 乘积 ...
    int a = 10;
    int b = 20;
//    int result = sum(a, b);
//    int result = sumAndMinus(a, b);
    
//    int sum = 0;
//    int minus = 0;
//    sum = sumAndMinus(a, b, &minus);
//    printf("result = %d\n", result);
    printf("sum = %d, minus = %d\n", sum, minus);
    
    return 0;
}

int sumAndMinus(int v1, int v2, int *ms)
{
//    使用场景:当某一个函数需要多个返回值的时候,可以通过传入指针的方式返回
    int sum = v1 + v2;
   *ms = v1 - v2;
    return sum;
//    printf("xxoo");
//    return minus;
}

int sum(int v1, int v2)
{
    return v1 + v2;
}


void test()
{
    
//       练习1: 要求交换两个变量的值
//    使用场景:当想在某一个函数里面改变外面实参的值,第一个就想到指针
    int a = 10;
    int b = 20;
    
    printf("交换前a = %d, b = %d\n", a, b);
    //    int temp = a;
    //    a = b;
    //    b = temp;
    //    swap(&a, &b);
    //    swap2(&a, &b);
    swap3(&a, &b);
    
    printf("交换后a = %d, b = %d\n", a, b);

}

void swap3(int *p1, int *p2)
{
//    注意,这里只是改变了指针的指向,并没有改变实参的值
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}

#pragma mark -指针传递
void swap2(int *p1, int *p2)// int *p1 = &a;
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// 基本数据类型作为函数参数是值传递,在函数内修改形参的值不会影响到外面实参的值
void swap(int val1, int val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

