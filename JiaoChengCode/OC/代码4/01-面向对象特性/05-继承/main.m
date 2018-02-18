//
//  main.m
//  05-继承
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iphone.h"
#import "Anycall.h"

int main(int argc, const char * argv[])
{
    /*
//    1.验证继承了父类的成员变量和方法
//    Iphone *ip = [Iphone new];
//    [ip cameraWithFlashlightStatus:kFlashlightStatusOpen];
//    
//    Anycall *al = [Anycall new];
//    [al cameraWithFlashlightStatus:kFlashlightStatusOpen2];

    Iphone *ip = [Iphone new];
    [ip cameraWithFlashlightStatus:kFlashlightStatusOpen];
    
    ip->_cpu = 20;
    NSLog(@"_cpu = %d", ip->_cpu);
     */
    
//    new方法是父类中继承过来的, Phone之所以能创建对象是因为继承了NSObject
//    [Phone new];
    
    /*
//    如果在子类中实现了和父类中同名同类型的方法,我们称之为重写
//    在继承当中调用方法,首先会在本类中找,如果本类没有找到就去父类中找
//    Iphone *ip = [Iphone new];
//    [ip cameraWithFlashlightStatus:kFlashlightStatusOpen];
     
 //    在子类中不仅可以重写父类当中的对象方法,也可以重写父类当中的类方法
 //    [Iphone test];
    */
    
    
//    Anycall *al = [Anycall new];
//    al->_cpu = 50;
//    NSLog(@"_cpu = %d", al->_cpu);
    
//    [Anycall test];
    
    /*
     总结:
     当A类继承了B类, A类就拥有了B类所有的成员变量和方法
     
     
     优点:
     继承的出现减少了代码量
     提高了代码的安全性
     让类与类之间产生了关系
     让phone和Iphone有了关系 (父子关系),正是因为有了父子关系才有多态的特性
     让Iphone和Anycall有了关系(兄弟关系)
     
     坏处:
     耦合性太强
     
     注意点:
     
     如果子类实现了和父类一模一样的方法我们称之为重写
     子类当中不能定义和父类相同的成员变量
     OC只支持但继承不支持多继承
     OC中可以有多层继承
     
     子父类中的方法调用顺序:
     现在本类中找,如果本类没有再到父类中找,如果父类中没有,就到爷爷类中找
     NSObject是99.9%的类的父类
     
     查看父类中的功能, 建立子类对象使用功能
     */
    
//    Anycall *al = [Anycall new];
//    [al cameraWithFlashlightStatus:kFlashlightStatusOpen];

//    [Anycall test];
    Anycall *al = [Anycall new];
    [al test];
    return 0;
}

