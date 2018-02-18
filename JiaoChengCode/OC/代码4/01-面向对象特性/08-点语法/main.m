//
//  main.m
//  08-点语法
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Girl.h"

int main(int argc, const char * argv[])
{

    Girl *g = [Girl new];
//    直接给成员变量赋值
//    g->_age = 12;
//    g->_name = @"猪立叶";
//    g->_tel = @"13888888888";
//    
//    NSLog(@"age = %d", g->_age);
    
//    间接赋值
//    [g setAge:22];
//    [g setName:@"王老吉"];
//    [g setTel:@"13812346577"];
//    NSLog(@"age = %d", [g age]);
    
//    利用点语法
//    g.age = 23;
//    g.age == [g setAge:23];
//    其实点语法就是调用set发放,编译器在编译的时候会自动转换为set方法
//    g.name = @"加多宝";
//    g.tel = @"123456789";
//    NSLog(@"age = %d", g.age);// [g age];
    
//
//    NSLog(@"%@", g);
    
//    只用点语法来设置属性,和获得属性值
//    g.test;
    
    return 0;
}

