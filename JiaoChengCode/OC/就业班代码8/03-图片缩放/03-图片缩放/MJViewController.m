//
//  MJViewController.m
//  03-图片缩放
//
//  Created by apple on 14-3-29.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "MJViewController.h"

@interface MJViewController () <UIScrollViewDelegate>
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIImageView *minionView;
@end
// 代理 \ 委托

@implementation MJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // 设置内容尺寸
    self.scrollView.contentSize = self.minionView.frame.size;
    
    // 设置
    self.scrollView.delegate = self;
    
    // 设置最大和最小的缩放比例
    self.scrollView.maximumZoomScale = 2.0;
    self.scrollView.minimumZoomScale = 0.2;
}

/**
 *  当用户开始拖拽scrollView时就会调用
 */
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    NSLog(@"开始拖拽-----");
}

/**
 *  只要scrollView正在滚动,就会调用
 */
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    NSLog(@"----正在滚动--%@", NSStringFromCGPoint(scrollView.contentOffset));
}

/**
 *  当用户使用捏合手势的时候会调用
 *
 *  @return 返回的控件就是需要进行缩放的控件
 */
- (UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView
{
    NSLog(@"----开始缩放");
    return self.minionView;
}

/**
 *  正在缩放的时候会调用
 */
- (void)scrollViewDidZoom:(UIScrollView *)scrollView
{
    NSLog(@"----正在缩放");
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
