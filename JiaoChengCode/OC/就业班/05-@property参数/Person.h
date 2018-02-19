//
//  Person.h
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import <Foundation/Foundation.h>
#import "Car.h"
@interface Person : NSObject

//1.生产get与set方法的声明
//2.生成get与set方法的简单实现
//3.若果你没有声成名相对象的成员变量,那么他会自动生成一个_开头的成员变量

//@property 参数分为4类
/*
1.与set方法内存管理相关参数
retain: 要生成符合内存管理原则的set方法(应用与对象类型)
assign: 直接赋值,(对象类型,基本数据类型)
copy :  (后面讲解)
*/

//2.多线程相关
//nonatomic: 不生成多线程线管代码,使用这个就可以了(效率高一点)
//atomic:生成多线程线管代码(不写默认是这种方式)
//实际开发中,只要是对象类型的@property都写成下面

//3.是否要生成set与get方法
//readwrite: 可读可写属性,同时生成set与get方法
//readonly : 只读属性,只生成get方法

//4.set与get方法名称相关的参数
//setter:设置生成的set方法名称
//getter:设置生成的get方法名称

@property (nonatomic,retain) Car * car;
@property (nonatomic,retain)NSString * name;
@property (nonatomic,assign)int age; //int float double char
@property (nonatomic,assign)int weight;
@property (nonatomic,assign,readonly)int idCard;
@property (nonatomic,assign,setter = abc:,getter = zhuanghuimei)int height;
//改变set与get方法名称很多都是用在BOOL类型的变量
@property (nonatomic,assign,setter = isDeid:,getter = isDeid)BOOL isDeid;

//- (void)isDeid:(BOOL)isDeid;

//- (void)setHeight:(int)height;
//- (int)height;

/*
- (void)setCar:(Car *)car
{
    _car = car;
}

- (Car *)car
{
    return _car;
}
 
 
 - (void)setCar:(Car *)car
 {
 
 if (_car != car)
 {
 
   [_car release];
   //car 2
   _car  = [car retain];
 }
 
 }
*/
@end
