 //
//  main.m
//  05-类注意点
//
//  Created by apple on 14-3-4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Person : NSObject
{
@public
    int _age;
}

- (void)run;
@end

@implementation Person

@end

int main(int argc, const char * argv[])
{
//    1.只有类的声明没有实现
    Person *p = [Person new];
    p->_age = 30;
    NSLog(@"age = %d", p->_age);
    
    [p run];
//    2.缺少@end
//    3.不能把实现写到声明中同理,声明也不能写到实现中,不能嵌套
//    4.不能把类的声明实现写到函数中
//    5.成员变量必须写到声明的大括号中
//    6.声明成员变量不能直接赋值
//    7.OC的弱语法:注意,没有声明同样可以定义一个类,(实际开发中千万不要这样干,带好安全帽)
    
    /*
    f  经典错误:
     '-[Person run]: unrecognized selector sent to instance 0x100103410'
     
     */
    
    
    return 0;
}

