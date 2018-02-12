//
//  main.c
//  08-if应用
//
//  Created by apple on 14-2-19.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
 石头剪子布
 0 石头、1 剪刀、2 布
 石头剪子布是两个人的游戏
 
 1.用户输入一个整数来代表出拳
 2.通过程序来模拟一个玩家
 
 */
int main(int argc, const char * argv[])
{
    
    
//    int num = arc4random() % 3;
//    arc4random_uniform(x); 会随机生成一个 0～x-1的数
//    int num = arc4random_uniform(3);//随机生成一个0～2的数
//    printf("num = %d\n", num);

//    1.打印石头剪子布的规则
    printf("这是世界上最热门的游戏石头剪子布\n");
    printf(" 0代表石头、1代表剪刀、2代表布\n");
    printf("请输入您的出拳\n");
//    2.定义变量保存用户输入的出拳
    int choose = -1;
//    3.接收用户输入的出拳
    scanf("%d", &choose);
    
//    4.让电脑随机生成一个0～2的数来代表电脑出拳
    int computer = arc4random_uniform(3);
    
//    5.比较用户出拳和电脑出拳
    
    printf("choose = %d, computer = %d\n", choose, computer);
    if ((choose == 0 && computer == 1) ||
        (choose == 1 && computer == 2)||
        (choose == 2 && computer == 0)) {
//        用户赢
        printf("wo kao你太牛逼了！！！\n");
    }else if ((computer == 0 && choose == 1) ||
              (computer == 1 && choose == 2)||
              (computer == 2 && choose == 0))
    {
//        电脑赢
        printf("回家睡觉，别玩了\n");
    }else
    {
//        平局
        printf("平局\n");
    }
//    6.输出比较结果
    
    return 0;
}

