//
//  main.c
//  03-条件编译
//
//  Created by apple on 14-3-2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//#define kDebug 2
//#define A 1

int main(int argc, const char * argv[])
{
//    int a = 1;
//    if (1 == a) {
//        printf("123\n");
//    }
//    else if (4 == a){
//        printf("456\n");
//    }else{
//        printf("789\n");
//    }
  /*
//    条件编译基本概念
//    当条件满足的编译条件后后面一个条件之间的内容
//#if 1 == A
//    printf("123\n");
//#elif 4 == A
//    printf("456\n");
//#else
//    printf("789\n");
//#endif//结束标识
   */
  
    /*
     真实开发中使用场景
//#if 1 == kDebug
//    
//#define AAA "test"
//
//#else
//
//#define AAA "zhangsan"
    
//#endif

//    printf("%s\n", AAA);
     */
    
//#ifdef A
//    printf("123");
//#endif
    
//#ifndef A
//    printf("123");
//#endif
  
//   如果定义了宏A就编译下面一句
#if defined(A)
    printf("123");
#endif
    
//    如果没有定义宏A就编译下面一句
#if !defined(A)
    printf("456");
#endif
    return 0;
}

