//
//  main.c
//  08-for-while对比
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 0;
    while (i < 3) {
        printf("i = %d\n", i);
        i++;
    }
    printf("循环结束后 i = %d\n", i);
    
    printf("___________________\n");
    
    
    for (int j = 0; j < 3; j++) {
        printf("j = %d\n", j);
    }
//    printf("循环结束后 j = %d\n", j);
    
    /*
     什么情况下用for
     当变量只是用来控制循环的次数的时候用for更节约内存
     什么情况下用while
     当变量在循环结束后还需要使用，就用while
     */
    
    return 0;
}

