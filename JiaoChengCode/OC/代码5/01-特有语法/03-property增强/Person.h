//
//  Person.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
//    如果没有写成员变量,property会自动帮我们生成一个下划线开头的成员变量
//    @public
//    int _age;// 年龄
//    int age;
    
    @public
    int _no;
    
    @protected
    int _value;
    
    @private
    int _number;
}

/*
 xcode4.4以后property做了增强
 > 帮助我们自动生成get/set方法的声明
 > 帮助我们自动生成get/set方法的实现
 > 如果没有手动声明成员变量,perperty会在.m文件中自动帮我们生成一个_开头的成员变量
 
 >注意点:如果想让子类继承父类的成员变量,还是必须在.h中手动写成员变量
 */
@property int age;
/*
 - (void)setAge:(int)age;
 - (int)age;
 */

- (void)personInfomation;
@end
