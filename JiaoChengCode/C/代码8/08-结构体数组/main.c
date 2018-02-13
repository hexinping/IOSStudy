//
//  main.c
//  08-结构体数组
//
//  Created by apple on 14-3-1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    
    struct Kpi
    {
        int number;//员工号
        char *name;//员工姓名
        char *bumen;//
    };
    
//    struct Kpi p1 = {1001, "张无忌", "c"};
//    p1.name;
    
//    元素类型 数组名[元素个数]
    
    struct Kpi ps[3] =
    {
        {1001, "张无忌", "c"},
        {1002, "吴莫愁", "iOS"},
        {1003, "李莫愁", "php"}
    };
    
//    printf("%d, %s, %s\n", ps[0].number, ps[0].name, ps[0].bumen);
    
//    for (int i = 0; i < 3; i++) {
//        printf("%d, %s, %s\n", ps[i].number, ps[i].name, ps[i].bumen);
//    }
    
//    注意点:
//    结构体数组只能在定义的时候初始化
    struct Kpi persons[3];
//    persons[0] = {1001, "张无忌", "c"};
    persons[0].number = 1001;
    persons[0].name = "独孤求败";
    persons[0].bumen = "net";
    
//    要想给结构体一次性赋值只能在定义结构体变量的同时
//    要向给数组一次性赋值只能在定义数组的同时
//    struct Kpi p;
//    p = {1001, "张无忌", "c"};
//
//    int ages[3] = {};
//    for (int i = 0; i < 3; i++) {
//        printf("ages[%d] = %d\n", i, ages[i]);
//    }
    
//    int ages[3];
//    ages = {1, 3, 5};
    return 0;
}

