//
//  main.m
//  06-id类型
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{
//    Person *p = [Person new];
//    [p setAge:20];
//    NSLog(@"age = %d", [p age]);
    
    /*
//    多态
    NSObject *p1 = [Person new];
//    [p1 setAge:33];
//    写给编译器看的
    Person *p2 = (Person *)p1;
    [p2 setAge:33];
    NSLog(@"age = %d", [p2 age]);
    */
//      id == NSObject *
//    id的本质: typedef struct objc_object *id;
//    如果用id类型接收一个对象,调用对象特有方法不用进行强制类型转换
//    id 是一个万能指针,可以用来指向任何对象, 注意id后面不要加*
    id p3 = [Person new];
    [p3 setAge:44];
    NSLog(@"age = %d", [p3 age]);
    
//    double double
//    id _id ID
    
    return 0;
}

