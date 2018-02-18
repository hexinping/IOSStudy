//
//  main.m
//  03-回顾
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    /*
     1.什么是面向对象?
     更加符合人类思考模式的编程思想
     作用:可以将复杂的事情简单化
     把我们从执行者转换为了指挥者
     
     2.什么是对象
     万物皆对象
     
     3.什么是类
     类相当于显示生活中的图纸,用来描述对象有哪些属性和行为(方法)
     
     4.如何创建一个类
     >1声明类
     *类名大写
     *成员变量下划线开头
     >1.1如何声明一个对象方法
     *对象方法-号开头
     *方法中的属性都要用()括主
     *有一个参数就写一个冒号,在参数类型前面一定要加冒号
     *方法名驼峰命名
     @interface Person
     {
        int _age;
     }
     @end
     >2实现类
     *实现interface中声明的方法
     @implementation
     @end
     
     
     5.创建对象
     要想创建对象必须让类具备创建对象的能力 在类声明的类名后面加上 : NSObject
     [Person new];//new会做3件事, 1.开辟存储空间,2初始化成员变量,3返回之地
     
     在OC当中向调用一个类的对象方法或者是访问一个类的成员变量必须通过指针
     [p eat];
     p->_age;
     
     #import
     #include
     import是include的升级版,以后OC中无论导入C还是OC的头文件都用import
     import可以自动防止重复导入,而且还做了导入内存优化
     
     
     NSString是一个类
     NSString *str = @"abc";//最简单的字符串 
     
     可以指定生成字符串的格式返回一个新的字符串
     NSString *str1 = [NSString stringWithFormat]
     */
    [
    return 0;
}

