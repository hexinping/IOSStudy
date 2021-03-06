//
//  main.m
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    /*
     1.类方法
     > 加号开头
     > 类方法只能由类名调用
     > 类方法中不能访问成员变量
     > 类方法可以调用类方法
     > 允许类方法和对象方法同名
     
     类方法的好处和使用场合
     > 不依赖于对象, 执行效率高
     > 能用类方法就用类方法
     > 当方法内部不需要使用到成员变量(实例变量)时,就可以改为类方法
     
     
     2.匿名对象
     没有名称的对象称之为匿名对象
     有名称的对象:用一个指针来接收了对象的地址称之为有名称的对象
     匿名对象的使用场景:
     > 当对象方法仅仅调用一次的时候
     > 匿名对象可以作为实际参数传递
     
     3.封装
     初学者可以理解为对属性的封装
     约定:
     set方法
     > 一定是对象方法
     > 返回值一定是void
     > 一定以set开后后面接上成员变量去掉下划线的名称,然后首字母大写
     > 一定有参数,参数类型一定和成员变量一致
     
     get方法
     > 一定是对象方法
     > 一定有返回值,返回值和成员变量类型一致
     > 方法名称直接写成员变量名称去掉下划线
     > 一定没有参数
     
     封装的原则:
     将不需要对外提供的内容都隐藏起来
     把属性都隐藏,提供公共的方法对其访问
     
     优点:
     可以过滤掉一些不符合逻辑的数据,提高代码的健壮性
     
     组合模式:
     在一个类中声明其它对象的指针变量
     优点:全局的对象方法都可以访问, 简化了我们的代码
     缺点:依赖性强
     
     使用场景:
     当多个方法都使用到了同一个对象,就把它设置为成员变量
     
     如何判断组合模式是否合理:
     XXX 拥有 XXX
     
     方法之间调用:
     类方法调用类方法  可以
     类方法调用对象方法 不可以
     对象方法调用类方法 可以
     对象方法调用对象方法 ?
     
     */
    return 0;
}

