//
//  main.m
//  01-NSString类
//
//  Created by apple on 14-3-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

//Foundation框架,苹果公司提供给我们的工具箱
//许多的类,(属性,方法)
//闭源的,你看不到源代码
//Foundation中的所有的类文件都是以NS开头,方便统一使用
//NSObject(基类),NSString

//1.类(属性,方法)
//2.能同通过这个类文件作为模板,来创建对象

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
   
//        char * = "asdfg";
        //1.创建字符串的方式
        NSString * str = @"adf";//常量,一旦创建完成就不能够在改变
        
        NSLog(@"%@",str);
        
        //2.new alloc init
        NSString * str1 = [NSString new];
        NSString * str2 = @"ffff";//[[NSString alloc] initWithString:@"ffff"];
        NSString * str3 = [NSString stringWithFormat:@"%@,%@",@"a",@"b"];
        
        char * c = "www";
        NSString * str4 = [[NSString alloc] initWithCString:c encoding:nil];
        
        NSLog(@"str2 %@",str2);
        
        NSLog(@"str4 %@",str4);
        
        
        

        
       
  
    }
    return 0;
}

