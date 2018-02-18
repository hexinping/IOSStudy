//
//  Girl.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Girl : NSObject
{
    @public
    int _age;// 年龄
    NSString *_name; // 姓名
    NSString *_tel;// 电话
}

- (void)setAge:(int)age;
- (int)age;

- (void)setName:(NSString *)name;
- (NSString *)name;

- (void)setTel:(NSString *)tel;
- (NSString *)tel;

- (void)test;
@end
