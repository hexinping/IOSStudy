//
//  Iphone.h
//  01-对象之间关系
//
//  Created by apple on 14-3-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Iphone : NSObject
/**
 *  打电话
 *
 *  @param number 电话号码
 */
- (void)sendSignal:(NSString *)number;
@end
