//
//  Person.h
//  01-特有语法
//
//  Created by apple on 14-3-9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    @public
    int _age;// 年龄
    int age;
    
    int _no;// 身份证号
    NSString *_name;// 姓名
}

//@property NSString * name;
//@property int no;
@property int age;
@end
