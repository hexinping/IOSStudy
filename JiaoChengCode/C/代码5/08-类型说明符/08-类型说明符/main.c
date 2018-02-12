//
//  main.c
//  08-类型说明符
//
//  Created by apple on 14-2-23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
 int  4个字节
 
 修饰长度
 short 2个字节 -2(15)~2(15)-1 当确定int类型不会超高该范围的时候可以用short来修饰int 优化内存
 输出short修饰的整型用 ： %hd
 short int == short
 
 long  8个字节  在64位系统下占8 -2(63)~2(63)-1  当整数超过int范围的时候可以使用long来修饰整型
 输出long修饰的整型用 ： %ld , 给long修饰的整型变量赋值末尾最好加上l
 long int == long
 
 long long 8个字节  -2(63)~2(63)-1
 输出long long修饰的整型： %lld， 给long修饰的整型变量赋值末尾最好加上ll
 long long int = long long
 
 修饰符号位
 signed  有符号  正数、负数 、0   -2(31)~2(31)-1
 unsigned 无符号 正数、0  0~2(32)-1
 输出unsigned修饰的整型：%u
 
 */
int main(int argc, const char * argv[])
{


//    int v = 10;
//    printf("int = %lu\n", sizeof(v));//4
    
//    int 4 32  -2(31)~2 (31) -1
//    int num = 12345678987654321;
  
    /*
     short:
    2个字节  -2(15)~2(15)-1
     */
    
//    short int num = 123;
//    short int == short
//    short num = 123;
//    printf("num = %hd\n", num);
    
    /*
     long
    8个字节   -2(63)~2(63)-1
    如果在int前面加上了类型说明符 long 最好在赋值的结果写上l/L
     */
//    long int num = 12345678987654321L;
//    long int == long
//    long num = 12345678987654321L;
//    printf("long = %lu\n", sizeof(num));
    
    /*
     long long占 8个字节  -2(63)~2(63)-1
     如果在int前面加上了类型说明符 long long 最好在赋值的结果写上ll/LL
     */
//    long long int num1 = 12345678987654321LL;
//    long long int == long long
//    long long num1 =  12345678987654321LL;
//    printf("long long = %lu\n", sizeof(num1));
//    printf("num = %lld\n", num1);
    
    /*
     小江江友情提示：没有long long long
     */
//    long long long int =   12345678987654321LL;
//    printf("long long = %lu\n", sizeof(num1));
    
    
    
    
//    signed  有符号  正数、负数 、0   -2(31)~2(31)-1
//    unsigned 无符号 正数、0  0~2(32)-1
    
//    int num = 0;//int 默认就是有符号
//    0000 0000 000 0000 000 0000 000 0000
//    signed int num = 0;
//    printf("num = %d\n", num);
    
//    unsigned int num = -123;
//    printf("num = %u \n", num);
    
//    不同类型修饰符可以混合使用
//    signed long int num = 123;
//    unsigned short int num = 123;
//    printf("num = %u\n", num);
    
//    相同类型的修饰符不能混合使用
//    short long int  num = 123;
//    unsigned signed int num = 123;
//     printf("num = %ld \n", num);
    
    
    
    return 0;
}

