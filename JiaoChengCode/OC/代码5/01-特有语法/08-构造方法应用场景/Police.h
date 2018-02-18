//
//  Police.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Gun.h"

@interface Police : NSObject
//{
//    Gun *_gun;// 枪
//}

@property Gun * gun;

// 开枪
- (void)fire;
@end
