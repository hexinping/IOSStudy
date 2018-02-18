//
//  Ipad.h
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kIColorBlack,
    kIColorWhite
}IColor;

@interface Ipad : NSObject
{
    int _size;// 尺寸
    IColor _color;// 颜色
}
// 玩游戏
- (void)playGameWithName:(NSString *)name;

// 听音乐
- (void)listenMusicWithName:(NSString *)name;

//看电影
- (void)wacthVideoWithName:(NSString *)name;

//发邮件
- (void)writeEmailWithAddress:(NSString *)address andEmailContent:(NSString *)content;
@end
