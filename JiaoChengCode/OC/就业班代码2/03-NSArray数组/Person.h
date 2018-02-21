//
//  Person.h
//  02-集合类
//
//  Created by apple on 14-3-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic,strong)NSString * name;
@property (nonatomic,assign)int age;

- (id)initWithName:(NSString *)name andAge:(int)age;

@end
