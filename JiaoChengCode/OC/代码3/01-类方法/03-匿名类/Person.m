//
//  Person.m
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void)sendSignal:(Iphone *)iphone
{
    [iphone callWithNumber:@"10010"];
}
@end
