//
//  main.c
//  09-typedef注意点
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

typedef int MyInt;
#define kMyInt int

// 如果要用其它的名称来标识一个现有的类型,用typedef 不要用#define
typedef char * String;
#define kString char *

int main(int argc, const char * argv[])
{
    /*
    int a = 10;
    MyInt b = 20;
    
    kMyInt c = 30;
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    */
    
    /*
    char *name = "lee";
    String name2 = "iverson";
    kString name3 = "jackson";
    
    printf("name = %s\nnaem2 = %s\nname3 = %s\n", name, name2, name3);
    */
    
    String c1, c2; // == int a, b; == char *a, char *b;
    kString b1, b2;//char *b1, char b2;
    
//    c1 = "lee";
//    c2 = "jordan";
//    printf("%s - %s\n", c1, c2);
    
    b1 = "lee";
    b2 = 'a';
    printf("%s - %c\n", b1, b2);
    
    
    
    return 0;
}

