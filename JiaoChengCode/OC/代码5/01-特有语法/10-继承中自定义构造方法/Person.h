//
//  Person.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
//{
//    int _age;
//}
@property int age;

- (id)initWithAge:(int)age;

- (void)infomation;
@end
