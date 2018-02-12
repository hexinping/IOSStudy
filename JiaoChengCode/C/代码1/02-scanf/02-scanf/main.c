//
//  main.c
//  02-scanf
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
     规则
     1.根据格式来匹配，碰到不匹配的格式则认为此格式结束
     2.遇到空格 tab 回车认为格式结束（%c除外）
     4.第一次碰到空格 tab 回车会丢弃继续匹配（%c除外）
     3.多个参数的时候如果某个格式匹配失败，后面的不匹配
     
     
     原理
     键盘--》
     输入缓冲区--》
     当输入缓冲区中有\n（回车）的时候scanf会去输入缓冲区中取值--》
     当遇到不匹配的格式scanf就结束了
     
     */
    int age;
    char sex;//M W
    float height;
    printf("请输入年龄、性别、身高：\n");
    scanf("%d", &age);
    scanf("%c", &sex);
    scanf("%f", &height);
    printf("age = %d, sex = %c, height = %f\n", age, sex, height);
    
    scanf("%d", &age);
    scanf("%c", &sex);
    scanf("%f", &height);
    printf("age = %d, sex = %c, height = %f\n", age, sex, height);
    return 0;
}

int test3()
{
    int number;
    /*
     键盘--》
     输入缓冲区--》
     当输入缓冲区中有\n（回车）的时候scanf会去输入缓冲区中取值--》
     当遇到不匹配的格式scanf就结束了
     */
    
    scanf("%d", &number);
    printf("number = %d\n", number);
    
    char myC;
    scanf("%c", &myC);
    printf("myC = %c\n", myC);
    
    
    return 0;
}

int test2()
{
    /*
     接收其它类型和printf一样
     char myC;
     scanf("%c", &myC);
     printf("%c\n", myC);
     */
    /*
    //    1.要求用户在屏幕上输入两个整数，计算这两个整数的和之后输出
    int number1;
    int number2;
    //    1.1.注意同时接收多个参数的适合，用户输入的格式要和“”里面的格式一模一样
    //    1.2.scanf语句它会从前往后匹配，一旦碰到不匹配的格式，scanf就结束了，后面的格式符不再匹配
    //    1.3.scanf接收多个参数的时候，里面的分割符号式任意的
    scanf("%d=%d", &number1, &number2);
    printf("number1 = %d, number2 = %d\n", number1, number2);
    */
    /*
     int number1;
     int number2;
     scanf("%d %d", &number1, &number2);
     //    command + [ 往左边移动   command + ] 往右边移动
     //    1.4当分隔符是空格的时候可以用 空格、tab、回车键都是可以的
     printf("number1 = %d, number2 = %d\n", number1, number2);
     */
    
    
    //    int number = 1111;
    //    printf("%3d", number);
    //    2.scanf注意点
    /*
     int number;
     //    2.1.如果指定了接收的位数多余的部分会被砍掉
     scanf("%3d", &number);
     printf("number = %d\n", number);
     */
    /*
     int number;
     //    2.2.在scanf格式符后面不要写\n，因为\n对于scanf由特殊的含义
     //    scanf("%d\n", &number);
     scanf("%d", &number);
     printf("number = %d\n", number);
     */
    return 0;
}

int test1()
{
//    二、scanf练习
    //    int v1 = 30;
    //    printf("%d\n", v1);
    //    1.要求用户在屏幕上输入两个整数，计算这两个整数的和之后输出
    
    //    1.定义两个变量保存用户输入的两个整数
    int number1;
    int number2;
    //    2.提示用户输入第一个整数
    printf("请输入第一个整数\n");
    //    3.接收用户输入的第一个整数
    scanf("%d", &number1);
    //    4.提示用户输入第二个整数
    printf("请输入第二个整数\n");
    //    5.接收用户输入的第二个整数
    scanf("%d", &number2);
    //一定要记住scanf第二个参数接收的是一个地址也就是在变量前面加上&
    //    6.计算用户输入的整数的和
    int sum = number1 + number2;
    //    7.输出整数的和
    printf("sum = %d\n", sum);
    return 0;
}
int test()
{
    /*
     一、scanf基本概念
     //    scanf();
     //    要求用户在屏幕上输入一个整数，并存储用户输入的整数，然后输出到屏幕上
     
     //    1.定义变量用来保存用户输入的整数
     int number;
     //    2.用scanf函数接收用户输入的整数
     //    &是取地址符号
     //    scanf是一个阻塞式的函数
     scanf("%d", &number);
     //    3.输出用户刚才输入的整数
     printf("number = %d\n", number);
     */
    return 0;
}

