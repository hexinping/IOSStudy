//
//  main.c
//  03-while练习
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // 提示用户输入一个正整数n， 计算1 + 2 + 3 + ...n的和
    
    /*
     1 + 2 + 3 + 4 + 5
0 + 1
 1 + 2
(1 + 2)3 + 3
     
  (1 + 2 + 3)6 + 4
     
  (1 + 2 + 3 + 4)10 + 5
     
     每次都是用上一次的和 加上一个递增的数
     */
    /*
//    1.定义变量保存上一次的和
    int sum = 0;
//    2.定义变量保存递增的数
    int number = 0;
    while (number <= 5) {
        printf("sum = %d + number = %d\n", sum, number);
       sum = sum + number;
       number++;
    }
    printf("sum = %d\n", sum);
     */
    
    
//    1.提示用户输入一个正整数
//    printf("请输入一个正整数\n");
//    2.定义变量保存用户输入的正整数
    int number = -1;
//    3.接收用户输入的正整数
//    scanf("%d", &number);
//    4.判断用户输入是否合法
//    if (number < 0) {
//        printf("S B\n");
//        return 0;
//    }
    int cn = 0;
    while (number < 0) {
        printf("请输入一个正整数\n");
        scanf("%d", &number);
        cn++;
        printf("cn = %d\n", cn);
        if (cn == 3) {
            printf("我怀疑你的智商有问题，现去检查一下\n");
            return 0;
        }
    }
    
//    5.计算结果
//    5.1.定义变量保存上一次的结果
    int sum = 0;
//    5.2.定义变量保存递增的数
    int count = 0;
//    5.3.利用循环重复执行 和加上递增数
    /*
    while (count <= number) {
//        sum = sum + number;
        sum += count;//累加思想
//     利用循环的形式来记录每一次累加变化的结果
        count++;
    }
     */
    
//    不定义保存递增的数的方式
    while (number > 0) {
        sum += number;
        number--;
    }
//    6.输出最后的结果
    printf("sum= %d\n", sum);
    
    return 0;
}

