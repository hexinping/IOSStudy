//
//  main.c
//  04-while练习2
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    1.获取1～100之间 7的倍数的个数并打印，并统计个数
    
//    经过分析，要获取1～100之间7的倍数，应该取出1～100之间的每一个值进行判断，满足就输出并统计
    
    int count = 1;
    int nubmer = 0;
    while (count <= 100) {
        
        if (count % 7 == 0) {
            
            printf("count = %d\n", count);
            nubmer++;//计数器思想
//            利用循环的形式来记录每次变化的值
//            使用场景：当遇到要求在什么什么里有多少个什么的时候立刻想到计数器思想
        }
        count++;
    }
    
    printf("number = %d\n", nubmer);
    
    return 0;
}

