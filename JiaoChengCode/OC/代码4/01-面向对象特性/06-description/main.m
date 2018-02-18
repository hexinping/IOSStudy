//
//  main.m
//  06-description
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iphone.h"

int main(int argc, const char * argv[])
{

    Iphone *ip = [Iphone new];
    [ip setCpu:20];
    [ip setColor:1];
    [ip setWeight:20];
    [ip setSize:5];
//    NSLog(@"cpu = %d, color = %d, weight= %d, size  =%d", [ip cpu], [ip color], [ip weight], [ip size]);
//     NSLog(@"cpu = %d, color = %d, weight= %d, size  =%d", [ip cpu], [ip color], [ip weight], [ip size]);
//     NSLog(@"cpu = %d, color = %d, weight= %d, size  =%d", [ip cpu], [ip color], [ip weight], [ip size]);
    
//    当使用%@打印一个对象的时候会去调用对象的description方法
    NSLog(@"ip = %@", ip);
    NSLog(@"%@", ip);
    
    Class cs = [Iphone class];
    NSLog(@"%@", cs);
    
    return 0;
}

