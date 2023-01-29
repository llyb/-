//// 友元函数尽量减少使用，会破坏封装
//// 友元是单向的
//// 友元不能被继承
//// 友元函数经常被用来重载运算符
//
//#include <iostream>
//
//using namespace std;
//
//class EquilateralTriangle
//{
//private:
//	float a;
//	float circumference;
//	float area;
//public:
//	void setA(float length) {
//		a = length;
//		circumference = a * 3;
//		area = (1.73 * a * a) / 4;
//	}
//
//	// 声明：这是你的一个全局友元函数（函数是全局的）
//	friend void PrintResults(EquilateralTriangle); // 不必指定名字，但一定要指定类型
//
//	friend class Homework;
//};
//
//class Homework {
//public:
//	void PrintResults(EquilateralTriangle et) // 现在不是全局的函数了
//	{
//		cout << "circumference：" << et.circumference << endl;
//		cout << "area：" << et.area << endl;
//	}
//};
//
//void PrintResults(EquilateralTriangle et)
//{
//	cout << "circumference：" << et.circumference << endl;
//	cout << "area：" << et.area << endl;
//}
//
//int main()
//{
//	EquilateralTriangle et;
//	et.setA(3);
//
//	// 我们想访问类中的私有变量的解决方法：
//	// 1、将变量放到public中，但问题是所有人都将可以访问
//	// 2、设置友元函数，他能访问类中的所有私有、保护、公有成员
//	//cout << "circumference：" << et.circumference << endl;
//	//cout << "area：" << et.area << endl;
//
//	PrintResults(et);
//
//	return 0;
//}