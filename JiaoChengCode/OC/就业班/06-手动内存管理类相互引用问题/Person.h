//
//  Person.h
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import <Foundation/Foundation.h>
#import "Car.h"

@interface Person : NSObject

@property(nonatomic,retain) Car * car;

- (void)eat;

@end
