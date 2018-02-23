//
//  ViewController.h
//  UI基础
//
//  Created by hexinping on 2018/2/22.
//  Copyright © 2018年 hexinping. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
// 要和控件连线，返回必须是IBAction
- (IBAction) compute;

// 属性要和控件连线，要返回IBoutlet
@property (nonatomic, weak) IBOutlet UITextField *number1;
@property (nonatomic, weak) IBOutlet UITextField *number2;
@property (nonatomic, weak) IBOutlet UILabel *label;
@end

