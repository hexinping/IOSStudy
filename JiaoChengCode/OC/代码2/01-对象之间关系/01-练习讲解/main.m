//
//  main.m
//  01-练习讲解
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 要求：
 * 类名、属性名、属性类型、方法名、方法参数、方法返回值自拟
 * 自己写main函数测试设计是否合理
 
 1.设计一个”狗“类
 1> 属性
 * 颜色
 * 速度（单位是m/s）
 * 性别
 * 体重（单位是kg）
 
 2> 行为
 * 吃：每吃一次，体重增加0.5kg，输出吃完后的体重
 * 吠（叫）：输出所有的属性
 * 跑：每跑一次，体重减少0.5kg，输出速度和跑完后的体重
 * 比较颜色：跟别的狗比较颜色，如果一样，返回YES，不一样，返回NO
 * 比较速度：跟别的狗比较速度，返回速度差（自己的速度 - 其他狗的速度）
 */


#pragma mark - 狗类
typedef enum
{
    kIColorBlack,
    kIColorGreen,
    kIColorBlue
}IColor;

typedef enum
{
    kSexMale,
    kSexFeMale,
    KSexYao
}Sex;

@interface Dog : NSObject
{
    @public
    IColor _color;// 颜色
    int _speed;// 速度
    Sex _sex;// 性别
    float _weight;// 体重
    
}

// 吃
- (void)eat;
// 咆哮
- (void)bark;
// 跑
- (void)run;
/**
 *  比较颜色
 *
 *  @param other 其它狗
 *
 *  @return 颜色是否相等
 */
- (BOOL)isSameColorWithOther:(Dog *)other;

//比较速度
- (int)compareSpeedWithOther:(Dog *)other;

@end

@implementation Dog

- (void)eat
{
    _weight += 0.5;
    NSLog(@"current weight = %f", _weight);
}

- (void)bark
{
    NSLog(@"color = %d, speed = %d, sex = %d, weight = %f", _color, _speed, _sex, _weight);
}

- (void)run
{
    _weight -= 0.5;
    NSLog(@"current weight = %f", _weight);
}

- (BOOL)isSameColorWithOther:(Dog *)other// other == d2
{
//    _color 拿到当前对象的颜色
//    other->_color 拿到其它狗的颜色
    return _color == other->_color;
}

- (int)compareSpeedWithOther:(Dog *)other
{
    return _speed - other->_speed;
}
@end

#pragma mark - 人类
@interface Person : NSObject
{
    @public
    NSString *_name;// 名称
    Dog *_dog;// 狗 0fcc1
}

// 喂狗
- (void)feedDog;
// 遛狗
- (void)liuDog;

@end

@implementation Person

- (void)feedDog
{
//    调用狗的吃东西方法
    [_dog eat];
}

- (void)liuDog
{
    [_dog run];
}
@end


#pragma mark - 主函数
int main(int argc, const char * argv[])
{

//    1.创建人对象
    Person *p = [Person new];
    p->_name = @"jack";
    
//    2.创建一条狗
    Dog *d = [Dog new];
    d->_color = kIColorBlack;
    d->_sex = KSexYao;
    
//    把狗给人
    p->_dog = d;//0fcc1
    
    [p feedDog];
    [p liuDog];
    return 0;
}

void test()
{
    Dog *d = [Dog new];
    d->_color = kIColorGreen;
    d->_sex = KSexYao;
    d->_speed = 250;
    d->_weight = 60;
    
    //    [d eat];
    //    [d bark];
    //    [d run];
    
    Dog *d2 = [Dog new];
    d2->_color = kIColorBlue;
    d2->_sex = KSexYao;
    d2->_speed = 150;
    d2->_weight = 60;
    
    //调用d这条狗的比较方法比较自己和其它狗的颜色是否相等
    BOOL isSame = [d isSameColorWithOther:d2];
    NSLog(@"%d", isSame);
    
    int minus = [d compareSpeedWithOther:d2];
    NSLog(@"minus = %d", minus);
}

