//
//  main.c
//  13-总结
//
//  Created by apple on 14-2-21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
// 当条件满足就会重复执行循环体，直到条件不满足为止
 while (条件表达式)
 {
    语句；
    ...
 }
 
 
// 无论条件是否满足都会执行一次循环体
 do
 {
     语句；
     ...
 }while(条件表达式);//分好必须写
 
 
// 开发中一般都是用for循环，因为可以优化内存 灵活性强
 for (初始化表达式; 条件表达式; 循环后操作表达式)
 {
     语句；
     ...
 }
 
 
 continue;
 使用场合：
 while
 dowhile
 for
 作用：
 跳过本次循环进入下一次循环
 注意点：continue写在哪个循环里面就对哪个循环有效，也就是就近原则
 
 break;
 使用场合：
 switch
 while
 dowhile
 for
 作用：在switch里面用来结束switch语句，在循环结构里面用来结束循环语句
 注意点：就近原则，写在哪个循环里面就对哪个循环有效
 
 共同注意点：
 当continue和break单独存在的时候后面不可以写任何语句，因为都执行不到
 */
int main(int argc, const char * argv[])
{

//    for (int i =0; i < 3; i++) {
//        for (int j = 0; j < 2; j++) {
//            if (j == 0) {
//                continue;
//            }
//            printf("ok\n");
//        }
//    }
    
    /*
    for (int i =0; i < 3; i++) {
        
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                break;//就近原则，写在哪个循环里面就对哪个循环有效
            }
            printf("ok\n");
        }
        
    }
     */
    
//    for (int i = 0; i < 3; i++) {
//        continue;
//        printf("ok\n");
//    }
    
    for (int i = 0; i < 3; i++) {
        break;
        printf("ok\n");
    }
    
    
    
    
    
    printf("运行结束\n");
    return 0;
}

