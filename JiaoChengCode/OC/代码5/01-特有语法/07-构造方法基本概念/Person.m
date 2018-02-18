//
//  Person.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person
/*
// init方法的作用 :用于对类的成员变量进行初始化
- (id)init
{
 
//     重写NSObject的init初始化方法注意点:
//     >一定要调用super init 方法,初始化父类的东西
//     >一定要判断self是否为nil
//     >一定要返回self
 
    
    self = [super init];// 如果父类初始化失败会返回nil
    if (self != nil) {
//        说明父类初始化成功,我们才开始初始化子类特有的东西
        _age = 18;
    }
    return self;
}
*/

// 优化init方法
- (id)init
{
    if (self = [super init]) {
        _age = 30;
    }
    return  self;
}

@end
