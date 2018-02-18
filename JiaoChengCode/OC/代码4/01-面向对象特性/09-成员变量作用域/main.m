//
//  main.m
//  09-成员变量作用域
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "Girl.h"

int main(int argc, const char * argv[])
{

//    Person   *p = [Person new];
//    当是public的是可以在其它文件中直接访问
//    p->_age = 20;
//    NSLog(@"age = %d", p->_age);
    
//    当是private的时候,在其它文件中不能直接访问
//    p->_weight = 50;
    
//    当是protected的时候,在其它文件中不能直接访问
//    p->_height = 1.75;
    
//    p->_no = 44;
//    [p test];
    
    
    Girl *g = [Girl new];
    [g test];
    return 0;
}

