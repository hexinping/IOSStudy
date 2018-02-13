//
//  main.c
//  02-带参数的宏定义
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
int sum(int val1, int val2)
{
    return val1 + val2;
}
 */
/*
初学者注意:
 >()里面的参数不需要写参数类型
 >()和后面的替换的格式之间一定要有空格
 >预处理指令后面都不需要加分好
 >宏定义的效率比函数高,使用场合:如果做一些比较简单的运算用宏定义,比较复杂的运算还是用函数
*/
#define SUM(v1, v2) (v1+v2)

#define PF(v) ((v)*(v))

int main(int argc, const char * argv[])
{

    /*
     1.基本概念
//    int a = 10;
//    int b = 20;
//    int c = sum(a , b);
    
//          SUM(v1, v2)  a + b
//    int c = SUM(a, b);
//    printf("c = %d\n", c);
    */
    
//    SUM(v1, v2) (5 + 3) * (6 + 1)
//    int c = SUM(5, 3) * SUM(6, 1);
//    printf("c = %d\n", c);
    
//   PF(v) ((10)*(10))/((4)*(4))
    int c = PF(5 + 5)/PF(2 + 2);
    printf("c = %d\n", c);
    
    
    return 0;
}

