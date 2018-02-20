//
//  main.m
//  07-从文件中读取字符串内容
//
//  Created by apple on 14-3-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
    
    //要给出文件路径
        //你写入文件的时候,使用的是什么编码格式,读取的时候就要给我用什么编码格式
        NSString * path = @"/Users/aplle/Desktop/共享课堂/mytest.txt";
        NSError * error;
        NSString * str = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:&error];
        
        if (error != nil)
        {
            NSLog(@"error message %@",error);
        }
        else
        {
            NSLog(@"str content %@",str);
        }
        
    }
    return 0;
}

