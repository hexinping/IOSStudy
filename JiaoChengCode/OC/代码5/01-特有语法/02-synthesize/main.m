//
//  main.m
//  02-synthesize
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    Person *p = [Person new];
    [p setAge:10];
//    NSLog(@"age = %d", [p age]);
//    
//    NSLog(@"age = %d, no = %d", p->_age, p->_no);
//
    [p setAge:22];
    NSLog(@"_age = %d, age = %d", p->_age, p->age);
    return 0;
}

