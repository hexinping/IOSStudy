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
{
    Car * _car;
    NSString * _name;
}

- (void)setName:(NSString *)name;
- (NSString *)name;

- (void)setCar:(Car *)car;
- (Car *)car;

- (void)drive;

@end
