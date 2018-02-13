//
//  main.c
//  13-数据类型总结
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    /*
     一.基本数据类型
     整型:int   %i, %d  4个字节
     >short  %hd    2个字节
     >long  %ld     8个字节
     >long long %lld 8个字节
     >unsigned %u   4个字节 取值范围变大了
     >signed    %i, %d 4个字节
     
     浮点型:float/doubl
     float: %f 4个字节
     double: %lf 8个字节
     
     字符:char
     char: %c 1个字节
     
     枚举类型:(本质就是整型)
     >使用场景:当一个变量只有固定的几个取值的时候就用枚举
     >先定义枚举类型,再通过枚举类型定义枚举变量
     
     二.构造类型
     1.数组
     >特点:只能由同一种数据类型组成(也就是说只能存储同一种类型的数据)
     >元素类型 数组名[元素个数];
     
     2.结构体
     >特点:由不同类型的数据类型组成(也就是说能保存不同类型的数据)
     >注意点:先定义结构体类型,再通过结构体类型定义结构体变量
     
     三.指针类型
     >特点:用来保存地址,有了地址就可以访问对应的存储空间
     >格式: 指针类型 *指针变量名;
     >间接操作:
     基本数据类型
     int a = 10;
     int *p = &a;
     *p = 30;
     
     数组
     int ages[2] = {1, 2};
     int *p;
     p = ages;
     
     *(p + i);
     p[i];
     
     
     指向函数
     void test();
     void (*p)();
     p = test;
     (*p)();
     p();
     
     结构体
     struct Person{int age}
     struct Person person;
     struct Person *p;
     p = &person;
     (*p).age;
     p->age;
     
     */
    return 0;
}

