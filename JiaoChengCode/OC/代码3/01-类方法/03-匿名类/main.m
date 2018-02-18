//
//  main.m
//  03-匿名类
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iphone.h"
#import "Person.h"

int main(int argc, const char * argv[])
{
//  1.开辟存储空间, 2.初始化成员变量, 3,返回地址
//    Iphone *ip = [Iphone new];//有名字的对象  0ffc1
//    ip->_cpu = 4;
//    [ip aboutMyPhone];
//    [Iphone new];//这个是匿名对象
//    
//    [Iphone new]->_cpu = 2;
//    [Iphone new]->_size = 4;
//    [Iphone new]->_weight = 200;
//    [[Iphone new] aboutMyPhone];
    
//    Iphone *ip = [Iphone new];
//    [ip brand];
//    当对象方法只调用一次的时候可以使用匿名对象
//    [[Iphone new] brand];
    
    Person *p = [Person new];
    
//    Iphone *ip = [Iphone new];
//    [p sendSignal:ip];
//    匿名对象可以作为实参传递
    [p sendSignal:[Iphone new]];
    
    return 0;
}

