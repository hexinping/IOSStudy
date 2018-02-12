//
//  main.c
//  03-算术运算符
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int result =  3 + (4 * 5) / 6 + 3 + 4 * 5 / 6;
    
   return 0;
}

int test3()
{
    // 练习1： int result = number ? 10;
    //    请问？是神马算术运算符的时候 result的值在0~9之间
    //    取模运算的使用场景：当要控制一个变量的取值在0~N之间的时候可以使用取模运算
    //    int number = 15;
    //    8 % 10 = 8
    //    9 % 10 = 9
    //    10 % 10 = 0
    //    int result = number % 10;
    //    printf("result = %d\n", result);
    
    
    //    练习2：提示用户在屏幕上输入时间的秒数，然后转换为多少分多少秒的格式输出
    
    //    500  8分/20秒
    //    1.定义变量保存用户输入的整数
    int time;
    //    2.接收用户输入的整数
    scanf("%d", &time);
    //    3.拿到用户输入的整数换算成多少分多少秒
    int minute = time / 60;//分钟 8
    int second = time % 60;//秒数
    //    4.输出到屏幕
    printf("%d分/%d秒\n", minute, second);
    return 0;
}

int test2()
{
    /*
     //    概念：自动类型转换（double --》int）
     int number = 10.8;//int 4  double  8
     printf("%d\n", number);
     */
    /*
     //    概念：强制类型转换
     int number = (int)10.8;
     printf("%d\n", number);
     */
    
    //    概念：自动类型提升(在算术运算时会自动把小类型的数据提升为大类型的数据后再运算)
    double result = 10.8 + 10;//double + double
    printf("result = %lf\n", result);
    
    
//    参与运算的值是什么类型计算出来的结果就是什么类型
    int result2 = 1 / 2;
    printf("result2 = %d\n", result2);
    return 0;
}

int test()
{
    /*
     算术运算符基本概念
     +
     -
     *
     /
     %
     */
    int result = 10 + 20;
    
    result = 20 - 10;
    
    result = 3 * 3;
    
    result = 10 / 5;
    
//    取模就是取余数
    result = 10 % 3;
    printf("result = %d\n", result);
    return  0;
}

