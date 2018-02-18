//
//  Ipad.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Ipad.h"

@implementation Ipad

// 玩游戏
- (void)playGameWithName:(NSString *)name
{
    NSLog(@"游戏名称 %@", name);
}

// 听音乐
- (void)listenMusicWithName:(NSString *)name
{
    NSLog(@"音乐名称 %@", name);
}

//看电影
- (void)wacthVideoWithName:(NSString *)name
{
    NSLog(@"%@ 大片播放中", name);
}

//发邮件
- (void)writeEmailWithAddress:(NSString *)address andEmailContent:(NSString *)content
{
    NSLog(@"发送 %@ 到 %@", content, address);
}
@end
