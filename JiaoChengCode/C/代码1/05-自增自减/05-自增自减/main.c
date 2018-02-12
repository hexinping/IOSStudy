//
//  main.c
//  05-自增自减
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int a = 10;
    int b;
//         10        12
//    b = ( a++ ) + ( ++a );
    //  a = 12
    
//        10      11
//    b = (a++) + (a++);
//    a = 12
//        11      11
//    b = (++a) + (a++);
//    a = 12
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

int test1()
{
    //    2.++在变量名前和++在变量名后的区别
    /*
     int a = 10;
     int b;
     b = ++a;//当++在变量名前的时候先自增 再参与其他运算
     //    a = a + 1;  b = a;
     */
    /*
     int a = 10;
     int b;
     b = a++;//无论++在前还是在后，最终我们的a都会自增1
     //    当++在变量名后的时候，先参与其它运算 再自增
     //    b = a;  a = a + 1;
     */
    /*
     int a = 10;
     int b;
     //    b = --a;
     b = a--;
     printf("a = %d, b = %d\n", a, b);
     
     command + alt(option) + [ 向上 ] 向下
     */
    return 0;
}

int test()
{
//    自增自减基本概念
    int a = 10;
//    a = a + 5;
//    a += 5;
//    a = a + 1;
//    a += 1;
//    当需要给某一个变量加1或者减1的时候，最简单高效的方法是用自增
//    a++;//a = a + 1; a += 1;
//    a--;
//    ++a;
    --a;
    printf("a = %d\n", a);
    return 0;
}

