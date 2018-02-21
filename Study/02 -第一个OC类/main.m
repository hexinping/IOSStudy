//
//  main.m
//  02 -第一个OC类
//
//  Created by hexinping on 2018/2/13.
//  Copyright © 2018年 hexinping. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface Iphone: NSObject
{
@public
    int _cpu;
    float _size;
}
//- (int)getCpu;
//- (void)setCpu:(int) tCpu;
- （id）initIphoe:(int) cpu;
@property int cpu;
@end

@implementation Iphone
//- (int)getCpu
//{
//    return _cpu;
//}
//
//- (void)setCpu:(int) tCpu
//{
//    _cpu = tCpu;
//}

//@synthesize cpu = _cpu;


- (id) initIphoe:(int)cpu
{
    self = [super init];
    if (self)
    {
        _cpu = cpu;
    }
    return self;
    
}
@end

int main(int argc, const char * argv[]) {
//    @autoreleasepool {
//        // insert code here...
//        NSLog(@"Hello, World!");
//    }
    Iphone *t = [[Iphone alloc] initIphoe:4];
//    [t setCpu:4];
    
    int cpu = [t cpu];
    NSLog(@"cpu = %d", cpu);
    
    
    NSString *str = @"sdfsdfsdf";
    
    
    int height = 10;
    float age = 15;
    
    NSString * str1 = [NSString stringWithFormat:@"height = %d, age = %f", height, age];
    
//    NSLog(str1);
    NSLog(@"%@",str1);
    
    return 0;
}
