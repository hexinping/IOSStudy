//
//  main.c
//  12-枚举
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
//  0代表女 1代表男
//    如果某一个变量只有固定的几个取值的时候就用枚举
    int gender = 0;//定义变量保存人的性别
    
//    定义枚举变量格式: 枚举类型 枚举变量名;
//    定义枚举类型格式: enum 枚举类型名称{ 取值1,取值2,... };
    
//    1.定义枚举类型, 枚举常量,本质就整型数
    enum Sex
    {
//        枚举类型中的取值是递增1
        Man = 101,// 0
        Woman,// 1
        Yao
    };
//    2.通过枚举类型定义枚举变量
    enum Sex s = Yao;
    
    printf("Man = %d\n", s);
    
    return 0;
}

