//
//  main.c
//  02-指向函数的指针练习
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

void upper(char *p);
void change(char *str, void (*up)(char*));
int main(int argc, const char * argv[])
{
    /*
     1.从键盘输入一句英文句子,单词之间用空格隔开,
     将其中所有的单词首字母转换成大写,用回调函数实现
     */
//    1.提示用户输入一句英文,单词之间用空格隔开
    printf("输入一句英文,单词之间用空格隔开\n");
//    2.接收用户输入的英文
//    char *container;
    char container[100];
    gets(container);
//    3.转换句子
    
//    char c = 'a';
//    upper(&c);
//    printf("c = %c\n", c);
    
//    char str[100] = " lnj cool";
    printf("转换前:%s\n", container);
//    change(str);
    change(container, upper);
    printf("转换后:%s\n", container);
    
    return 0;
}

void upper(char *p)
{
//    1.取出p指向存储空间的值
    char temp = *p;
//    2.转换为大写
    if (temp >= 'a' && temp <= 'z') {
        temp = temp - ('a' - 'A');
    }
//    3.赋值会指向的存储空间
    *p = temp;
}

// 在C语言中用到回调函数就想到指向函数的指针
//   void (*up)(char*)
void change(char *str, void (*up)(char*))
{
    (*up)(str);
//    1.把单词首字母转换为大写
    while (*str != '\0') {
//        如果是空格就取出下一个元素转换为大写
        if (*str == ' ') {
            str++;//移动到下一个元素
//            up(str);
            (*up)(str);
        }else{
            str++;
        }
    }
}

