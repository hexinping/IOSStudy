//
//  Police.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Police.h"
#import "Gun.h"

@implementation Police


- (id)init
{
//    注意点:初学者记住不要写成(self == [super init](错误写法)
    if (self = [super init]) {
//        开发当中自己的事情自己干,不要多管闲事
        _gun = [[Gun alloc]init];
//        [_gun setBulletCount:10];
    }
    return  self;
}

- (void)fire
{
//     oc 当中使用nil调用方法(发送消息),不会报错
    [_gun shoot];
}


@end
