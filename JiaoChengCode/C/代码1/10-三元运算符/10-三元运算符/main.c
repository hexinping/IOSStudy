//
//  main.c
//  10-三元运算符
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 !条件表达式;
 条件表达式1 && 条件表达式2;
 三目运算符格式： 条件表达式 ？ 结果表达式1 ：结果表达式2；
 
 运行结果：
 如果条件表达式为真就返回“结果表达式1” ，如果条件为假就返回“结果表达式2”
 */
int main(int argc, const char * argv[])
{

//    int result = 10 > 9 ? 88 : 99;
    /*
    int a = 11;
    int b = 19;
    int result = a > b ? a : b;
    printf("result = %d\n", result);
     */
    /*
//    1.从键盘输入两个整数 ，比较这两个整数的大小，输出最大值
    
//    1.定义变量保存用户输入的整数
    int number1, number2;
//    2.提示用户输入整数
    printf("请输入两个整数并且用逗号隔开:\n");
//    3.接收用户输入的整数
    scanf("%d,%d", &number1, &number2);
//    4.比较大小
     int max = number1 > number2 ? number1 : number2;
//    5.输出比较后的结果
    printf("max = %d\n", max);
    */
    
//    2.从键盘输入三个整数 ，比较这两个整数的大小，输出最大值
    //    1.定义变量保存用户输入的整数
    int number1, number2, number3;
    //    2.提示用户输入整数
    printf("请输入三个整数并且用逗号隔开:\n");
    //    3.接收用户输入的整数
    scanf("%d,%d,%d", &number1, &number2, &number3);
    //    4.比较大小
//    int preMax = number1 > number2 ? number1 : number2;
//    int max = preMax > number3 ? preMax : number3;
    
    int max = (number1 > number2 ? number1 : number2) > number3 ? (number1 > number2 ? number1 : number2) : number3;
    //    5.输出比较后的结果
    printf("max = %d\n", max);
    
    return 0;
}

