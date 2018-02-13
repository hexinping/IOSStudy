//
//  main.c
//  07-指针基本概念
//
//  Created by apple on 14-2-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


// 值传递
void change(int number)
{
    number = 10;
}
int main(int argc, const char * argv[])
{
    /*
//    int val = 55;
//    int val1 = 55;
//    change(val);
//    printf("val = %d\n", val);
//    printf("%p\n", &val);//0x7fff5fbff84c
//    printf("%p", &val1);//0x7fff5fbff848
    /*
    指针变量格式：
    变量类型 变量名；
    变量类型 *指针变量名；
    注意：
    指针变量将来要存储什么类型的变量的地址就写什么类型
    指针变量占8个字节, “指针变量就是用来存储字节地址”
    */
    int val = 55;
    int *pointer;// *不是变量名的一部分，它仅仅是一个标识
    pointer = &val;//0x7fff5fbff84c
//    int num;
//    num = 10;
//    change(&val);
    
    
    int a = 10;
//    a = 20;
//    不能使用变量名直接修改值

    int *p;//定义变量时候的* 仅仅是一个标识，标识着定义出来的变量是一个指针变量
    p = &a;
    
//    等号左边的* 代表者要访问指针变量存储的地址的那块存储空间
    *p = 20;
    
//    等号右边的* 自己探索 例如： int num; num = *p; printf("%d\n", num);
    
    printf("a = %d\n", a);
    
    
    return 0;
}

