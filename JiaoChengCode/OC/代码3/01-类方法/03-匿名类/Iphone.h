//
//  Iphone.h
//  01-类方法
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Iphone : NSObject
{
    @public
    int _cpu;
    float _size;
    int _weight;
}
- (void)aboutMyPhone;

- (void) brand;

- (void)callWithNumber:(NSString *)number;
@end
