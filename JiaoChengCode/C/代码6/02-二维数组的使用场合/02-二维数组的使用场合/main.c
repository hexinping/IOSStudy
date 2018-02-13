//
//  main.c
//  02-二维数组的使用场合
//
//  Created by apple on 14-2-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


void printMap(char map[][6], int row, int col);
int main(int argc, const char * argv[])
{


    /*
     超级无敌迷你小迷宫
     O代表一个人
     #代表一堵墙
     
     ######
     #O #
     # ## #
     #  # #
     ##   #
     ######
     
     */
    
    
//    1.保存迷宫 友情提示（二维数组）
    char map[6][6] = {
//        0    1    2    3    4    5
        {'#', '#', '#', '#', '#', '#'},//0
        {'#', 'O', ' ', '#', ' ', ' '},//1
        {'#' ,' ', '#', '#', ' ', '#'},
        {'#',' ' , ' ', '#', ' ', '#'},
        {'#', '#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#'}
    };
    
//    2.打印迷宫 友情提示（遍历数组）
//    for (int i = 0; i < 6; i++) {
//        for (int j = 0; j < 6; j++) {
//            printf("%c", map[i][j]);
//        }
//        printf("\n");
//    }
    
//    2.1.动态计算行数列数
//    2.1.1动态计算行数
    int row = (sizeof(map)/sizeof(char))/(sizeof(map[0])/sizeof(char));
//    2.1.2动态计算列数
    int col = sizeof(map[0])/sizeof(char);
//    2.1.3打印地图
    printMap(map, row, col);
    
//    3.控制小人运动
//    windows中使用getch() 不用按下回车就可以接收
//    3.1接收用户输入  友情提示  （scanf或者getchar）
//    3.2根据用户输入让O走  友情提示 （if或者switch）
//    3.2.1经过分析要判断下面一步是不是#首先要知道自己的位置
    int startX = 1;//小人的起始位置
    int startY = 1;
    
//    3.2.2定义变量记录出口的位置
    int endX = 1;
    int endY = 5;
    
//    4.循环接收用户输入操作
    while (map[endX][endY] != 'O') {
        
        //    w向上  s向下 a向左 d向右
        char ch;// s \n
        ch = getchar();//getchar 返回用户输入的字符
        getchar();//作用取走输入缓冲区中的\n
        
//        5.根据用户输入的操作更改小人位置
        switch (ch) {
            case 's':// 向下走
                //    3.2.2判断要走的下一步是不是#号
                if (map[startX + 1][startY] != '#') {
                    //        1.替换当前位置为空格
                    map[startX][startY] = ' ';
                    startX++;
                    //        2.替换下一步为O号
                    map[startX][startY] = 'O';
                }
                break;
            case 'w':// 向上走
                if (map[startX - 1][startY] != '#') {
                    //        1.替换当前位置为空格
                    map[startX][startY] = ' ';
                    startX--;
                    //        2.替换下一步为O号
                    map[startX][startY] = 'O';
                }
                break;
            case 'a':// 向左走
                if (map[startX][startY - 1] != '#') {
                    //        1.替换当前位置为空格
                    map[startX][startY] = ' ';
                    startY--;
                    //        2.替换下一步为O号
                    map[startX][startY] = 'O';
                }
                break;
            case 'd':// 向右走
                if (map[startX][startY + 1] != '#') {
                    //        1.替换当前位置为空格
                    map[startX][startY] = ' ';
                    startY++;
                    //        2.替换下一步为O号
                    map[startX][startY] = 'O';
                }
                break;
            default:
                break;
        }

        
        //    4.打印迷宫 友情提示（遍历数组）
//        for (int i = 0; i < 6; i++) {
//            for (int j = 0; j < 6; j++) {
//                printf("%c", map[i][j]);
//            }
//            printf("\n");
//        }
        
        printMap(map, row, col);
    }
    
//    6.游戏结束
    printf("你真的好NB哦···！！！\n");
    printf("想超越自己请购买付费版本\n");
    
    
    return 0;
}

/**
 *  打印地图
 *
 *  @param map 地图数据
 *  @param row 有多少行
 *  @param col 有多少列
 */
void printMap(char map[][6], int row, int col)
{
    //    4.打印迷宫 友情提示（遍历数组）
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}




void test()
{
    /*
     蓝色 1
     深蓝 2
     红色 3
     黄色 4
     灰色 5
     */
    
    int els[5][5] = {
        {1, 5, 5, 5, 5},
        {1, 1, 5, 2, 5},
        {3, 1, 2, 2, 2},
        {3, 4, 4, 4, 4},
        {3, 4, 4, 4, 4}
    };
    
    
    /*
     0 没有下棋
     1 黑棋
     2 白棋
     */
    int wzq[2][6] = {
        {0, 0, 0, 0, 1, 1},
        {0, 2, 0, 0, 2, 0}
    };
    //
    //    printf("%lu\n", (sizeof(wzq)/sizeof(int))/(sizeof(wzq[0])/sizeof(int)));
    //    printf("%lu\n", sizeof(wzq[0])/sizeof(int));
    
}









