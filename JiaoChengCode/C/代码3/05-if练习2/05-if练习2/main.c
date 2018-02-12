//
//  main.c
//  05-if练习2
//
//  Created by apple on 14-2-19.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    
    
//    int a = 50;
//    int b = 30;
//    int temp;//定义临时变量保存其中一个变量的值
//     printf("a = %d, b = %d\n", a, b);
//    temp = a;
//    a = b;
//    b = temp;
//    printf("a = %d, b = %d\n", a, b);
    
    
//    4.从键盘输入3个整数，排序后输出
//    1.提示用户输入三个整数
    printf("请输入三个整数\n");
//    2.定义变量保存用户输入的整数
    int v1, v2, v3;// 3 5 2
//    3.接收用户输入的整数
    scanf("%d,%d,%d", &v1, &v2, &v3);
//    4.排序
    /*
    if (v1 > v2 && v2 > v3) {
        printf("%d,%d,%d", v1, v2, v3);
    }else if (v1 > v3 && v3 > v2)
    {
        printf("%d,%d,%d", v1, v3, v2);
    }else if (v2 > v1 && v1 > v3)
    {
        printf("%d,%d,%d", v2, v1, v3);
    }else if (v2 > v3 && v3 > v1)
    {
        printf("%d,%d,%d", v2, v3, v1);
    }else if (v3 > v1 && v1 > v2)
    {
        printf("%d,%d,%d", v3, v1, v2);
    }else if (v3 > v2 && v2 > v1)
    {
        printf("%d,%d,%d", v3, v2, v1);
    }
     */
    
//    选择排序
    
    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    if (v1 > v3) {
        int temp = v1;
        v1 = v3;
        v3 = temp;
    }
    
    if (v2 > v3) {
        int temp = v2;
        v2 = v3;
        v3 = temp;
    }
    
    printf("%d,%d,%d", v1, v2, v3);
    
//    5.输出
    
    return 0;
}

int test()
{
    /*
     //    1.从键盘输入一个整数，判断其是否是偶数，如果是偶数就输出YES，否则输出NO；
     
     //    1.提示用户输入一个整数
     printf("请输入一个整数\n");
     //    2.定义变量保存用户输入的整数
     int number = -1;
     //    3.接收用户输入的整数
     scanf("%d", &number);
     //    4.判断并输出结果
     if (number%2 == 0) {
     //        偶数
     printf("YES\n");
     }else
     {
     //        奇数
     printf("NO\n");
     }
     */
    
    /*
     //    2.从键盘输入两个整数，判断大小后输出较大的那个数
     //    1.提示用户输入2个整数
     printf("请输入两个整数，并用逗号隔开\n");
     //    2.定义变量保存用户输入的整数
     int value1, value2;
     //    3.接收用户输入的整数
     scanf("%d,%d", &value1, &value2);
     //    4.判断并输出结果
     //    int max = value1 > value2 ? value1 : value2;
     
     int max = -1;
     if (value1 > value2) {
     max = value1;
     }else{
     max = value2;
     }
     printf("max = %d\n", max);
     */
    /*
     三目运算符：可以用来简化if else代码
     三目运算符弊端：因为是一个运算符，所以运行完必须有一个结果。
     当遇到比较简单的判断，并且有返回值的情况就用三目运算符，其它情况用if
     */
    
    //    3.从键盘输入3个整数，判断大小后输出较大的那个数
    //    1.提示用户输入3个整数
    printf("请输入3个整数，并用逗号隔开\n");
    //    2.定义变量接收用户输入的3个整数
    int v1, v2, v3;
    //    3.接收用户输入的整数
    scanf("%d,%d,%d", &v1, &v2, &v3);
    //    4.判断最大值
    //    4.1第一种方式
    //    int preMax = v1 > v2 ? v1 : v2;
    //    int max = preMax > v3 ? preMax : v3;
    
    //    4.2第二种方式
    //    int max = (v1 > v2 ? v1 : v2) > v3 ? (v1 > v2 ? v1 : v2) : v3;
    
    //    4.3第三种方式
    //    int max = -1;
    //    if (v1 > v2) {
    //        max = v1;
    //    }else{
    //        max = v2;
    //    }
    //
    //    if (max < v3) {
    //        max = v3;
    //    }
    
    //    4.4第四种方式
    //    int max = -1;
    //    if (v1 > v2 && v1 > v3) {
    //        max = v1;
    //    }else if (v2 > v1 && v2 > v3)
    //    {
    //        max = v2;
    //    }else if (v3 > v2 && v3 > v1)
    //    {
    //        max = v3;
    //    }
    
    //    4.5第五种方式
    int max = -1;
    if (v1 > v2) {
        //        现在v1最大
        if (v1 > v3) {
            max = v1;
        }else{
            max = v3;
        }
    }else{
        //        现在v2最大
        if (v2 > v3) {
            max = v2;
        }else{
            max = v3;
        }
    }
    
    //    5.输出最大值
    printf("max = %d\n", max);
    
    return 0;
}

