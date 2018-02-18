//
//  main.m
//  06-组合模式
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Girl.h"

int main(int argc, const char * argv[])
{

    Girl *girl = [Girl new];
    [girl setAge:18];
    [girl setAddress:@"天上人间"];
    SanWei s = {33, 11, 22};
    [girl setSanWei:s];

    Ipad *ipad = [Ipad new];
    NSLog(@"main ipad = %p", ipad);
    [girl setIpad:ipad];

    
//    [girl playGameWithIpad:ipad andGameName:@"吹裙子"];
//    [girl listenMusicWithIpad:ipad andMusicName:@"时间都去哪了"];
//    [girl watchVideoWithIpad:ipad andVideoName:@"行尸走肉"];
//    [girl writeEmailWithIpad:ipad andEmailAddress:@"admin@520it.com" andEmailContent:@"江哥网站被封了"];
    
    [girl playGameWithName:@"摇一摇"];
    [girl listenMusicWithName:@"搽皮鞋"];
    [girl watchVideoWithName:@"吸血鬼日记"];
    [girl writeEmailWithAddress:@"admin@520it.com" andEmailContent:@"江哥:数据库也没有"];
    
    return 0;
}

