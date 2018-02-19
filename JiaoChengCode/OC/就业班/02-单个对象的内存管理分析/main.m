//
//  main.m
//  02-单个对象的内存管理分析
//
//  Created by aplle on 14-3-17.
//
//
//内存管理原则(配对原则):只要出现了 new,alloc,retain,就一定配对出现一个release,autorelease
//手动内存管理研究问题方法
//1.野指针操作
//2.内存泄漏

#import <Foundation/Foundation.h>
#import "Person.h"

void test()
{
    //retainCount = 1
    Person * p = [[Person alloc] init];
    
    p.age = 10;
    NSLog(@"%@",p);
    
    //retainCount = 0
    //系统已经将p所指向的对象回收了
    //EXC_BAD_ACCESS 访问了不可访问的内存空间
    //被系统回收的对象我们称之为僵尸对象
    //默认情况下xcode为了提高编码效率,不会时时检查僵尸对象
    
    [p release];
    
    //        NSLog(@"p所指向的对象回收了 %@",p);
    //        p.age = 20;//[p setAge:20];
    [p run];
 
}

void test2()
{
    Person * p = [[Person alloc] init];
    p.age = 20;
    
    NSLog(@"%@",p);
    
    [p release];
    //如果你确定当前作用于中的对象已经不会再被使用了,为了防止野指针操作,通常我们会把不在使用的指针变量赋值为nil
    p = nil;
    
    p.age = 30;//[nil setAge:30];
    [p run]; //[nil run];
    //避免野指针操作的方法 [nil resele]

}
void test3()
{
    /*
     //内存泄漏第一种情况
     //1
     Person * p = [[Person alloc] init];
     
     p.age = 20;
     NSLog(@"%@",p);
     //2
     [p retain];
     
     //3
     [p retain];
     
     //2
     [p release];
     
     //只要对象的retainCount != 0 就会一直存在在内存中
     //内存泄漏指的就是,不再被使用的对象,一直在内存中没有被销毁
     */
    
    /*
     //内存泄漏第二种情况
     //retainCount = 1
     Person * p = [[Person alloc] init];
     p.age = 20;
     [p run];
     
     
     p = nil;
     
     
     [p release];//[nil release];
     */
    
    //1
    Person * p = [[Person alloc] init];
    
    p.age = 20;
    [p run];
    
    Person * p1 = p;
    
    //0
    //        [p release];
    [p1 release];
    
    //野指针操作
    p1.age = 20;

}
void test4()
{
    //1
    Person * p = [[Person alloc] init];
    
    p.age = 20;
    NSLog(@"%@",p);
    
    //0
    [p release];
    
    //野指针操作,当一个对象retainCount已经为0 时,调用retain方法,是不会使得对象起死回生的,同时还会发生野指针操作异常
    [p retain];
}

void test5(Person * p)
{
    p.age = 30;// release retain
    [p retain]; //2
//    [p release];
    NSLog(@"%@",p);
}

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //1
        Person * p = [[Person alloc] init];
        p.age = 20;
        
//        test5(p);
        //1
        [p release];
        //0
        [p release];
   
    }
    return 0;
}

