//
//  MJAppView.m
//  01-应用管理
//
//  Created by apple on 14-3-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "MJAppView.h"
#import "MJApp.h"

@interface MJAppView()
@property (weak, nonatomic) IBOutlet UIImageView *iconView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
- (IBAction)download:(UIButton *)sender;
@end

@implementation MJAppView

+ (instancetype)appViewWithApp:(MJApp *)app
{
    NSBundle *bundle = [NSBundle mainBundle];
    // 读取xib文件(会创建xib中的描述的所有对象,并且按顺序放到数组中返回)
    NSArray *objs = [bundle loadNibNamed:@"MJAppView" owner:nil options:nil];
    MJAppView *appView = [objs lastObject];
    appView.app = app;
    return appView;
}

+ (instancetype)appView
{
    return [self appViewWithApp:nil];
}

- (void)setApp:(MJApp *)app
{
    _app = app;
    
    // 1.设置图标
    self.iconView.image = [UIImage imageNamed:app.icon];
    
    // 2.设置名称
    self.nameLabel.text = app.name;
}

/**
 *  下载
 */
- (IBAction)download:(UIButton *)btn {
    // 1.让按钮失效(文字变为"已下载")
    btn.enabled = NO;
    
    // 2.通知代理
//    [self.delegate appViewClickedDownloadButton:self];
    if ([self.delegate respondsToSelector:@selector(appViewClickedDownloadButton:)]) {
        [self.delegate appViewClickedDownloadButton:self];
    }
}
@end
