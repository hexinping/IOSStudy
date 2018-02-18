//
//  Person.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property int age;


// 定义类方法创建Person对象
// 一般开发中会提供一个对象方法和一个类方法用于创建初始化对象
// 约定:只要是用于创建对象的类方法,方法名称和类名一致(首字母小写)

+ (id)person;
+ (id)personWithAge:(int)age;

@end
