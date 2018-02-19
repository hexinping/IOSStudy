//
//  main.m
//  06-手动内存管理类相互引用问题
//
//  Created by apple on 14-3-17.
//
//
// 人拥有一辆车 (组合) 车里面座了一个人 (组合)
#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        Person * p = [[Person alloc] init];
        
        Car * car = [[Car alloc] init];
        
        [p setCar:car];
        [car setPerson:p];
        
        [car run];
        
        [car release];
        
        [p release];
        
      
        
    }
    return 0;
}

