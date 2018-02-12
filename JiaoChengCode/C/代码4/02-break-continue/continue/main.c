//
//  main.c
//  continue
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

/*
 1.continue
 跳过本次循环,直接进入下一次条件判断
 
 2.break
 
 */
#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
//    每转3圈跳过一次，也就是说当转到第三圈和三的倍数的时候就跳过
    int count = 0;
    while (count < 10) {
        
        count++;
//        if (count % 3 != 0) {
//            printf("转圈 %d\n", count);
//        }
        
        if (count % 3 == 0) {
            continue;//跳过本次循环
        }
        printf("转圈 %d\n", count);
        
    }
     */
    
//    switch (10) {
//        case 10:
//            printf("10\n");
//            break;//结束switch语句
//            
//        default:
//            printf("other\n");
//            break;
//    }
    
//    要求转5圈头晕了，休息不转了
    /*
     break只对 swithc 和 循环结构有效
     */
    int count = 0;
    while (count < 10) {
        
        count++;
        if (count == 5) {
            break;//结束循环
        }
        printf("转圈 %d\n", count);
        
    }
    
    return 0;
}

