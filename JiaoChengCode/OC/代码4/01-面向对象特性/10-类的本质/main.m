//
//  main.m
//  10-类的本质
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "Dog.h"

typedef struct
{
    int year;
    int month;
    int day;
}Date;

int main(int argc, const char * argv[])
{
    
   
//    类的本质其实也是一个类对象
    Person *p = [Person new];
    [p test];
    
//     获取Person类的类对象
//     Class本质:typedef struct objc_class *Class;
    Class cs = [Person class];
    Person *p1 = [cs new];
    [p1 test];
//    无论创建多少个对象都是指向同一个类对象
    Person *p2 = [cs new];

    Dog *d = [Dog new];
    NSLog(@"xxxx");
    
    /*
//     SEL本质: typedef struct objc_selector *SEL;
    SEL s1 = @selector(test);//0x3344
    Person *p = [Person new];
//    [p test];
    [p performSelector:s1];
    
     */

    /*
    Date d1 = {2013, 12, 1};
    NSLog(@"d1 = %p", &d1);
    NSLog(@"year = %p", &d1.year);
    
     Person *p1 = [Person new];
//    p1其实就是isa的地址
     NSLog(@"p1 = %p", p1);// self指向isa isa是指针占用8个字节
    NSLog(@"_age = %p", &p1->_age);//
    
    [p1 test];
    */
    return 0;
}

