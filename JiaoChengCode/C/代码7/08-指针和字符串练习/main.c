//
//  main.c
//  08-指针和字符串练习
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int myStrlen(char array[]);
int myStrlen2(char *array);
int myStrlen3(char *array);
int main(int argc, const char * argv[])
{

//    实现strlen功能
//    char *name = "lnj";
//    int length = strlen(name);
//    printf("length = %d\n", length);
    
    char name[4] = "lnj";
//    int length = myStrlen(name);
//    int length = myStrlen2(name);
    int length = myStrlen3(name);
    printf("length = %d\n", length);
    return 0;
}

int myStrlen(char array[])
{
//    1.定义变量记录个数
    int len = 0;
//    2.遍历数组循环判断是否是\0
    while (array[len] != '\0') {
        len++;
    }
    return len;
}

/*
int myStrlen2(char *array)//char *array = name
{
//    1.定义变量记录个数
    int len = 0;
    while (*array != '\0') {
//        array++;
//        array += 1;
        array = array + 1;
        len++;
        
    }
    return len;
}
 */

int myStrlen2(char *array)// char *arrary = name
{
    //    1.定义变量记录个数
    int len = 0;
    while (*array) {//因为如果*array取出来是\0 就是0 0代表假所以可以省略!='\0'
        array = array + 1;
        len++;
    }
    return len;
}

//"lnj"
int myStrlen3(char *array)
{
    char *start;//ffc0
    start = array;
    while (*array++) ;
//    printf("到结尾了\n");
//    array = ffc4
    return (int)(array - start - 1);// ffc4 - ffc0 - 1  = 3;
}
