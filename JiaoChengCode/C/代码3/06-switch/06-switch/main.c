//
//  main.c
//  06-switch
//
//  Created by apple on 14-2-19.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 if (表达式)
 {
 语句1；
 ...
 }
 
 switch (表达式)
 {
 //把传入的表达式和里面case后面的表达式进行比较（是否相等）
 case 表达式1：// 表达式 == 表达式1
 语句1；
 ...
 break; //break的作用是用于结束switch语句
 '  case 表达式2：
 语句1；
 ...
 break;
 default: //只有所有的case都不满足才会执行default后面的语句
 语句1；
 ...
 break;
 }
 
 */
int main(int argc, const char * argv[])
{
//    int a = 65;
    
    /*
     break：用于结束switch语句
//   switch里面的case只要匹配一次其它的都失效，包括default
     当switch遇到break 和 ｝就结束了
     默认情况下default后面的break可以省略
     */
    /*
    switch (a) {
        case 65:// a == 65
            printf("a\n");
//            break;
//            switch里面的case只要匹配一次其它的都失效，包括default
        case 55://a == 55
            printf("b\n");
//            break;
        case 45:
            printf("c\n");
//            break;
        default:
            printf("d\n");
//            break;
    }
    printf("123\n");
    */
    
    /*
    int a = 66;
    int b = 1;
    switch (a) {
        case 10://
            b++;
            break;
        case 20:
            b++;
            break;
        case 30:
            b++;
            break;
        default:
            b++;//b = 2
            break;
    }
    printf("a = %d, b = %d\n", a, b);
     */
    /*
    int a = 65;
    int b = 1;
    switch (10) {
//            注意：在switch中case后面的表达式的值不能相同
//        case 65.0://switch中case后面只能是整型常量
//            printf("A\n");
//            break;
        case 3 + 3://只要返回值是整型的表达式都可以
            printf("B\n");
            break;
        case 'T'://字符的本质就是整型常量
            printf("B\n");
            break;
//        case b://
//            printf("B\n");
//            break;
//        case 65:
//            printf("B\n");
//            break;
        default:
            printf("c\n");
            break;
    }
    */

    /*
     要求用swithc语句来实现计算器，包含计算加减乘除功能
     */
    /*
//    1.提示用户输入格式
    printf("请输入要计算的数，输入格式（1 + 1）\n");
//    2.定义变量保存用户输入的参数
    int val1, val2;
    char operator;//+ - * /
//    3.接收用户输入的参数
    scanf("%d %c %d", &val1, &operator, &val2);
    
//    3.根据输入的参数计算结果
    int result;
    switch (operator) {
        case '+':
        {
//            printf("%d %c %d = %d\n", val1, operator, val2 , (val1 + val2));
//            int sum = val1 + val2;
            result = val1 + val2;
//             printf("%d %c %d = %d\n", val1, operator, val2 , sum);
            break;
        }
        case '-':
            result = val1 - val2;
//            printf("%d %c %d = %d\n", val1, operator, val2 , (val1 - val2));
            break;
        case '*':
            result = val1 * val2;
//            printf("%d %c %d = %d\n", val1, operator, val2 , (val1 * val2));
            break;
        case '/':
            result = val1 / val2;
//            printf("%d %c %d = %d\n", val1, operator, val2 , (val1 / val2));
            break;
            
        default:
            break;
    }
//    5.输出结果
     printf("%d %c %d = %d\n", val1, operator, val2 , result);
     */
    
    
//    if (0)
//        int a = 10;
//    printf("a = %d", a);
    
    /*
    switch (10) {
        case 10:
        {
//            和if一样是作用域混乱
            int num = 10;
            printf("a\n");
            break;
        }
        case 20:
            printf("b\n");
            break;
        default:
            break;
    }
     */
    /*
    int b = 30;
    switch (b) {
//            2.default的位置可以在switch里面随意
//            无论default写在前面后面都会先去判断case，只有所有的case都不满足才会执行default
        default:
            printf("b\n");
            break;//如果把default写在case前面，default后面的break不能省略
        case 20:
            printf("a\n");
            break;
//            1.default可以省略
    }
    */
    
    
    //    1.提示用户输入格式
    printf("请输入要计算的数，输入格式（1 + 1）\n");
    //    2.定义变量保存用户输入的参数
    int val1, val2;
    char operator;//+ - * /
    scanf("%d,%d", &val1, &val2);
//    char temp = getchar();//scanf("%c", xx);
    scanf("%c", &operator);
    printf("%d,%c,%d\n", val1, operator, val2);
    
    return 0;
}

