//
//  main.c
//  05-字符串练习
//
//  Created by apple on 14-2-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int char_contains(char str[],char key);
int char_contains2(char str[],char key);
int char_contains3(char str[],char key);
int char_contains4(char str[],char key);
int main(int argc, const char * argv[])
{

    /*
     编写一个函数char_contains(char str[],char key)，
     如果字符串str中包含字符key则返回数值1，否则返回数值0
     */
    
    char str[] = "itcast";
    int result = char_contains4(str, 'm');
    printf("result =  %d\n", result);
    return 0;
}


int char_contains4(char str[],char key)
{
//    
    int i = -1;
//    "itc"   a  //0 1 2 3
    while (str[++i] != key && str[i] != '\0');
    
    return str[i] == '\0' ? 0 : 1;
}

int char_contains3(char str[],char key)
{
    int i = 0;
    //    1.遍历整个字符串
    while (str[i])
    {
        //        判断是否包含key
        if (str[i] == key) {
            return 1;
        }
        i++;
    }
    
    return 0;
}


int char_contains2(char str[],char key)
{
    int i = 0;
//    1.遍历整个字符串
    while ('\0' != str[i])
    {
        //        判断是否包含key
        if (str[i] == key) {
            return 1;
        }
        i++;
    }
    
    return 0;
}


// 最容易想到而且对于初学者最简单的方式
int char_contains(char str[],char key)
{
//    1.遍历整个字符串
    for (int i = 0; i < strlen(str); i++) {
//        判断是否包含key
        if (key == str[i]) {
            return 1;
        }
    }
    
    return 0;
}

