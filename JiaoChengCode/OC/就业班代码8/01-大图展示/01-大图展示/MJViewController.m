//
//  MJViewController.m
//  01-大图展示
//
//  Created by apple on 14-3-29.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "MJViewController.h"

@interface MJViewController ()
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIImageView *minionView;
- (IBAction)scroll;

@end

@implementation MJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // 设置scrollView内容的尺寸(滚动的范围)
//    self.scrollView.contentSize = CGSizeMake(892, 480);
//    self.scrollView.contentSize = self.minionView.image.size;
    self.scrollView.contentSize = self.minionView.frame.size; // 总体内容的范围(滚动范围)
    // <#CGFloat top#>, <#CGFloat left#>, <#CGFloat bottom#>, <#CGFloat right#>
    
    self.scrollView.contentInset = UIEdgeInsetsMake(10, 20, 40, 80);
    
//    self.scrollView.frame.size; // 可视范围
}

- (IBAction)scroll {
//    [UIView animateWithDuration:1.0 animations:^{
//        self.scrollView.contentOffset = CGPointMake(100, 0);
//    }];
    
//    CGPoint offset = CGPointMake(-100, -100);
    CGPoint offset = self.scrollView.contentOffset;
    offset.x += 10;
    offset.y += 10;
    [self.scrollView setContentOffset:offset animated:YES];
}
@end
