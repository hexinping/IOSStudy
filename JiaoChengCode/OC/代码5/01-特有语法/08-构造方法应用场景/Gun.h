//
//  Gun.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Gun : NSObject
//{
//    int _bulletCount;// 子弹数
//}

@property int bulletCount;
// 射击方法
- (void)shoot;

@end
