//
//  main.m
//  03-字符串的判断
//
//  Created by apple on 14-3-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+NSStringExt.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //1.判断字符串是否为空
        NSString  * str = @"";
        if (str == nil || str.length == 0)
        {
            NSLog(@"字符串为空");
        }
        
        //2.判断字符串是否已指定的内容开头
        NSString * str2 = @"www.itcast.cn";
        BOOL isPerfix = [str2 hasPrefix:@"xww"];
        NSLog(@"hasPerfix %@",isPerfix ? @"YES" : @"NO" );
        
        //3.判断字符串是否以指定的内容结尾
        //在开发中中常用在 判断文件格式
        //.txt .avi,.rmvb mkv doc mp3,mp4 pdf
        NSString * str3 = @"www.itcast.cn.txtttt";
        BOOL isSuffix = [str3 hasSuffix:@".txt"];
        NSLog(@"hasSuffix %@",isSuffix ? @"YES" : @"NO" );
        
        //4.判断两个字符串是否相等
        //字符串池,{ abc }
        NSString * pstr1 = @"abc";
        NSString * pstr2 = @"abc";
        NSString * pstr3 = pstr1;
        
        NSLog(@"pstr1 %p",pstr1);
        NSLog(@"pstr2 %p",pstr2);
        
        if (pstr1 == pstr2)
        {
            NSLog(@"== 判断 pstr1 与 pstr2相等");
        }
        if (pstr1 == pstr3)
        {
            NSLog(@"== 判断 pstr1 与 pstr3相等");
        }
        
        NSString * pstr5 = [NSString stringWithFormat:@"%@",@"abcd"];
        NSLog(@"pstr5 %@",pstr5);
        //使用 ==号 判断两个字符串 实际上是判断的字符串地址是否相同
        //如果地址相同的话,两个字符串相等
        NSLog(@"pstr5 %p",pstr5);
        
        if (pstr5 == pstr3)
        {
            NSLog(@"== 判断 pstr5 与 pstr1相等");
        }
        
        //在实际的开发中,切记不要使用== 号去判断两个字符串是否相等
        //
        //判断两个字符串是否相等,必须使用NSString提供给我们的方法
        //isEqualToString //abc
        //1.判断两个字符串指针地址是否相等,如果相等直接返回yes
        //2.取出字符串中的每一个字符进行比较,
        BOOL isEqual = [pstr5 isEqualToString:pstr3];
        NSLog(@"isEqual %@",isEqual ? @"YES" : @"NO" );
        
        BOOL isEqual2 = [pstr5 myIsEqual:pstr3];
        NSLog(@"isEqual2 %@",isEqual2 ? @"YES" : @"NO" );
        
        /*
         - (void)setName:(NSString *)name
         {
         //内存管理set方法中,判断两个字符串是否相等,一定不能够使用 isEqualToString方法
         //因为,我们就是要判断两个字符串的指真地址是否相等
            if (_name != name)
            {
                [_name release];
                 _name = [name reatain];
            }
         }
         
         */
        
        //6.compare 是isEqualToString的增强版本
        //Ascii值大小  a 小于 b
        NSString * strTmp1 = @"abc"; //a 97 b 98
        NSString * strTmp2 = @"bbc";
        NSComparisonResult result = [strTmp1 compare:strTmp2];
//        NSLog(@"result %d",result);
        
        switch (result) {
                
            case NSOrderedAscending:
                NSLog(@"NSOrderedAscending");
                break;
            case NSOrderedSame:
                NSLog(@"两个字符串相等");
                break;
            case NSOrderedDescending:
                NSLog(@"NSOrderedDescending");
                break;
                
            default:
                break;
        }
        
        
    }
    
    //模拟isEqualToString的内部实现
    //1.判断两个字符串指针地址是否相等,如果相等直接返回yes
    //2.取出字符串中的每一个字符进行比较,
    
    
   
    
    return 0;
}

