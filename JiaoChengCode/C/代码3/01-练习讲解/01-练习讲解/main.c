//
//  main.c
//  01-练习讲解
//
//  Created by apple on 14-2-19.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int x,y,z;
    x=y=z=0;
    ++x || ++y && ++z;
    printf("%d,%d,%d",x,y,z);
    return 0;
}

