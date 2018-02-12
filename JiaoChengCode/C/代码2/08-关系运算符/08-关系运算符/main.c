//
//  main.c
//  08-关系运算符
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
//    注意：在真实开发中如果由过多的运算符 明确使用（）来表示先算哪一个
//    int result = 3 > 4 + 7;
//    int result = (3>4) + 7;
//    int result = 5 != 4 + 2 * 7 > 3 == 10;
//    printf("result = %d\n", result);


    return 0;
}

int test1()
{
    //    int a = 33;
    //    int b = 55;
    //    注意：关系运算符是有优先级的，
    //    == ！= 相同 其它的几个相同，并且== ！=的优先级小于其它几个
    //    int result = 3 == (3 >= 1);
    //    关系运算符的结合方向是从左至右
    //    int result = 3 > 2 > 1;
    //    printf("result = %d\n", result);
    return 0;
}

int test()
{
//    关系运算符的结果只有两种 要么0 要么1
    int a = 33;
    int b = 55;
    int result = b > a;//吗？  0假、 1真
    printf("result = %d\n", result);
    return 0;
}
