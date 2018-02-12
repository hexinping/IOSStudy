//
//  main.c
//  04-赋值运算符
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    结合方向 从右至左
    int result = 10 + 20;
   
//    int a ;
//    int b ;
//    a = b = 55;
//    printf("a = %d, b = %d\n", a, b);
    
    /*
     +=
     */
    
    int c = 5;
//    c = c + 10;
//    c += 10;//c = c + 10;
    printf("c = %d\n", c);
    
    c += 20 + 30 + 40;// 错误：c = (c + 20)+ 30 + 40;
//    c = c +(20 + 30 + 40);
    printf("c = %d\n", c);
    
    return 0;
}

