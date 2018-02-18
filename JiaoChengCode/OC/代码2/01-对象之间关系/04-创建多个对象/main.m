//
//  main.m
//  04-创建多个对象
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - 子弹类
@interface Bullet : NSObject
{
    @public
    float _size;// 大小
    int _count;// 数量
}
@end

@implementation Bullet

@end

#pragma mark - 枪
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


typedef enum
{
    kSoldierLevel1,// 大兵
    kSoldierLevel2,// 列兵
    kSoldierLevel3// 士官
}SoldierLevel;

#pragma mark - 士兵类
@interface Soldier : NSObject
{
    @public
    int _life;// 生命值
    NSString *_name;// 名称
    SoldierLevel _level;// 等级
}

- (void)fireByGun:(Gun *)gun;

- (void)fireByGun:(Gun *)gun andBullet: (Bullet *)bullet;
@end

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
@end
#pragma mark - 主函数
int main(int argc, const char * argv[])
{
    Soldier *s1 = [Soldier new];
    s1->_life = 10;
    s1->_name = @"屎太浓";
    s1->_level = kSoldierLevel3;
    
//    创建枪
    Gun *gun = [Gun new];
//    创建子弹
    Bullet *bullet = [Bullet new];
    bullet->_count = 3;//设置子弹个数
    
    
    [s1 fireByGun:gun andBullet:bullet];
    
    
    
    
    /*
//    创建一把枪
    Gun *gun = [Gun new];// gun = 0 gun是nil的
    gun->_bulletCOunt = 3;
    
    [s1 fireByGun:gun];
    
    
//    击鼓传花例子
    Soldier *s2 = [Soldier new];
    s2->_life = 5;
    s2->_name = @"屎瓦辛味";
    s2->_level = kSoldierLevel2;
    
    [s2 fireByGun:gun];
*/
    
    return 0;
}

void test()
{
    Soldier *s1 = [Soldier new];
    s1->_life = 10;
    s1->_name = @"屎太浓";
    s1->_level = kSoldierLevel3;
    
    Soldier *s2 = [Soldier new];
    s2->_life = 5;
    s2->_name = @"屎瓦辛味";
    s2->_level = kSoldierLevel2;
    
    Soldier *s3 = s2;
    //    NSLog(@"life = %d", s3->_life);
    
    s3->_life = 8;
    //    NSLog(@"life = %d", s2->_life);
    
    Soldier *s4 = s3;
    s4->_name = @"张万明";
    NSLog(@"%@", s2->_name);
    
    
}

