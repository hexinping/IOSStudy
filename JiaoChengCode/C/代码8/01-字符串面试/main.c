//
//  main.c
//  01-字符串面试
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char* myStrcpy(char * dest, const char * src);
char* myStrcpy2(char *dest, const char *src);
char* myStrcat(char *dest, const char *src);
char* myStrcat2(char *dest, const char *src);
int myStrcmp(const char *str1, const char *str2);
int main(int argc, const char * argv[])
{

    /*
//    1.自定义字符串拷贝
    char buf[5];
    char src[4] ="lnj";
    
    printf("拷贝前:%s\n", buf);
//    char *result = strcpy(buf, src);
//    printf("拷贝后:%s\n", buf);
//    printf("拷贝后:%s\n", result);
    
//    char *result = myStrcpy(buf, src);//0ffc0
    char *result = myStrcpy2(buf, src);
    printf("buf = 拷贝后:%s\n", buf);
    printf("result = 拷贝后:%s\n", result);
     */
    
    /*
//    2.自定义字符串拼接
    char buf[3] = "l";
    char src[2] ="c";
    printf("拼接前:%s\n", buf);
//    char *result = strcat(buf, src);
//    char *result = myStrcat(buf, src);
    char *result = myStrcat2(buf, src);
    printf("拼接后:%s\n", buf);
    printf("拼接后:%s\n", result);
    */
    
    char str1[3] = "ab";
    char str2[3] = "ab";
//    int result = strcmp(str1, str2);
    int result = myStrcmp(str1, str2);
    printf("result = %d\n", result);
    
    return 0;
}

int myStrcmp(const char *str1, const char *str2)
{
    int result = (*str1 - *str2);// a - a = 0
    while (!result && *str1 != '\0') {
        str1++;
        str2++;
        result = (*str1 - *str2);//b - b = 0 //0 - 0 = 0
    }
    
//    能执行到这个地方只有两中可能 1.执行到了\0 2.不相等
    if (result > 0) {
        return 1;
    }else if ( result < 0)
    {
        return -1;
    }
    return result;
}


char* myStrcat2(char *dest, const char *src)
{
    //    定义指针保存字符串的首地址
    char *cp = dest;
//        移动dest指针到外面实参buf的字符串结尾(\0)
    while (*dest)
        dest++;
    
    while ((*dest++ = *src++));
    
    return cp;
}



char* myStrcat(char *dest, const char *src)
{
    //    定义指针保存字符串的首地址
    char *cp = dest;
    
    while (*dest != '\0') {
//        移动dest指针到外面实参buf的字符串结尾(\0)
        dest++;
    }
    
    while (*src != '\0') {
//        拷贝src中的字符到buf中
        *dest = *src;
        src++;
        dest++;
    }
//    添加字符串结尾标识
    *dest = '\0';
    
    return cp;
}


/**
 *  自定义字符串拷贝
 *
 *  @param dest 目标容器
 *  @param src  被拷贝的字符
 *
 *  @return 拷贝后的地址
 */
char* myStrcpy2(char *dest, const char *src)
{
    //    定义指针保存字符串的首地址
    char *cp = dest;
    //    1.循环遍历取出src中的所有字符
    while ((*dest++ = *src++));
    
    return cp;
}


/**
 *  自定义字符串拷贝
 *
 *  @param dest 目标容器
 *  @param src  被拷贝的字符
 *
 *  @return 拷贝后的地址
 */
char* myStrcpy(char *dest, const char *src)// char *src = src;
{
//    定义指针保存字符串的首地址
    char *cp = dest;
    
//    1.循环遍历取出src中的所有字符
    while (*src != '\0') {// l n j
//        2.把src中的字符拷贝到dest中
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
//    0ffc0
    return cp;
}



