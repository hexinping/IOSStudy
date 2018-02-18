//
//  main.m
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    Person *p = [Person new];
    [p setAge:20];
    int a = [p age];
    NSLog(@"a = %d", a);
    
    [p setNo:10];
    [p setName:@"goeji"];
    NSLog(@"no = %d, name = %@", [p no], [p name]);
    
    return 0;
}

