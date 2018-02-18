//
//  main.m
//  02-练习讲解2
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 3.设计一个”学生“类
 1> 属性
 * 姓名
 * 生日
 */

typedef struct
{
    int year;
    int month;
    int day;
}MyDate;

@interface Student : NSObject
{
    @public
    NSString *_name;// 姓名
    MyDate _birthDay;// 生日
}

@end

@implementation Student

@end
int main(int argc, const char * argv[])
{

//    1.分配存储空间, 2初始化成员变量, 3返回地址
    Student *stu = [Student new];
    stu->_name = @"rousi";
//    重点问题
//    stu->_birthDay = {2013, 1, 5};
//    stu->_birthDay.year = 2013;
//    stu->_birthDay.month = 1;
//    stu->_birthDay.day = 5;
    
    MyDate dd =  {2013, 1, 5};
    stu->_birthDay = dd;
    
    NSLog(@"name = %@, year = %d, month = %d, day = %d", stu->_name, stu->_birthDay.year, stu->_birthDay.month, stu->_birthDay.day);
    
    return 0;
}

