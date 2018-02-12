//
//  main.c
//  09-for注意点
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    1。for也能省略大括号，和if while一样省略大括号的时候当条件满足会执行for后面的第一条语句
//    for(int i = 0; i < 3; i++)
//        printf("i = %d\n", i);
    
    
//    2.和if while一样当省略大括号的时候，不能在for后面定义变量，作用域混乱
//    for(int i = 0; i < 3; i++)
//        int x = 30;
//    printf("x = %d\n", x);
    
//    int a = 10;
//    int a = 20;
    
    
//    for (int i = 0; i < 3; m++)
//    {
//        printf("i = %d\n", i);
//        int m = 0;
//    }
    
//    int a = 10;
//    {
//        int  a = 20;
//    }
    
//    for (int i = 0; i < 3; i++) {
//        int i = 5;
//        printf("i = %d\n", i);
//    }
    
    
    
    for (int i = 0; i < 3; printf("i = %d\n", i),i++);
    
    return 0;
}

