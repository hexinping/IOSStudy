//
//  Anycall.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Phone.h"

@interface Anycall : Phone
{
//    在OC当中子类继承了父类,就不能定义和父类同名的成员变量
//    int _cpu;
}

+ (void)test;
@end
