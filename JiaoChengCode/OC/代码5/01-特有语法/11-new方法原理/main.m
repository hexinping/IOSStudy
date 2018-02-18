//
//  main.m
//  11-new方法原理
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "Student.h"

int main(int argc, const char * argv[])
{
    /*
     > 开辟存储空间
     > 初始化成员变量
     > 返回地址
     */
//    Person *p = [Person new];
//    Person *p2 = [[Person alloc]init];
    
    /*
    Person *p3 = [Person person];
    [p3 setAge:55];
    NSLog(@"age = %d", [p3 age]);

    Person *p4 = [Person personWithAge:77];
    NSLog(@"age = %d", [p4 age]);
    */
    
    /*
//    Student *stu = [[Person alloc]init]; //[Student person];
     Student *stu = [Student person];
//    [stu setAge:77];
    
//     -[Person setName:]: unrecognized selector sent to instance
//     OC是在运行时动态的检查它的真实类型
     
    [stu setName:@"jack"];
    NSLog(@"name = %@", [stu name]);
    */
    
    Student *stu2 = [Student personWithAge:33];
    [stu2 setName:@"tuhao"];
    NSLog(@"age = %d", [stu2 age]);
     NSLog(@"name = %@", [stu2 name]);
    return 0;
}

