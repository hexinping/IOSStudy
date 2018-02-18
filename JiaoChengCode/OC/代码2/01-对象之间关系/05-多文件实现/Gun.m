//
//  Gun.m
//  01-对象之间关系
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Gun.h"

@implementation Gun
// 如果项目变动过大,不建议修改以前的代码,而是新增方法
- (void)shoot
{
    //    NSLog(@"打枪了....");
    
    if (_bulletCOunt > 0) {// 2
        _bulletCOunt -= 1;// 每开一枪让子弹减一
    }else
    {
        _bulletCOunt = 0;
        //        NSLog(@"请上子弹");
    }
    NSLog(@"剩余子弹 = %d", _bulletCOunt);//2 1
}

- (void)shootWithBullet:(Bullet *)bullet
{
    //    1.取出子弹的个数
    int num = bullet->_count;
    if (num > 0) {
        num -= 1;// 每开一枪让子弹减一
    }else
    {
        num = 0;
    }
    bullet->_count = num;//把减完后的值赋值回去
    NSLog(@"剩余子弹 = %d", bullet->_count);
}

@end
