//
//  main.m
//  06-字符串写入文件
//
//  Created by apple on 14-3-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //将字符串写入到文件
        NSString * content = @"浙江冰雹,如汤圆大小,习近平万岁";
        NSString * path = @"/Users/aplle/Desktop/共享课堂/mytest.txt";
        //1.参数1 要给入文件目录(并且要包括文件名称)
        //2.atomically : YES
        //3.NSUTF8StringEncoding 国际通用的编码格式
        //4.NSError 是用来记录错误信息的
        NSError * error;
        BOOL isWriteSuccess = [content writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:&error];
        
        if(isWriteSuccess)
        {
            NSLog(@"文件创建成功");
        }
        else
        {
            NSLog(@"error %@",error);
        }
        
        
    }
    return 0;
}

