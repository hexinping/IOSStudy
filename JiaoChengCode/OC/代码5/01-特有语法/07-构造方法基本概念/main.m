//
//  main.m
//  07-构造方法基本概念
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{
    /*
     > 开辟存储空间  +alloc //用来开辟存储空间,会返回一个没有初始化的对象
     > 初始化成员变量 -init // 对对象中的成员变量进行初始化,返回一个初始化后的对象
     > 返回地址
     */
//    [Person new];
    
    // 开辟存储空间,会返回一个没有初始化的对象
    Person *p1 = [Person alloc];
    // 对对象中的成员变量进行初始化,返回一个初始化后的对象
    Person *p2 = [p1 init];
    
//    [p2 setAge:23];
//    NSLog(@"age = %d", [p2 age]);
//    开发中常用写法
//    如果想让对象一出生它的某些属性就是一些固定的值,我们可以重写init方法
    Person *p3 = [[Person alloc] init];
//    [p3 setAge:18];
    NSLog(@"age = %d", [p3 age]);
    
    Person *p4 = [[Person alloc]init];
//    [p4 setAge:18];
    NSLog(@"age = %d", [p4 age]);
    
    return 0;
}

