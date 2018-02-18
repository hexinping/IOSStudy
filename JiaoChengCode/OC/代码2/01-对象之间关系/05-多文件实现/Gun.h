//
//  Gun.h
//  01-对象之间关系
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Bullet.h"//.h

@interface Gun : NSObject
{
@public
    int _bulletCOunt;// 子弹个数
    NSString *_model;// 枪的型号
}

// 射击方法
- (void)shoot;
/**
 *  射击方法
 *
 *  @param bullet 子弹
 */
- (void)shootWithBullet:(Bullet *)bullet;

@end
