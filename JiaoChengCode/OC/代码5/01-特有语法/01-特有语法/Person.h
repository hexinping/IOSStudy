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
    int _age;// 年龄
    int _no;// 身份证号
    NSString *_name;// 姓名
}

@property NSString * name;
@property int no;
/*
 @property 用来自动生成成员变量的get/set方法声明(xcode4.4以前)
 > 告诉property要生成的get/set方法声明的成员变量类型是什么
 > 告诉property要生成的get/set方法是哪个属性的,属性名称去掉下划线
 */

//property是一个编译器特性
@property int age;//注意:这个地方成员变量的名称写去掉下划线后的
/*
 - (void)setAge:(int)age;
 - (int)age;
 
@property int _age; 
 - (void)set_age:(int)_age;
 - (int)_age;
 */

/*
 > 一定是对象方法
 > 返回值一定是void
 > 一定以set开头
 > set后面一定跟上成员变量名称去掉下划线首字母大写
 > 一定接收一个参数
 > 参数类型一定和成员变量相同
 > 参数名称一定和成员变量去掉下划线相同
 */
//- (void)setAge:(int)age;
/*
 > 一定是对象方法
 > 一定有返回值
 > 返回值一定和成员变量相同
 > 方法名称一定和成员变量去掉下划线相同
 */
//- (int)age;

//- (void)setNo:(int)no;
//- (int)no;
@end
