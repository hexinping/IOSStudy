//
//  MJAppView.h
//  01-应用管理
//
//  Created by apple on 14-3-26.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MJApp, MJAppView;

// 声明一个协议
@protocol MJAppViewDelegate <NSObject>
@optional
- (void)appViewClickedDownloadButton:(MJAppView *)appView;
@end

// 耦合性
@interface MJAppView : UIView

/**
 *  代理
 */
@property (nonatomic, weak) id<MJAppViewDelegate> delegate;

//@property (weak, nonatomic) IBOutlet UIButton *downloadBtn;

//@property (nonatomic, weak) UIView *vcView;
/**
 *  模型数据
 */
@property (nonatomic, strong) MJApp *app;

+ (instancetype)appView;

/**
 *  通过模型数据来创建一个view
 */
+ (instancetype)appViewWithApp:(MJApp *)app;

@end
