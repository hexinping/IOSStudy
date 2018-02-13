//
//  main.m
//  04-函数和类
//
//  Created by apple on 14-3-4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 类名:车
 属性:速度,轮子
 方法:跑
 */

@interface Car : NSObject
{
    @public
    int _speed;// 速度
    int _wheels;// 轮子
}

- (void)run;
@end

@implementation Car

- (void)run
{
    NSLog(@"速度是:%d, 轮子 = %d", _speed, _wheels);
}

@end

// 基本数据类型作为函数参数是值传递
void test(int w, int s)
{
    w = 4;
    s = 250;
}

void test2(Car *cp)
{
    cp->_wheels = 4;
    cp->_speed = 250;
}

void test3(Car *cp)
{
//    开发中非ARC模式下不要这样写
    Car *c1 = [Car new];
    c1->_speed = 100;
    c1->_wheels = 4;
    cp = c1;
    
    c1->_wheels = 8;
    c1->_speed = 300;
}

int main(int argc, const char * argv[])
{

    Car *c = [Car new];
    c->_speed = 500;
    c->_wheels = 2;
    
//    test(c->_wheels, c->_speed);
//    test2(c);
    test3(c);
    
    [c run];
    
    
    return 0;
}

