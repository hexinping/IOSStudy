//
//  main.c
//  04-文件包含
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
//.h文件不会参与编译,仅仅是用来被拷贝
#include "gaonan.h"


int main(int argc, const char * argv[])
{
    int result = sum(10, 20);
    printf("result = %d\n", result);
    
//#include "abc.txt"
    
    return 0;
}

