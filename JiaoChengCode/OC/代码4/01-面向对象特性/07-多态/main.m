//
//  main.m
//  07-多态
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dog.h"
#import "Cat.h"
#import "Animal.h"
#import "Person.h"
#import "Pig.h"

int main(int argc, const char * argv[])
{
    /*
//    什么是多态:多态就是某一类事物的多种形态
     猫  == 猫 == 动物
     狗 == 狗 == 动物
     
     男人 == 男人 == 人 == 高级动物
     女人 == 女人 == 人 == 高级动物
     
     在代码中多态的前提:
     没有继承就没有多态
     
     狗 *g = [狗 new];
//     代码体现:用父类类型的指针指向了子类对象,这就是多态
     动物 *a = [狗 new];
     
     猫 *c = [猫 new];
     动物 *a = [猫 new];
    */
    
    /*
//    Dog *d = [Dog new];
//    [d eat];
    
//    Cat *c = [Cat new];
//    [c eat];
    
//    OC特性:运行方法时会动态检查对象的真实类型, (动态绑定)
    Animal *a1 = [Dog new];
    [a1 eat];
    
    Animal *a2 = [Cat new];
    [a2 eat];
    */
    /*
    Dog *d1 = [Dog new];
    
    Person *p = [Person new];
//    [p feedDog:d1];
    
    Cat *c1 = [Cat new];
//    [p feedCat:c1];
    
    [p feedAnimal:d1];
    [p feedAnimal:c1];
    
    Pig *p1 = [Pig new];
    [p feedAnimal:p1];
    */
     
    
//    Dog *d = [Dog new];
//    [d jiao];
    /*
    Animal *a1 = [Dog new];
//    这里报错是因为xcode升级后做了一个强化,是xcode的特性,并不是OC特性
//    强制类型转换, 要想调用子类特有的方法必须进行强制类型转换
    Dog *d1 = (Dog *)a1;// 写给编译器看的
    [d1 jiao];
     */
    
    
    double d = 10.1;
    int i = (double)d;
    /*
      '-[Animal jiao]: unrecognized selector sent to instance 0x100109990'
     错误写法
     */
//    Animal *a2 = [Animal new];
//    Dog *d2 = (Dog *)a2;// 写给编译器看的
////   运行方法时会动态检查对象的真实类型, (动态绑定)
//    [d2 jiao];
    

    
    /*
     总结:
     多态的前提:没有继承就没有多态
     多态代码体现:父类的指针指向了子类对象
     多态的好处:多态的存在提高了程序的扩展性
     多态的局限性:父类类型的指针不能调用子类对象的特有方法,如果想调用子类特有方法必须强制类型转换为子类类型
     
     注意:"
     不要把父类类型强制转换为子类类型
     */
    return 0;
}

