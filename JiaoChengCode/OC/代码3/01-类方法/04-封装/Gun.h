//
//  Gun.h
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kIColorWhite,
    kIColorBlack
}IColor;

@interface Gun : NSObject
{
//    @public//公开
//    成员变量的特点:可以被任何对象方法访问
    int _bulletCount;// 子弹数
    NSString *_model;// 枪的型号
    IColor _color;// 颜色
    NSString *_serial;// 序列号
    
/*
 在开发当中有时候只提供get方法,,该属性称之为只读属性
 有时候只提供set方法,该属性就称之为只写属性
 */
}

- (void)setModel:(NSString *)model;
- (NSString *)model;

- (void)setColor:(IColor)color;
- (IColor)color;

//- (void)setSerial:(NSString *)serial;
- (NSString *)serial;

- (void)shoot;

//上子弹
- (void)addBulletCount:(int)count;

/*
 OC有一个约定
 给成员变量赋值提供一个叫做set方法的方法
 1.一定是对象方法
 2.返回值一定是void
 3.一定以set开头,set后面跟上成员变量的名称去掉下划线,并且首字母大写
 4.一定有参数,并且参数类型和成员变量类型一致,参数名称和成员变量名称去掉下划线相同
 */
- (void)setBulletCount:(int)bulletCount;

/*
 取成员变量的值提供一个叫做get方法的方法
 1.一定是对象方法
 2.一定有返回值,并且返回值类型和成员变量类型一致
 3.方法名称和成员变量去掉下划线一致
 4.一定没有参数
 */
- (int)bulletCount;

/*
 封装的目的:
 同set方法封装属性,可以过滤掉一些不符合逻辑的数据,保证了我们数据的正确性
 提高了代码的健壮性
 
 封装的好处:
 将变化隔离
 提高代码的重用性
 提高了代码的安全性
 
 */
@end
