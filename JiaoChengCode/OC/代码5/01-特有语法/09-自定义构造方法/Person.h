//
//  Person.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kGenderMale,
    kGenderFemale
}Gender;

@interface Person : NSObject

@property int age;

@property Gender gender;

- (id)initWithAge:(int)age;

- (id)initWithAge:(int)age andGender:(Gender)gender;

- (void)infomation;
@end
