//
//  main.c
//  07-变量的内存分析
//
//  Created by apple on 14-2-23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    int 4个字节  8  32位
//    1.内存分配存储空间给变量是从字节地址从大到小的分配（内存寻址是由大到
//    小）
//    2.变量的地址就是它的第一个字节地址(自己占用的字节地址最小的那个)
//    3.因为内存寻址是由大到小，所以先定义的变量的内存地址会比后定义的大
    
    int num1;
//    0000 0000 0000 0000 0000 0000 0000 1001
    num1 = 9;
//    0000 0000 0000 0000 0000 0000 0000 1101
    int num2 = 13;
    
//    %p代表打印变量地址
    /*
     num = 0x7fff5fbff82c
     num2 = 0x7fff5fbff828 9abc
     */
    printf("num = %p\n", &num1);
    printf("num2 = %p\n", &num2);
    
    return 0;
}

