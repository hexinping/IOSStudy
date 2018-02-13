//
//  main.c
//  05-指针类型
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
     
//    1.变量类型不同,变量占用的存储空间不同
    char c = 'a';// 1
    int i = 10; // 4
    double d = 10.1; //8
    
    printf("char  = %lu, int = %lu, double = %lu\n", sizeof(char), sizeof(int), sizeof(double));
    
    
//    2.所有指针类型都占用8个字节的存储空间
    char *cp = &c;// 8
    int *ip = &i;// 8
    double *dp = &d;// 8
    
    printf("char  = %lu, int = %lu, double = %lu\n", sizeof(cp), sizeof(ip), sizeof(dp));
    
    */
    
//    0000 0000  0000 0000  0000 0000  0000 1001
    int c1 = 9;
//    0000 0001
    char c2 = 1;
    
//    int *p = &c1;
//    定义指针时候指定的类型,是为了告诉指针变量取值的时候取多少个字节
    int *p = &c2;//用一个int类型的指针指向了char类型的变量
    
//    printf("c1 = %d, c2 = %d\n", c1, c2);
    /*
     0000 0001
     0000 1001
     0000 0000
     0000 0000
     
     0000 0000 0000 0000 0000 1001 0000 0001
     */
    printf("c2 = %d\n", *p);
    
    return 0;
}

