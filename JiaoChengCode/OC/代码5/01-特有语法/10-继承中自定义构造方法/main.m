//
//  main.m
//  10-继承中自定义构造方法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "Student.h"

int main(int argc, const char * argv[])
{

//    Person *p = [[Person alloc]init];
//    [p infomation];
    
//    Person *p = [[Person alloc]initWithAge:23];
//    [p infomation];
//    
//    Student *stu = [[Student alloc]initWithAge:44];
//    [stu infomation];
    
    Student *stu2 = [[Student alloc]initWithAge:68 andName:@"oooxxx"];
    [stu2 infomation];
    
    return 0;
}

