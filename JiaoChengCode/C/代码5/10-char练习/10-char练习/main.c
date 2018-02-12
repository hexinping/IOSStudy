//
//  main.c
//  10-char练习
//
//  Created by apple on 14-2-23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

char lower(char myC)
{
    if (myC >= 'A' && myC <= 'Z') {
//        return myC + 32;
        return myC + ('a' - 'A');
    }
        return myC;
   
    
}
void printBinary(int num);
int main(int argc, const char * argv[])
{

//    2. %o %x 二进制？
    /*
      0000 0000 0000 0000 0000 0000 0000 0000
     
      0000 0000 0000 0000 0000 0000 0000 1001
      0000 0000 0000 0000 0000 0000 0000 1001
     &0000 0000 0000 0000 0000 0000 0000 0001
     ————————————————————————————————————————————
      0000 0000 0000 0000 0000 0000 0000 0000
     */
    int num = 13;
    printBinary(num);
    
    return 0;
}

void printBinary(int num)
{
//    1.定义变量记录要右移的位数
//    int temp = 32 - 1;
//    int temp = (sizeof(num) * 8) - 1;
    int temp = (sizeof(num) << 3) - 1;
    
    while (temp >= 0) {
//        现右移temp位，然后取出该位对应的值
        int value = (num >> temp) & 1;
        printf("%d", value);
//        没输出4次空一格
        if (temp % 4 == 0) {
            printf(" ");
        }
        temp--;
    }
    printf("\n");
    
}

void test()
{
    //    1.定义一个函数（不管大小写）当外界传入一个字符的时候，转换为小写字符 返回。
    //    小江江友情提示：注意观察表的规律
    
    //    1.提示用户输入一个字符
    printf("请输入一个字符\n");
    //    2.定义变量保存用户输入的字符
    char temp;
    //    3.接收用户输入的字符
    scanf("%c", &temp);
    //    4.调用函数转换字符
    char result = lower(temp);
    //    5.输出转换后的结果
    printf("result = %c\n", result);
}

