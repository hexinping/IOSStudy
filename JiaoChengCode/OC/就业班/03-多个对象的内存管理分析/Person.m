//
//  Person.m
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import "Person.h"

@implementation Person

- (void)setCar:(Car *)car
{
    //2,能够使得retainCount + 1 并且返回self
    _car  = [car retain];

}
- (Car *)car
{
    return _car;
}

- (void)drive
{
    [_car run];
}
- (void)dealloc
{
    //目的是要保证在p对象存在的时候,car对象一定存在
    //对象p被销毁的时候,
    [_car release]
    [super dealloc];
    NSLog(@"Person 被销毁了");
}

@end
