//
//  main.m
//  04-封装
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Gun.h"

int main(int argc, const char * argv[])
{
    Gun *g = [Gun new];
//    因为我们是直接给成员变量赋值,导致了脏数据
//    g->_bulletCount = -10;
    
//    [g addBulletCount:-10];
    
    [g setBulletCount:20];
    [g setModel:@"B51"];
    [g setColor:kIColorBlack];
//    [g setSerial:@"itcast007"];
    
    NSLog(@"serial = %@", [g serial]);
    
    
//    [g shoot];
    
//    NSLog(@"bulletCount = %d", [g bulletCount]);

    return 0;
}

