

//
//  main.m
//  03-多个对象的内存管理分析
//
//  Created by apple on 14-3-17.
//
//

#import <Foundation/Foundation.h>

//人拥有一辆汽车
#import "Person.h"


//1.野指针问题
//2.内存泄漏问题
int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // 1
        Person * p = [[Person alloc] init];
        
        // 1
        Car * car = [[Car alloc] init];
    
        //2
        [p setCar:car];
        
        [p drive];
     
       
        //1
        [car release];
        
        //要保证对象p 存在的时候,调用对象p的任何方法都不会出错
        [p drive];
        
        //0
        [p release];
        
    }
    return 0;
}

