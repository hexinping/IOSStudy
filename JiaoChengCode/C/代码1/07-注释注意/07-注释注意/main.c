//
//  main.c
//  07-注释注意
//
//  Created by apple on 14-2-16.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    注释可以嵌套使用，但是嵌套有很多注意点
   
//    1.单行注释和多行注释在同一行的时候是可以嵌套使用的
//     /* */
    
//    2.单行注释和多行注释不在同一行的时候不可用嵌套使用
//     /*
//    */
    
//  3.多行注释里面可以嵌套单行注释
    /*
// 
//     
     */
    
    
//    4.多行注释不能嵌套多行注释
    /*
     
     /*
     */

     */
    printf("Hello, World!\n");
    
    
    return 0;
}

