//
//  main.m
//  09-自定义构造方法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

//    Person *p = [[Person alloc] init];
    
    Person *p = [[Person alloc]initWithAge:20];
    [p infomation];
    
//    当想让某个对象一出生就拥有指定的属性的时候就可以使用自定义构造方法
    Person *p1 = [[Person alloc]initWithAge:38 andGender:kGenderFemale];
    [p1 infomation];
    
    Person *p2 = [[Person alloc]init];
    [p2 setAge:48];
    [p2 setGender:kGenderFemale];
    [p2 infomation];
    return 0;
}

