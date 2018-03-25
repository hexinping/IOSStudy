//
//  MJViewController.m
//  02-喜马拉雅
//
//  Created by apple on 14-3-29.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "MJViewController.h"

@interface MJViewController ()
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
/**
 *  最后一个按钮
 */
@property (weak, nonatomic) IBOutlet UIButton *lastBtn;

@end

@implementation MJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // 设置内容尺寸
//    CGFloat contentH = self.lastBtn.frame.origin.y + self.lastBtn.frame.size.height+ 10;
    // 10是底部的间距
    CGFloat contentH = CGRectGetMaxY(self.lastBtn.frame) + 10;
    self.scrollView.contentSize = CGSizeMake(0, contentH);
    
    // 增加额外的滚动区域(在顶部增加64的区域,在底部增加44的区域)
    self.scrollView.contentInset = UIEdgeInsetsMake(64, 0, 44, 0);
    
    // 设置一开始的滚动位置(往下滚动64)
    self.scrollView.contentOffset = CGPointMake(0, -64);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
