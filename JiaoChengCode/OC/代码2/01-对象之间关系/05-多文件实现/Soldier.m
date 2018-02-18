//
//  Soldier.m
//  01-对象之间关系
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Soldier.h"
// contrl + command + ↑
@implementation Soldier
- (void)fireByGun:(Gun *)gun
{
    //    利用枪调用枪的开枪方法
    //     在OC当中利用nil去调用方法是不会报错的
    [gun shoot];
}

/**
 *  士兵开枪
 *
 *  @param gun    枪
 *  @param bullet 子弹
 */
- (void)fireByGun:(Gun *)gun andBullet:(Bullet *)bullet
{
    [gun shootWithBullet:bullet];
}

- (void)call:(Iphone *)phone
{
    [phone sendSignal:@"12580"];
}
@end
