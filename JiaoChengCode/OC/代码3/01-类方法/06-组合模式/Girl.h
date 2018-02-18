//
//  Girl.h
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Ipad.h"

typedef struct
{
    float _upWei;
    float _middleWei;
    float _huaWei;
}SanWei;
/*
 总结:
 组合模式的概念:
 组合模式就是一个类中声明了其它类的对象
 优点:
 全局对象方法中都可以直接访问,节省了代码量
 缺点:
 依赖性比较强
 使用场景:
 当多个方法都用到了同一个对象,那么就把它设置为成员变量
 
 如何判断组合模式的合理性:
 
 XXX 拥有了 XXX (谁拥有誰的一个关系)
 
 */
@interface Girl : NSObject
{
    int _age;// 年龄
    SanWei _sanWei;// 三围
    NSString *_address;// 住址
    Ipad *_ipad;// 让女孩拥有一个ipad
}

- (void)setAge:(int)age;
- (int)age;

- (void)setSanWei:(SanWei)sanWei;
- (SanWei)sanWei;

- (void)setAddress:(NSString *)address;
- (NSString *)address;

- (void)setIpad:(Ipad *)ipad;
- (Ipad *)ipad;


// 女孩通过iPad玩游戏
- (void)playGameWithIpad:(Ipad *)ipad andGameName:(NSString *)name;

// 女孩听音乐
- (void)listenMusicWithIpad:(Ipad *)ipad andMusicName:(NSString *)name;

// 女孩看电影
- (void)watchVideoWithIpad:(Ipad *)ipad andVideoName:(NSString *)name;

// 女孩写邮件
- (void)writeEmailWithIpad:(Ipad *)ipad andEmailAddress:(NSString *)address andEmailContent:(NSString *)content;

// 女孩买了ipad后

// 女孩跟ipad的关系非常紧密,女孩类中很多方法都用到了ipad对象,所以我们把ipad设置为女孩的成员变量,因为成员变量在所有的对象方法中都可以方法
- (void)playGameWithName:(NSString *)name;

- (void)listenMusicWithName:(NSString *)name;

- (void)watchVideoWithName:(NSString *)name;

- (void)writeEmailWithAddress:(NSString *)address andEmailContent:(NSString *)content;

@end
