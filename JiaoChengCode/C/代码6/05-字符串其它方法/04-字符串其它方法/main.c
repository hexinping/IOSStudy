//
//  main.c
//  04-字符串其它方法
//
//  Created by apple on 14-2-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <string.h> //包含该头文件 为了能够倒入strcat的声明

int main(int argc, const char * argv[])
{

    
    return 0;
}

void testStrCmp()
{
    //    3.字符串比较
    
    //    对给定的两个字符串进行比较，如果str1等于str2就返回0，
    //    如果str1大于str2就返回  一个正数
    //    如果str1小于str2就返回  一个负数
    //    strcmp(const char * str1, const char * str2)
    
    //    char str1[] = "abcdef";
    //    char str2[] = "abcdff";
    //    int result = strcmp(str1, str2);
    //    printf("result = %d\n", result);
    
    //    对给定的两个字符串的length个字符进行比较
    //    strncmp(const char * str1, const char * str2, size_t length)
    
    //    char str1[] = "abcdef";
    //    char str2[] = "abcdff";
    //    int result = strncmp(str1, str2, 5);
    //    printf("result = %d\n", result);
}

void testStrCpy()
{
    /*
     //  2.字符串拷贝
     //    char buf[10] = "abcdefg";
     //    char src[4] = "lnj";
     //    会将src里面的字符串拷贝到buf里面
     //    注意点 buf的容量要足够大否则会报错
     //    如果buf中有数据拷贝之后会被覆盖
     //    strcpy(char *dest, const char *src)
     //    printf("拷贝前：%s\n", buf);
     //    strcpy(buf, src);
     //    printf("拷贝后：%s\n", buf);
     */
    
    
    //    会将src中的length个字符拷贝到dest中
    //    strncpy(char * dest, const char * src, size_t length);
    
    /*
     char buf[3];
     char src[4] = "lnj";
     printf("拷贝前：%s\n", buf);
     //    动态的计算出buf的容量
     int length = sizeof(buf)/ sizeof(char) - 1;
     strncpy(buf, src, length);
     printf("拷贝后：%s\n", buf);
     */
}

void testStrcat()
{
    /*
          //    1.字符串的拼接
     
     //    char buf[5] = "cool";
     //    char src[4] = "lnj";
     //    strcat的作用是将src里面的字符串拼接到dest后面
     //    strcat(char *dest, const char * src);
     //    注意点：buf字符数组的长度必须能够容纳下 buf + src + 1 的长度
     //    printf("拼接前：%s\n", buf);
     //    strcat(buf, src);//当我们调用完这个函数会返回一个字符串
     //    printf("拼接后：%s\n", buf);
     */
    
    
    /*
     //    strncat的作用是将src里面的 length个字符 拼接到dest后面
     //    strncat(char *dest, const char *src, size_t length)
     
     
     char buf[5] = "cool";
     char src[4] = "lnj";
     printf("拼接前：%s\n", buf);
     
     //    动态计算出buf剩余的容量
     unsigned long lenght = (sizeof(buf)/sizeof(char)) - strlen(buf) - 1;
     strncat(buf, src, lenght);
     printf("拼接后：%s\n", buf);
     */
    
}

