//
//  main.c
//  06-dowhile
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 while (条件表达式)
 {
    语句；
    ...
 }
 
 
 do
 {
 
 }while (条件表达式);//一定要注意要写这个分好，;代表while结束
 特点：无论条件是否满足，至少会执行一次循环体
 */
int main(int argc, const char * argv[])
{

//    int x = 0;
//    while (x < 3) {
//        printf("x = %d\n", x);
//        x++;
//    }
//    printf("___________________\n");
//    
//    int y = 0;
//    do {
//        printf("y = %d\n", y);
//        y++;
//    } while (y < 3);
    
    
    
//    
    int x = 0;
    while (x < 0) {
        printf("x = %d\n", x);
        x++;
    }
    printf("___________________\n");
    
    int y = 0;
    do {
        printf("y = %d\n", y);
        y++;//1 2
    } while (y < 2);
    
    
    /*
     while 现判断条件，只有条件满足才执行循环体
     do while 无论条件是否满足，至少会执行一次循环体
     
     一般情况下要使用while和dowhile都使用while
     只有当无论条件是否满足都要执行一次循环体的情况才用dowhile
     */
    return 0;
}

