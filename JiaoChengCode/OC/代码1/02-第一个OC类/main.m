//
//  main.m
//  02-第一个OC类
//
//  Created by apple on 14-3-4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 1>类名
 类名首字母必须大写
 类名不能有下划线
 
 2>属性
 属性名称必须以下划线开头
 
 3>行为(方法)
 
 僵尸
 
 类名:僵尸(Zoombie)
 属性:生命(_life),速度(_speed),攻击(_gj)
 行为:走(walk)
 
 
 灰机
 类名:灰机(Plane)
 属性:颜色(_color),大小(_size)
 行为:灰(fly)
 
 
//  这个行为哪个最清楚就定义到哪个类中
 
 类名:电脑(Computer)
 属性:型号(_model)
 行为:打开(open),关闭(close)
 
 
 手机:
 
 类名:苹果手机(Iphone)
 属性:颜色(_color ), 大小(_size), _cpu
 行为:查看本机信息(aboutMyPhone),打电话(sendSignal), 发短信(sendMessage)
 
 */

//如何定义一个OC类
//完整的定义一个函数分为两部分:函数的声明,函数的实现(函数定义)
//完整的定义一个类分为两部分:类的声明,类的实现

typedef enum
{
//    K + 枚举名称 + 含义
    kIColorBlack,// 黑色
    KIColorWhite// 白色
}IColor;

//1.类的声明
//@interface @end之间写类的声明,@end是用来告知什么时候声明结束
//声明类的属性,行为
//:NSObject为了让类具备创建对象的能力
@interface Iphone :NSObject
{
//    写public是为了让外面的指针能够访问对象中的成员变量
    @public//公开成员变量
//    所有的属性必须写在这个括号当中
//    成员变量有默认的初始化值
    int _cpu;// 手机cup
    float _size;// 尺寸
    IColor _color;// 颜色
}


//void function();
//方法名/参数/返回值类型
/*
 OC中声明方法
 1.对象方法以-号开头
 2.数据类型一定要用小括号括住
 3.OC方法中小括号就一个作用,用来括主数据类型
 */
- (void)aboutMyPhone;

//收到短信
//char* receiptMessage();
- (char *)recepitMessage;

//void sendSignal(char *number);
//当方法有参数的时候必须在参数类型前面加上一个冒号
//冒号也是方法名的一部分  sendSignal:
//-号不是方法名的一部分

//- (void)sendSignal;
- (void)sendSignal:(char *)number;

/*
 多个参数
 每一个参数类型前面都应该有一个冒号
 方法名是:
 sendMessage::
 */
// 苹果提倡我们把方法名写的像句子一样
- (void)sendMessageWithNumber:(char *)number andMessageContent:(char *)content;

@end//初学者注意一定要有end

//2.类的实现
//主要用来实现声明当中的方法,说清楚方法当中要干什么
@implementation Iphone

- (void)aboutMyPhone
{
    NSLog(@"查看手机信息");
}

- (char *)recepitMessage
{
//    return "老婆今天我去做大宝剑\n";
    return "wife is god\n";
}

- (void)sendSignal:(char *)number
{
    NSLog(@"拨打电话给 %s\n", number);
}

- (void)sendMessageWithNumber:(char *)number andMessageContent:(char *)content
{
    NSLog(@"发短信给 %s ,内容是 %s", number, content);
}
@end

int main(int argc, const char * argv[])
{

//    在OC当中如果想执行一些行为,就立刻写上[类名/对象 方法名称]  [方法调用者 方法名称]
//    >用类名调用的是类方法
//    >用对象调用的是对象方法
    /*
     [Iphone new];
     再内存中干三件事:
     1.开辟存储空间
     2.初始化成员变量(写在类声明大括号中的属性就叫成员变量,也叫实例变量)
     3.返回指针地址
     */
//    指针类型 *指针变量名称
//    定义了一个指针变量p指向了Iphone类型的对象
//    保存了对象指针地址的变量,我们就可以把它叫做某个对象
    Iphone *p;//p 是局部变量
     p  = [Iphone new];// new操作它会在堆内存中分配存储空间
    
//    要给对象中的成员变量赋值和结构体一样
//    OC中想要操作一个对象的属性或者行为(方法),必须通过指针类操作
    p->_cpu = 2;
    p->_size = 3.7;
    p->_color = kIColorBlack;
    
//    取出p指向对象中的属性
//    int number = p->_cpu;
//    printf("number = %d\n", number);
    
//    NSLog(@"cpu = %d, size = %.1f, color = %d", p->_cpu, p->_size, p->_color);
    
    
//    每new一次都会重新开辟一块存储空间
//    互不干扰,一份类可以创建无数个对象
     Iphone *p2;
     p2 = [Iphone new];
    
    p2->_cpu = 4;
    p2->_size = 4;
    p2->_color = KIColorWhite;
    
//    利用对象调用对象方法
//    调用方法再OC当中称之为"发送消息"
//    [p2  aboutMyPhone];
    
//    char *message = [p2 recepitMessage];
//    NSLog(@"%s", message);
//    
//    NSLog(@"123");
    
//    [p2 sendSignal:"12306"];
    
//    [p2 sendMessage:"10010" :"xxoo"];
    
//    [p2 sendMessage:<#(char *)#> :<#(char *)#>]
    
//    [p2 sendMessageWithNumber:"10086" andMessageContent:"who"];
    
    return 0;
}

