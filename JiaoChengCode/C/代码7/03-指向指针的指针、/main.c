//
//  main.c
//  03-指向指针的指针、
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    int i = 10;
//    int *ip = &i;
//    
//    char c = 'a';
//    char *cp = &c;
//    
//    double d = 10.1;
//    double *dp = &d;
//    定义指针诀窍:  拷贝变量类型加一颗星
    int a = 10;
    int *ip;
    ip  = &a;
    
    int **pp;
    pp = &ip;
    
    int ***ppp;
    ppp = &pp;
    
    
//    a = 55;
//    *ip = 100;
    
    
//    *ip == a
//    *pp == ip
//    *(*pp) == *ip
    
    /*
     a = 0x7fff5fbff82c  a==ip
     ip = 0x7fff5fbff82c
     &ip= 0x7fff5fbff820 ip == pp
     pp = 0x7fff5fbff820
     */
//    printf("a = %p\n",&a);
//    printf("ip = %p\n",ip);
//    printf("&ip= %p\n", &ip);
//    printf("pp = %p\n",pp);
    
    **pp = 250;
    
    ***ppp = 444;
     printf("a = %d\n", a);
    
    return 0;
}

