//
//  Iphone.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Phone.h"
/*
 继承语法
 在类的声明名称后加上一个 : 号 后面跟上父类的名称
 代表着Iphone类继承了Phone类,Iphone类就拥有了Phone类里面所有的属性和方法
 */
@interface Iphone : Phone

@end
