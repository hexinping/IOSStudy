//
//  Iphone.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Iphone : NSObject
{
    int _cpu;
    int _size;
    int _weight;
    int _color;
}

- (void)setCpu:(int)cpu;
- (int)cpu;

- (void)setSize:(int)size;
- (int)size;

- (void)setWeight:(int)weight;
- (int)weight;

- (void)setColor:(int)color;
- (int)color;
@end
