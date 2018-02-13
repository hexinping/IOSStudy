//
//  main.m
//  06-NSString
//
//  Created by apple on 14-3-4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <string.h>

int main(int argc, const char * argv[])
{

//    NSString 是一个类
//    1.创建简单的字符串对象
    NSString *str = @"abc";
//    %@专门用来输出对象的
    NSLog(@"%@", str);
    
//    char *name = "lnj";
//    printf("%s", name);
    
    
    int age = 10;
    float height = 1.75;
//    @"age = 10, height = 1.75";
    NSString *str2 = [NSString stringWithFormat:@"age = %d, height = %.2f", age, height];
    NSLog(@"%@", str2);
    
//    C语言计算的是字符数
//    char *ss = "123霸气";
//    int len = strlen(ss);
//    printf("len = %d\n", len);
    
//    OC中计算的是字数
//    NSString *str3 = @"123霸气";
//    int length = [str3 length];
//    NSLog(@"length = %d", length);
    
    
//    NSString *str4 =@"高端大气上档次";
//    NSLog(@"%@", str4);
    
    char *str5 = "高端大气上档次";
    NSLog(@"%s", str5);
    
    NSLog(@"123");
    
    return 0;
}

