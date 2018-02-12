//
//  main.c
//  06-位运算练习2
//
//  Created by apple on 14-2-23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//要用判断一个变量的奇偶性，如果是奇数就输出奇数，如果是偶数就输出偶数
int main(int argc, const char * argv[])
{

//    1.提示用户输入一个整数
    printf("请输入一个整数\n");
//    2.定义变量保存用户输入的整数
    int temp = -1;
//    3.接收用户输入的整数
    scanf("%d", &temp);
//    4.判断用户输入的整数的奇偶性
    /*
//     if else
    if (temp % 2 == 0) {
        printf("偶数\n");
    }else{
        printf("奇数\n");
    }
     */
    
//    三目运算符
//    (temp % 2 == 0) ? printf("偶数\n") :  printf("奇数\n");
//    temp % 2 ? printf("奇数\n") : printf("偶数\n");
    
    
//    位运算
    
    /*
     9   1001
     11  1011
     
     10  1010
     12  1100
     特点： 奇数的最后以为都是1 偶数都是0
     
     1000
     0001
     ____
     0000
     */
    //    if ((temp & 1) == 1) {
    
//        printf("奇数\n");
//    }else{
//        printf("偶数\n");
//    }
    
    
//    if (temp & 1) {
//        printf("奇数\n");
//    }else{
//        printf("偶数\n");
//    }
    
//    5.输出奇偶性
    return 0;
}

