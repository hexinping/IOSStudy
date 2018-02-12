//
//  main.c
//  05-while使用注意
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    1.任何数值都有真假性
//    while (1) {//死循环
//        printf("123\n");
//    }
    
//    printf("123\n");
    
    /*
     if(1)
        printf("123\n");
     */
    
//    2、while省略大阔号的时候条件满足就会执行while后面的第一条语句
//    while (0)
//       printf("123\n");
//    printf("456\n");
    
//    3.作用域问题
    /*
    while (1) {
        int a = 10;
    }
    printf("a = %d\n", a);
    */
    /*
    if (1)
        int b = 20;
    printf("b = %d\n", b);
    */
    
//    4.作用域混乱
    /*
    while (0)
        int a = 10;
     printf("a = %d\n", a);
     */
    
//    5.分好空语句问题
    
//    if (0);//空语句
//    {
//        printf("456\n");
//    }
    /*
    while (1);//空语句
    {
        printf("123\n");
    }
    */
    
    
//  最简单的死循环
    while (1);
    
    return 0;
}

