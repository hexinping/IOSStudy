//
//  main.m
//  12-类的互引用
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "Car.h"

int main(int argc, const char * argv[])
{

    Car *c = [[Car alloc]init];
    Person *p = [[Person alloc]init];
    [p setName:@"lee"];
    [c run:p andAddress:@"马来西亚"];
    
    return 0;
}

