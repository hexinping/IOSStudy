//
//  main.m
//  04-get/set方法重写
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    Person *p = [Person new];
//    [p setAge:12];
    
    [p setAge:-12];
    [p setName:@"goeji"];
    NSLog(@"age = %d, name = %@", [p age], [p name]);
    return 0;
}

