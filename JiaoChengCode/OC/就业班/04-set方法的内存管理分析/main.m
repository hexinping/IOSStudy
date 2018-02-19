//
//  main.m
//  04-set方法的内存管理分析
//
//  Created by apple on 14-3-17.
//
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
         //p  1
        Person * p = [[Person alloc] init];
        
      // c1 1
        Car * c1 = [[Car alloc] init];
        c1.speed = 100;
        
       //c1 2
        [p setCar:c1];
        
        [p drive];
        
         //c1 1
        [c1 release];
        
        
        /*
        [p setCar:c1];
        [p drive];
         */
        
        
       //c2 1
        Car * c2 = [[Car alloc] init];
        c2.speed = 350;
        
        //c2  2
        [p setCar:c2];
        
        
        [p drive];
        
        //c2 1
        [c2 release];
        

        //p 0
        [p release];
        
    }
    return 0;
}

