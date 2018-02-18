//
//  Soldier.h
//  01-对象之间关系
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Gun.h"
#import "Iphone.h"

typedef enum
{
    kSoldierLevel1,// 大兵
    kSoldierLevel2,// 列兵
    kSoldierLevel3// 士官
}SoldierLevel;

@interface Soldier : NSObject
{
@public
    int _life;// 生命值
    NSString *_name;// 名称
    SoldierLevel _level;// 等级
}
/**
 *  开枪方法
 *
 *  @param gun 枪
 */
- (void)fireByGun:(Gun *)gun;
/**
 *  开枪方法
 *
 *  @param gun    枪
 *  @param bullet 子弹
 */
- (void)fireByGun:(Gun *)gun andBullet: (Bullet *)bullet;

/**
 *  打电话报告总部
 *
 *  @param phone 电话
 */
- (void)call:(Iphone *)phone;
@end
