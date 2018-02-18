//
//  Car.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "Person.h" 如果在A类中导入了B类,在B类中又导入了A类,就会造成循环引用
@class Person; //仅仅用于告诉编译Person是一个类

@interface Car : NSObject

- (void)run:(Person *)person  andAddress:(NSString *)address;
@end
