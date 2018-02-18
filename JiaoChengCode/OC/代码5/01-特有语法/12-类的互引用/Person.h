//
//  Person.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"

@interface Person : NSObject
{
    Car *car;// 让人拥有一辆车
}

@property NSString * name;
- (void)run;
@end
