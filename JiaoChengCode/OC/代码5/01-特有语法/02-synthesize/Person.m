//
//  Person.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person

//@synthesize 用来自动生成get/set方法的实现
// @synthesize age 意思是给.h文件中名称叫做age的property生成实现
//@synthesize age = _age;

/*
 - (void)setAge:(int)age
 {
    _age = age;
 }
 
 - (int)age
 {
    return _age;
 }
 */



//@synthesize age = _no;
/*
 - (void)setAge:(int)age
 {
    _no = age;
 }
 - (int)age
 {
    return _no;
 }
 */

// 如果没有明确告诉synthesize后面的age要赋值给谁它就会赋值给和它同名的成员变量
@synthesize age;
/*
 - (void)setAge:(int)age
 {
    self->age = age;
 }
 
 - (int)age
 {
    return self->age;
 }
 */

/*
 实现get/set方法
 > 一定和声明的方法名称一致
 > 一定在方法名称跟上一个大括号
 > 一定时候把传入的形参赋值给成员变量
 */
//- (void)setAge:(int)age
//{
//    _age = age;
//}
/*
 > 一定和声明的方法名称一致
 > 一定返回成员变量
 */
//- (int)age
//{
//    return _age;
//}
@end
