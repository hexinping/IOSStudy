//
//  Animal.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

//动物类
@interface Animal : NSObject
{
    int  _age;// 年龄
}

- (void)eat;// 吃
@end
