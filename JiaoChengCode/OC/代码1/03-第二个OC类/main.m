//
//  main.m
//  03-第二个OC类
//
//  Created by apple on 14-3-4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 定义一个人类
 
 类名:人
 属性:年龄/体重
 方法:走/吃
 
 
 要求代码定义一个人类,通过这类创建人对象,并且修改对象中的值,调用对象的方法
 */

//1.声明一个类
//*说明类的属性
//*说明类的方法
@interface Person : NSObject
{
    @public //公开成员变量
//    用来写类的属性(成员变量)
    int _age;// 年龄
    int _weight;// 体重
}

- (void)walk;

- (void)eat:(char *)name;

@end

//2.实现一个类
//*实现声明中声明的方法
@implementation Person

- (void)walk
{
//    在"对象"方法中可以直接访问对象的成员变量
//    _weight = _weight + 1;
    _weight += 1;
    NSLog(@"出去遛弯 体重是%d", _weight);
}

- (void)eat:(char *)name
{
    NSLog(@"吃了 %s", name);
}

@end


int main(int argc, const char * argv[])
{
    Person *p = [Person new];
    p->_age = 99;
    p->_weight = 3;

    Person *p2 = [Person new];
    p2->_age = 100;
    p2->_weight = 50;

    p2 = p;
    p2->_age = 66;
    NSLog(@"age = %d", p->_age);

    return 0;
}

void test()
{
    /*
     //    1.开辟存储空间, 2初始化成员变了,3返回地址
     Person *p = [Person new];
     p->_age = 99;
     p->_weight = 3;
     
     //    NSLog(@"age = %d weight = %d", p->_age, p->_weight);
     NSLog(@"遛弯前:weight = %d", p->_weight);//3
     
     [p walk];
     //    [p eat:"sss"];
     
     Person *p2 = [Person new];
     NSLog(@"遛弯前:weight = %d", p2->_weight);//0
     [p2 walk];
     
     */
}

