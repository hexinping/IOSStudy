//
//  main.c
//  06-字符串数组
//
//  Created by apple on 14-2-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int age = 10;
    int ages[10] = {1, 22 ,4, 10 ,6, 8};
    
    
    int agess[2][3] = {
        {1 ,4 ,6},
        {2, 5, 8}
    };
    
//    字符串数组
//    char name[] = "jackson";
//    char name2[] = "jordan";
//    char name3[] = "iverson";
//    char name4[] = "lee";
    
//    字符串数组其实就是二维数组，只不过里面存的是字符串（因为字符串用数组来保存so...）
    char name5[4][10] = {
        "jackson",
        "jordan",
        "iverson",
        "lee"
    };
    
    printf("%s\n", name5[1]);
    
    
    return 0;
}

