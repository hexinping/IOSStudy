//
//  main.c
//  01-宏定义
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//所有预处理指令都是以#开头
//格式 #宏名 值
//#define COUNT 4
//预处理指令是再代码翻译成0跟1之前的操作
//宏定义很简单,只是做最单纯的替换
//规范 一般宏名都大写/如果不全部大写前面应该加上一个k


int main(int argc, const char * argv[])
{
    
//    int num = COUNT;
    
#define kCount 4
    
    int count = 4;
//    1.宏定义
    int array[kCount] = {1, 3, 5, 7};
    
//    int lenth = sizeof(array)/sizeof(int);
    for (int i = 0; i < kCount; i++) {
        printf("array[%d] = %d\n", i , array[i]);
    }

//    提前结束宏定义的作用范围
#undef COUNT
    
//    int num = COUNT;
//    printf("num = %d\n", num);
    
//    2注意再双引号中的宏名是不会替换的
    printf("COUNT");
    
    
    
    return 0;
}

