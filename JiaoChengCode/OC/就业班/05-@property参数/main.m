//
//  main.m
//  05-@property参数
//
//  Created by apple on 14-3-17.
//
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        Person * p = [[Person alloc] init];
        
        Car * car = [[Car alloc] init];
        
        //car 2
        [p setCar:car];
        
        //car 1
        [car release];
        

        
        [p abc:100];
        int b = [p zhuanghuimei];
        p.height = 100;//[p abc:10];
        NSLog(@"he %d",p.height);//[p zhuanghuimei];
        //p 0
        
        
        
        [p isDeid:YES];
        [p isDeid];
        p.isDeid = YES;
        BOOL result  = p.isDeid;
        
        
        [p release];
    
        
        

        
        
        
        
        
        
        
        
        
        
        
        
    }
    return 0;
}

