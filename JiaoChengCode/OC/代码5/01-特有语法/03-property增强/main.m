//
//  main.m
//  03-property增强
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    Person *p = [Person new];
    [p setAge:33];
//    NSLog(@"_age = %d", p->_age);
//    NSLog(@"age = %d", p->age);
    
    NSLog(@"age = %d", [p age]);
    [p personInfomation];

    return 0;
}

