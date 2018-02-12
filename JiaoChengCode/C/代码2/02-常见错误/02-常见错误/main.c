//
//  main.c
//  02-常见错误
//
//  Created by apple on 14-2-16.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


/*
 1.书写函数函数名称后面必须由（）
 例如： main()
 错误写法 main
 
 2.一个程序只能由一个main函数
 
 3.在程序中除了“”里面可以写中文以外其他地方都不能出现中文
 
 4.以后开发中函数（暂时）都写在main函数前面，如果写在后面报C99标准不支持警告
 
 5.printf函数里面只能写双引号括起来的内容
 *错误：printf('Hello World');
 *注意双引号不要写成一个中文一个英文
 
 */

//（）是函数的标识
int main()
{
    
    printf("Hello World");
    
//    编译器是不能识别中文符号以及中文
//    在编写代码的适合除了在 “”里面可以出现中文其他任何地方都不能出现中文
//    printf("程冠希");

//    有警告大部分情况下是可以生成并运行程序，
//    由错误不能生成可执行程序
//    call();
    return 0;
}
// 程序中只能由一个main函数
//int main()
//{
//    return 0;
//}

// 如果把该函数放到main函数后面会报警告，但是同样可以运行
int call()
{
    return 0;
}