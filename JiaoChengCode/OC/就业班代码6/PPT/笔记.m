1.Xcode自带头文件的路径
/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.1.sdk/System/Library/Frameworks/UIKit.framework/Headers

2.修改了系统自带头文件后,Xcode会报错
解决方案:删掉下面文件夹的缓存即可(aplle是电脑的用户名)
/Users/aplle/资源库/Developer/Xcode/DerivedData
或者
/Users/aplle/Library/Developer/Xcode/DerivedData

3.使用xib封装一个自定义view的步骤
1> 新建一个继承UIView的自定义view,假设类名叫做(MJAppView)
2> 新建一个MJAppView.xib文件来描述MJAppView内部的结构
3> 修改UIView的类型为MJAppView真是类型
4> 将内部的子控件跟MJAppView进行属性连线
5> MJAppView提供一个模型属性
6> 重写模型属性的set方法,因为在set方法中可以拿到外界传递的模型数据
7> 把模型数据拆开,分别设置数据到对应的子控件中
8> 补充:提供一个创建MJAppView的类方法,将读取xib文件的代码屏蔽起来

