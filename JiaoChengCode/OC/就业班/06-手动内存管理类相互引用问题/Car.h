//
//  Car.h
//  01-手动内存管理基本概念
//
//  Created by apple on 14-3-17.
//
//

#import <Foundation/Foundation.h>
@class Person;

@interface Car : NSObject

//如果你的程序出现相互引用问题,那么一端要改成assign方式,不能够使用retain(回导致内存泄漏问题)
@property (nonatomic,assign)Person * person;

- (void)run;

@end
