//
//  main.c
//  01-练习讲解
//
//  Created by apple on 14-2-18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
     想输出几位小数位数就在%和F之间加入.N,N就是输出几位
//    float double 默认情况下通过%f 输出只保留6位小数
    float v1 = 1.75;//单精度
    printf("%.8f\n", v1);
    double v2 = 1.85;//双精度
    printf("%lf\n",v2);
     */
    
    /*
     2.修饰符
     %0Nd N是以多宽来输出整形，如果不够用0补齐左边， （右对齐）
     
     %Nd N是以多宽来输出整形, 如果不够用空格补齐左边，（右对齐）
     %-Nd  N是以多宽来输出整形,如果不够用空格补齐右边，（左对齐）
     */
//    int number = 1;
//    printf("%-5d", number);
    
    /*
    int b;
    int a = 30;
    b = a;
    a = 55;
    printf("a = %d , b = %d", a, b);
     */
    /*
    int a;
    a = 30;// 断点快捷键 command + \
    printf("a = %d\n",a);
     */
    return 0;
}

