//
//  main.c
//  07-指针和字符串
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
//    4.输入字符串
    char name[15];
    printf("请输入一个字符串\n");
//    %s会一个一个从输入缓冲区中取字符放到数组中,并且当遇到\n 空格的时候就会转换为\0结束接收
//    scanf("%s", name);
//    gets(name);

    
    printf("name = %s\n", name);
    
    
    return 0;
}


void test1()
{
    //    2.字符串数组
    
    int ages[5];
    char names[5];
    double ds[5];
    
    
    char name[2][5] ={
        {'l', 'n', 'j', 'x', 'b'},
        {'l', 'n', 'j', 'x', 'b'}
    };
    
    //    定义了一个叫做name2的数组,这个数组将来可以存放2个拥有5个元素的一维数组
    char name2[2][5] = {
        "lnjnb",
        "lmjnb"
    };
    
    //    定义了一个叫做name3的数组,这个数组中将来可以存放2个char *类型的数据
    char *name3[2] = {
        "lnjnb",
        "lmjnb"
    };
    
    printf("%s\n", name3[1]);
}

void test()
{
    //    int a;
    //    a = 10;
    
    //    double d;
    //    d = 10.1;
    
    //    可变字符串
    char name[4] = "lnj";// 'l' + 'n' + 'j' + '\0'
    char name5[] = "lnj";
    printf("name =%p\n", name);
    printf("name5 =%p\n", name5);
    
    
    //    不可变字符,存储在常量区中,无论定义多少个字符串都是返回同一个字符串
    char *name2 = "lnj";
    char *name3 = "lnj";
    
    //    printf("name2 =%p\n", name2);
    //    printf("name3 =%p\n", name3);
    
    //    2.区别
    //    name[1] = 'M';
    //    printf("name = %s", name);
    
    //    name2[1] = 'W';
    printf("name2 = %s", name2);
    
    
    //    printf("name2 = %c\n", *name2);
    /*
     
     定义字符串的两种方式:
     1.利用数组
     char name[10] = "xz";
     特点:字符串里面的内容是可以修改的
     应用场景:当字符串的内容需要经常修改的时候就用数组
     
     2.利用指针
     char *name = "lf";
     特点:字符串里面的内容不可以修改
     应用场景:当字符串不需要修改的时候就用指针,可以优化内存空间
     */
    
    for (int i = 0 ; i < 999; i++) {
        //         char name[10] = "xz";
        char *name = "lf";
    }
}
