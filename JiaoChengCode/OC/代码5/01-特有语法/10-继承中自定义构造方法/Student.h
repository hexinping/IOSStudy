//
//  Student.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "Person.h"

@interface Student : Person

@property NSString * name;

- (id)initWithAge:(int)age andName:(NSString *)name;
@end
