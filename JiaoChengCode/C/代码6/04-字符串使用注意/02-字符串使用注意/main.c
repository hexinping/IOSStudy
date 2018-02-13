//
//  main.c
//  02-字符串使用注意
//
//  Created by apple on 14-2-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int myStrlen(char name[], int count);
int myStrlen2(char name[]);
int main(int argc, const char * argv[])
{

    /*
     使用注意：
    char name[] = "cool";
    char name2[] = {'l', 'n', 'j'};
    
    
//    
//    %s的本质就是根据传入的name的地址逐个去取数组中的元素然后输出，直到遇到\0位置
//    printf("name = %s\n", name);
//    没有\0就不是字符串
    printf("name2 = %s\n", name2);//发生了脏读
     */
    
    
//    可以用来计算字符串的长度
//    char name[] = "lee";//一个汉字占3个字节
//    int size = sizeof(name);
//    printf("name size = %d\n", size);
    /*
     strlen：
     作用：计算字符串的长度，计算的也是字符数
     计算的结果不包括\0
     原理：就是逐个取出字符串中的内容，如果是不\0就+1
     */
    
//    char name[] = "cool";
//    char name2[] = {'l', 'n', 'j'};
//    int length = strlen(name2);
//    printf("name length = %d\n", length);
    
//    要求自己定义一个函数用于计算字符串的长度
    
//    char name[] = "cool cocoa";
//    int length = sizeof(name)/sizeof(char);
//    int result = myStrlen(name, length);
//    int result = myStrlen2(name);
//    printf("result = %d\n", result);
    
    
//    char name[] = "c\0P12";  //因为\是转义字符，它会把后面的数组全部
//    char name2[] = {'l', 'n', 'j'};
//    size_t len = strlen(name2);
//    printf("len = %lu\n", len);
    
    return 0;
}


/**
 *  自定义方法计算字符串的长度
 *
 *  @param name 需要计算的字符串
 *
 *  @return 不包含\0的长度
 */
int myStrlen2(char str[])
{
    //    1.定义变量保存字符串的长度
    int length = 0;
    while (str[length] != '\0')
    {
        length++;//1 2 3 4
    }
    return length;
}
/**
 *  自定义方法计算字符串的长度
 *
 *  @param name  需要计算的字符串
 *  @param count 字符串的总长度
 *
 *  @return 不包含\0的长度
 */
int myStrlen(char str[], int count)
{
//    1.定义变量保存字符串的长度
    int length = 0;
//    2.通过遍历取出字符串中的所有字符逐个比较
    for (int i = 0; i < count; i++) {
//        3.判断是否是字符串结尾
        if (str[i] == '\0') {
            return length;
        }
        length++;
    }
    return length;
}

