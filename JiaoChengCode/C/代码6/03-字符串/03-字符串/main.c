//
//  main.c
//  03-字符串
//
//  Created by apple on 14-2-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    
//    "Hello";//字符串常量
//    printf("Hello, World!\n");
    
//    printf("bruce lee\n");
//    printf("bruce lee\n");
//    printf("bruce lee\n");
//    printf("bruce lee\n");
//    printf("bruce lee\n");
    
//    for (int i = 0; i < 5; i++) {
//         printf("jackson\n");
//    }
    
//    int number = 10;
//    printf("number = %d\n", number);
    
//    "jackson";//字符串是由什么组成的， 字符串是由很多字符组成，字符串里面的字符是有顺序
    
    char name[10] = "jackson \n";
//    %s是打印字符串
//    printf("%s", name);
//    printf("%s", name);
//    printf("%s", name);
    
    
//    字符串的初始化
    char name1[5] = "lee";// 'l' + 'e' + 'e' + '\0'  \0是字符串的结束标志
    //如果通过改方式必须在后面上\0   ，还需知道一点 \0这个字符 的ASCII 0
    char name2[5] = {'l', 'e', 'e', '\0'};
//     这个也是一个数组，因为没有初始化的元素默认值就是0
    char name3[5] = {'l', 'e', 'e'};
    
//    这个不是字符串
    char name4[3] = {'l', 'e', 'e'};
    
    
//    静态初始化
//    int ages[] = {1, 3, 5};
//    char name5[] = "lee";
//    int size = sizeof(name5);
//    printf("size = %d\n", size);
    
//    本质就是数组
    char name6[] = "iverson\n";
//    name6[2] = 'M';
//    printf("%s", name6);
    
//    打印字符串中的每一个字符
    int length = sizeof(name6) / sizeof(char);
    for (int i = 0; i < length - 1; i++) {
        printf("%c\n", name6[i]);
    }
    
    
    
    
    
    return 0;
}

