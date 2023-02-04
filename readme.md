oop相关教程    
javascript相关教程     
[继承时的构造函数详解](https://blog.csdn.net/aquapisces/article/details/104371658)    
[c++作用域符](https://zhuanlan.zhihu.com/p/137383328)    
[c++动态绑定-虚函数实现多态](https://zhuanlan.zhihu.com/p/110034592)    
```
创建对象的三种方式：

A  a(); // 会隐式调用构造函数

A a = A(); // 显示调用构造函数

// 前两者的区别不大，用完后会自动执行析构函数进行销毁

A *a = new A(); // 创建对象并返回他的地址,之后用指针调用，用完后必须手动delete才能执行析构函数

一般都会使用第三中方法创建对象
```
