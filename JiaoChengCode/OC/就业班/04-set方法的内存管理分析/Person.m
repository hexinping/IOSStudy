//
//  Person.m
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import "Person.h"

//配对原则:new alloc retain 对应一个release,autorelease

@implementation Person

- (void)setName:(NSString *)name
{
    if (_name != name)
    {
        [_name release];
        _name = [name retain];
    }
    
}
- (NSString *)name
{
    return _name;
}
//面试笔试,出题率非常高
- (void)setCar:(Car *)car
{

    if (_car != car)
    {   //c1 0
        //relese旧值
        [_car release];//[nil release];
        //c2 2
        //retain新值
        _car  = [car retain];
    }

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
    //0
    //c2 0
    [_car release];
    [_name release];
    [super dealloc];
    NSLog(@"Person 被销毁了");
}

@end
