//
//  main.c
//  04-if注意点
//
//  Created by apple on 14-2-19.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    1.任何数值都有真假性
//    int a = 10;
//    if (0) {
//        printf("123\n");
//    }
    
    
//     
//    int a = 0;//0
//    2.在以后开发当中但凡遇到比较一个变量等于或者不等于某一个常量的时候，把常量写在前面
//    if (0 = a) {
//        printf("a的值是0\n");
//    }else{
//       printf("a的值不是0\n");
//    }
    
    
//    if (0)
//        printf("123\n");
//    3.注意：;号是空语句
//    int a = 0;
//    if (10 == a);
//    {
//        printf("123\n");
//    }
    
//    4.变量作用域问题
//    if (1)
//    {
//        int a = 10;
//    }
//    printf("a = %d\n", a);
    
    
//    5.作用域混乱，想在if后面定义变量必须写｛｝
//    if (0)
//        int a = 10;
//    printf("a = %d\n", a);
    
    
//    6. 注意：（if else是一个整体， else匹配if的时候匹配离它最近的一个if）
    if(0)
    if(1)
        printf("A\n");
    else
        printf("B\n");
    else
    if (1)
        printf("C\n");
    else
        printf("D\n");
    
    return 0;
}

