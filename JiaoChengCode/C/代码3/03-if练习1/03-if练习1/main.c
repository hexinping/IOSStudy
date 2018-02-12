//
//  main.c
//  03-if练习1
//
//  Created by apple on 14-2-19.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    /*
    
     2.接收用户输入的一个整数month代表月份，根据月份输出对应的季节
     春季：3、4、5
     夏季： 6、7、8
     秋季： 9、10、11
     冬季： 12、1、2
     */

//    1.提示用户输入月份
    printf("请输入对应的月份\n");
//    2.接收用户输入的月份
    int month = -1;
    scanf("%d", &month);
//    3.根据用户输入的月份输出对应的季节
    /*
    if (month >=3 && month <=5) {
        printf("男人恐怖的季节\n");
    }else if (month >=6 && month <=8)
    {
        printf("男人喜欢的季节\n");
    }else if (month >=9 && month <=11)
    {
        printf("穿秋裤的季节\n");
    }else if (month == 12 || month == 1 || month == 2)
    {
        printf("穿棉裤的季节\n");
    }else
    {
        printf("SB\n");
    }
     */
    /*
    if (month > 12 || month < 1) {
        printf("SB\n");
    }else if (month >=3 && month <=5) {
        printf("男人恐怖的季节\n");
    }else if (month >=6 && month <=8)
    {
        printf("男人喜欢的季节\n");
    }else if (month >=9 && month <=11)
    {
        printf("穿秋裤的季节\n");
    }else
    {
        printf("穿棉裤的季节\n");
    }
     */

    
    return 0;
}


int test()
{
//    1.接收用户输入的1 ～7 的整数，根据用户输入的整数，输出对应的星期几
    //    1.提示用户输入整数
    printf("请输入星期几\n");
    //    2.接收用户输入的整数
    int day;
    scanf("%d", &day);
    //    3.判断用户输入的整数输出对应的星期
    
    //    3.1屌丝做法
    /*
     if (1 == day) {
     printf("星期1\n");
     }
     if (2 == day) {
     printf("星期2\n");
     }
     if (3 == day) {
     printf("星期3\n");
     }
     if (4 == day) {
     printf("星期4\n");
     }
     if (5 == day) {
     printf("星期5\n");
     }
     if (6 == day) {
     printf("星期6\n");
     }
     if (7 == day) {
     printf("星期7\n");
     }
     */
    /*
     //    3.2高帅富做法
     if (1 == day) {
     printf("星期1\n");
     }else if (2 == day) {
     printf("星期2\n");
     }else if (3 == day) {
     printf("星期3\n");
     }else if (4 == day) {
     printf("星期4\n");
     }else if (5 == day) {
     printf("星期5\n");
     }else if (6 == day) {
     printf("星期6\n");
     }else if (7 == day) {
     printf("星期7\n");
     }
     
     printf("输出完毕\n");
     */
    return 0;
}
