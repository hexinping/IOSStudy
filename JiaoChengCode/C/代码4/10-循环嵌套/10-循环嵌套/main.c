//
//  main.c
//  10-循环嵌套
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 while(条件表达式)
 {
    while((条件表达式)
     {
        语句；
        ...
     }
 }
 
 for (;;)
 {
     for (;;)
     {
         for (;;)
         {
             for (;;)
             {
             
             }
 
         }
 
     }
 }
 
 for (;;)
 {
     while((条件表达式)
     {
         语句；
         ...
     }
 }
 
 
 */
int main(int argc, const char * argv[])
{

////    外循环执行的次数 * 内循环执行的次数
//    for (int i = 0; i < 3; i++) {
////        printf("jackson\n");
//        for (int j = 0; j < 2; j++) {
//            printf("jackson\n");
//        }
//    }

    /*
     好友列表1
     好友1
     好友2
     好友列表2
     好友1
     好友2
     好友列表3
     好友1
     好友2
     */
    /*
    printf("游戏列表1\n");
    printf("    好友1\n");
    printf("    好友2\n");
    
    printf("游戏列表2\n");
    printf("    好友1\n");
    printf("    好友2\n");
    
    printf("游戏列表3\n");
    printf("    好友1\n");
    printf("    好友2\n");
     
     printf("好友列表3\n");
     printf("    好友1\n");
     printf("    好友2\n");
     
     printf("好友列表3\n");
     printf("    好友1\n");
     printf("    角色\n");
    */
    
//    程序可扩展性
    for (int i = 0; i < 4; i++) {
        printf("好友列表%d\n", i+1);
        for (int j = 0; j < 4; j++) {
            printf("    角色%d\n", j);
        }
    }
    
    
    return 0;
}

