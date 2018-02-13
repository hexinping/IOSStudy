//
//  main.c
//  06-指针与数组
//
//  Created by apple on 14-2-28.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
void printArray(int arrray[]);
int main(int argc, const char * argv[])
{

    
//    3.数组作为函数参数
    int ages[5] = {1, 3, 5, 6, 8};
//    printf("ages = %lu\n", sizeof(ages));
    printArray(&ages[1]);
    
    return 0;
}
//当数组作为函数参数时会自动转换为指针,
//所以通过指针来接收,指针指向了数组的第0个元素
//void printArray(int arrray[])
void printArray(int *array)// int *array = ages;
{
//    printf("size = %lu\n", sizeof(array));
    
    printf("%d\n", *(array+2));
}


void test2()
{
    /*
     int ages[5] = {1, 3, 5, 6, 8};
     int *p;
 //    p = &ages[0];
     p = ages;// p == ages == &ages[0]
 //    printf("%d\n", *p);
 
 //    printf("%d\n", ages[0]);
 //    printf("%d\n", p[0]);
 
 //    访问数组元素的3种方式
 //    1. 数组名[角标];
 //    2. 指针变量名[角标];
 //    3. *(指针变量名 + 角标);
     printf("%d\n", ages[0]);
     printf("%d\n", p[0]);
     printf("%d\n", *(p + 0));
     printf("%d\n", 1[ages]);
     */
    
    /*
     //    指针变量+1到底是+多少,加定义指针变量时的变量类型所占用的字节数
     int i = 10;
     char c = 'a';
     double d = 10.1;
     
     int *ip = &i;
     char *cp = &c;
     double *dp = &d;
     
     //    +4
     printf("ip = %p\n", ip);
     printf("ip + 1 = %p\n", ip + 1);
     
     //    +1
     printf("cp = %p\n", cp);
     printf("cp + 1 = %p\n", cp + 1);
     
     //    +8
     printf("dp = %p\n", dp);
     printf("dp + 1 = %p\n", dp + 1);
     */
}

void test()
{
//    1.通过指针间接遍历数组
    
    int ages[5] = {1, 3, 5, 6, 8};
    int length = sizeof(ages)/ sizeof(int);
//    1.通过普通方式遍历数组
//    for (int i = 0; i < length; i++) {
//        printf("ages[%d] = %d\n", i, ages[i]);
//    }
    
//    定义指针保存数组第0个元素的值
    int *p;
    p = &ages[0];
    
//    int *p1;
//    p1 = &ages[1];
    /*
     ages[0] = 0x7fff5fbff820
     ages[1] = 0x7fff5fbff824
     //     ages[0] 和 ages[1] 之间的地址相差4个字节
     因为ages数组里面存放的都是int类型的元素,所以相差4
     */
//    printf("ages[0] = %p\n", &ages[0]);
//    printf("p = %p\n", p);

//    重点:指针变量+1是加上指针变量类型所占用的字节数
//    printf("p+1 = %p\n", p + 1);
//    printf("ages[1] = %p\n", &ages[1]);
//    printf("p+2 = %p\n", p + 2);
//    printf("%d\n", *p);

//    printf("ages[0] = %d\n", *p);
//    printf("ages[1] = %d\n", *(p+1));
//    printf("ages[1] = %d\n", *(p+1+1));
//    printf("ages[1] = %d\n", *(p+3));
//    printf("ages[1] = %d\n", *(p+4));
    
    
//    2.通过指针方式遍历数组
//    for (int i = 0; i < length; i++) {
//         printf("ages[%d] = %d\n",i, *(p+i));
//    }
    
//    int a = 10;
//    a = a + 1;//11
//    printf("%d\n", *p1);
}
