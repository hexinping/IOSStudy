//
//  main.m
//  02-字符串的获取
//
//  Created by apple on 14-3-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 1.获取字符串
 2.根据索引获得单个字符
 3.根据索引获得一个子串
 4.根据字符串获得,该字符串在另一个字符串中的索引位置
 5.根据字符串,获得字符串的范围
 */

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
    //1.获取字符串的长度
        NSString * str = @"abcd";
        NSUInteger length =   [str length]; //str.length;
        NSLog(@"字符串长度 %lu",length);
        
    //2.根据索引获得单个字符
        NSString * str2 = @"www.itcast.cn";
        //如果你给定的索引值,超出了字符串的长度,就会导致异常Range or index out of bounds
        //如果你给入的是一个负数那么获得的值就是一个乱码
        unichar c = [str2 characterAtIndex:2];//索引值是从 0 开始的
        NSLog(@"获得字符 %c",c);
        
    //3.根据索引获得字符串的一个子串
        NSString * str3 = @"www.itcast.com";
        //substringFromIndex 从给定的索引开始(包含该索引位置)截取到字符串末尾
        NSString * tmpStr = [str3 substringFromIndex:3];
        NSLog(@"substringFromIndex %@ ",tmpStr);
        
        //substringToIndex截取字符串到给定索引的位置结束,(不包含该索引位置);qishisuo
        NSString * tmpStr2 = [str3 substringToIndex:3];
        NSLog(@"substringToIndex %@",tmpStr2);
        
        NSLog(@"str3 %@",str3);
        
    //4.截取字符串的某一段/Volumes/aplle/Desktop/共享课堂/0320/代码/01-NSString类/01-NSString类.xcodeproj
        NSRange rang = {4,6};
        //location (起始索引的位置,包含该索引) length(要截取的长度)
        NSString * tmpStr3 = [str3 substringWithRange:rang];
        
        NSLog(@"substringWithRange %@",tmpStr3);
    //5.获得一个字符串的索引位置
        NSString * tmpStr4 = @"it";//@"itcast";
        NSRange tmpRange = [str3 rangeOfString:tmpStr4];
        //可以使用NSStringFromRange 把一个Range结构体转换成字符串
    
//        NSLog(@"location = %d,length = %d",tmpRange.location,tmpRange.length);
        //NSNotFound 没有找到
        if (tmpRange.location == NSNotFound)
        {
            NSLog(@"tmpStr4 不在 Str3中");
        }else
        {
            NSLog(@"rangeOfString %@",NSStringFromRange(tmpRange));
        }
    //6.获的一个字符串索引范围
        NSRange tmpRange2 = [str3 rangeOfString:@"itcast" options:NSCaseInsensitiveSearch];
        
        NSLog(@"rangeOfString1 %@",NSStringFromRange(tmpRange2));
        
    }
    return 0;
}

