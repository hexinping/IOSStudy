//
//  Person.h
//  01-面向对象特性
//
//  Created by apple on 14-3-8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dog.h"
#import "Cat.h"

@interface Person : NSObject
//饲养员 ,专门喂动物
- (void)feedDog:(Dog *)dog;

- (void)feedCat:(Cat *)cat;

// 1000种动物
- (void)feedAnimal:(Animal *)animal;

@end
