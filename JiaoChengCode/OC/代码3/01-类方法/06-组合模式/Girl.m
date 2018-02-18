//
//  Girl.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Girl.h"

@implementation Girl

// 女孩通过iPad玩游戏
- (void)playGameWithIpad:(Ipad *)ipad andGameName:(NSString *)name
{
    [ipad playGameWithName:name];
}

// 女孩听音乐
- (void)listenMusicWithIpad:(Ipad *)ipad andMusicName:(NSString *)name
{
    [ipad listenMusicWithName:name];
}

// 女孩看电影
- (void)watchVideoWithIpad:(Ipad *)ipad andVideoName:(NSString *)name
{
    [ipad wacthVideoWithName:name];
}

// 女孩写邮件
- (void)writeEmailWithIpad:(Ipad *)ipad andEmailAddress:(NSString *)address andEmailContent:(NSString *)content
{
    [ipad writeEmailWithAddress:address andEmailContent:content];
}


#pragma mark - 增强后
- (void)playGameWithName:(NSString *)name
{
    NSLog(@"game ipad = %p", _ipad);
    [_ipad playGameWithName:name];
}

- (void)listenMusicWithName:(NSString *)name
{
     NSLog(@"listen ipad = %p", _ipad);
    [_ipad listenMusicWithName:name];
}

- (void)watchVideoWithName:(NSString *)name
{
    NSLog(@"lwatch ipad = %p", _ipad);
    [_ipad wacthVideoWithName:name];
}

- (void)writeEmailWithAddress:(NSString *)address andEmailContent:(NSString *)content
{
    NSLog(@"Email ipad = %p", _ipad);
    [_ipad writeEmailWithAddress:address andEmailContent:content];
}


- (void)setAge:(int)age
{
    _age = age;
}
- (int)age
{
    return _age;
}

- (void)setSanWei:(SanWei)sanWei
{
    _sanWei = sanWei;
}
- (SanWei)sanWei
{
    return _sanWei;
}

- (void)setAddress:(NSString *)address
{
    _address = address;
}
- (NSString *)address
{
    return  _address;
}

- (void)setIpad:(Ipad *)ipad
{
    _ipad = ipad;
}
- (Ipad *)ipad
{
    return _ipad;
}
@end
