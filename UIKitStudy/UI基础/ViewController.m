//
//  ViewController.m
//  UI基础
//
//  Created by hexinping on 2018/2/22.
//  Copyright © 2018年 hexinping. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (void) compute
{
//    NSLog(@"点击计算按钮");
    NSString *text1 = self.number1.text;
    NSString *text2 = self.number2.text;
    
    int sum = text1.intValue + text2.intValue;
    
    self.label.text = [NSString stringWithFormat:@"%d",sum];
    
}
@end
