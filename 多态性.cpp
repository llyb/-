// 虚函数 纯虚函数 抽象类

// 虚函数是在基类中定义，然后在派生类中重新定义的函数
// 作用：运行时多态
// 基类就相当于是你的老板，老板下发命令让它的所有员工去干一件事，每个员工应该干的是自己的事，而不是老板干的事

// 抽象类是具有至少一个纯虚函数的类
// 纯虚函数是在当前类中没有具体实现，在继承的类中必须实现的函数
// 和接口的作用是一样的，相当于手机的按键，将复杂的逻辑封装起来，只展示简单的功能

#include <iostream>

using namespace std;

class Instrument {
public:
	//// 虚函数
	//virtual void MakeSound() { // 加上virtual之后就会执行他的派生版本
	//	cout << "Instrument playing..." << endl;
	//}

	// 纯虚函数
	virtual void MakeSound() = 0;
};

class Piano : public Instrument {

};

class Accordion : public Instrument {
	void MakeSound() {
		cout << "Accordion playing..." << endl;
	}
};

int main()
{
	Instrument* i1 = new Accordion();
	i1->MakeSound();

	//Instrument* i2 = new Piano();
	//i2->MakeSound();

	return 0;
}