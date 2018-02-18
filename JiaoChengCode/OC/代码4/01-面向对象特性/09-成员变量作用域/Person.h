//
//  Person.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 @public
 @private
 @protected
 @package
 */

@interface Person : NSObject
{
//    默认情况下所有属性都是protected的
    int _no;
    
    
    @public
    int _age;
    
    @private// 私有
    int _weight;
    
    @protected// 受保护的
    float _height;
}

- (void)test;

@end
