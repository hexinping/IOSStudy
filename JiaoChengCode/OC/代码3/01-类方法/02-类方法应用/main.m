//
//  main.m
//  02-类方法应用
//
//  Created by apple on 14-3-6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iphone.h"


int main(int argc, const char * argv[])
{

    Iphone *ip = [Iphone new];
    ip->_cpu = 2;
    ip->_size = 3.7;
    ip->_color = kIColorTuHaoJin;
    [ip aboutMyPhone];
    
    return 0;
}

