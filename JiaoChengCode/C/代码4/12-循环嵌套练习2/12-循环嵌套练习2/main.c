//
//  main.c
//  12-循环嵌套练习2
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    /*
     
     1
     12
     123
     
     */
    /*
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", j+1);
        }
        printf("\n");
    }
     */
    
    
    /*
     
     1
     22
     333
     
     1.观察发现有很多行很多列--》循环嵌套
     2.尖尖朝上，让内循环条件表达式随着外循环i改变
     3.发现每次输出的值其实就是i的值
     */
    /*
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
     */
    
    /*
     打印99 乘法表
     1*1 = 1
     1*2 = 2 2*2 = 4
     
     1.观察发现有很多行很多列--》循环嵌套
     2.尖尖朝上，让内循环条件表达式随着外循环i改变
     3.输出的结果等于 内循环的变量 * 外循环的变量
     */
    
    
    int number = -1;
    
    
    while (number < 0) {
        printf("请输入一个正整数\n");
        scanf("%d", &number);
    }
    
    
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d * %d = %d \t", j, i, (j * i));
        }
        printf("\n");
    }
    
    
    
    return 0;
}

