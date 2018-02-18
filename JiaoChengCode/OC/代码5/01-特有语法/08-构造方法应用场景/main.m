//
//  main.m
//  08-构造方法应用场景
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Police.h"

int main(int argc, const char * argv[])
{

/*
    现在有20个特种兵,特种兵随时随地都拥有一把枪
 */
    Police *p = [Police new];
    
//    Gun *gun = [Gun new];
//    [gun setBulletCount:10];
//    [p setGun:gun];
    
    [p fire];
    
    Police *p2 = [[Police alloc] init];
    
//    Gun *gun2 = [Gun new];
//    [gun2 setBulletCount:10];
//    [p2 setGun:gun2];
    
    [p2 fire];

    
    return 0;
}

