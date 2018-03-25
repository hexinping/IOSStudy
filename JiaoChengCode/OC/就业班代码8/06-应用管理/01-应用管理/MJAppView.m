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
    
    // 2.显示下载成功的信息("成功下载xxx")
    UILabel *label = [[UILabel alloc] init];
    label.text = [NSString stringWithFormat:@"成功下载%@", self.app.name];
    label.font = [UIFont systemFontOfSize:12];
    label.textAlignment = NSTextAlignmentCenter;
    label.textColor = [UIColor whiteColor];
    label.backgroundColor = [UIColor blackColor];
    label.frame = CGRectMake(0, 0, 150, 25);
    label.center = CGPointMake(160, 240);
    label.alpha = 0.0;
    
    // 巧妙利用控件的尺寸和圆角半径,能产生一个圆
    label.layer.cornerRadius = 5;
    // 超出主层边界的内容统统剪掉
//    label.layer.masksToBounds = YES;
    label.clipsToBounds = YES;
    
    [self.superview addSubview:label];
    
    // 3.动画
    [UIView animateWithDuration:1.0 animations:^{
        label.alpha = 0.5;
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:1.0 delay:1.0 options:UIViewAnimationOptionCurveLinear animations:^{
            label.alpha = 0.0;
        } completion:^(BOOL finished) {
            [label removeFromSuperview];
        }];
    }];
}
@end
