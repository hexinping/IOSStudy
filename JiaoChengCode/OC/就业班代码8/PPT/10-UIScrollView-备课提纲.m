1.PPT介绍什么是UIScrollView

2.新建项目“大图片展示”
* 尽量用storyboard，减少代码
* 设置contentSize属性
* 取消autolayout
* 说明frame.size和contentSize的区别

3.介绍UIScrollView的代理
* 看PPT
* 演示3个代理方法的使用
// 用户开始拖拽时调用
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView;
// 滚动到某个位置时调用
- (void)scrollViewDidScroll:(UIScrollView *)scrollView;
// 用户结束拖拽时调用
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;

4.演示scrollView的常见属性
* contentOffset
* contentInset
... ...

5.新建项目“喜马拉雅”

6.新建项目“图片缩放”
* PPT
* 代码演示

7.新建项目“图片轮播器”
* 分页展示图片
* UIPageControl的使用
* NSTimer的使用
(虽然用storyboard搭建界面，但是也要说清楚对应的代码操作方式)