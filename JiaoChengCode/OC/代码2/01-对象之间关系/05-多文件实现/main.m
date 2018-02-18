//
//  main.m
//  05-多文件实现
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Soldier.h"

/*
 一个类一个文件
 
 新增一个士兵打电话报告总部的功能
 
 电话是一个类
 功能打电话
 
 士兵使用电话的打电话功能
 
 */
int main(int argc, const char * argv[])
{

    Soldier *s1 = [Soldier new];
    s1->_name = @"生生";
    s1->_life = 8;
    s1->_level = kSoldierLevel3;
    
//    创建枪
    Gun *g1 = [Gun new];
//    创建子弹
    Bullet *b1 = [Bullet new];
    b1->_count = 3;
    // 330  740
    [s1 fireByGun:g1 andBullet:b1];
    
    Iphone *phone = [Iphone new];
    
    [s1 call:phone];
    
    return 0;
}

