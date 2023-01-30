#include <iostream>

using namespace std;

// 抽象类的书写和作用
// 签署合同那么必须实现里面的所有内容
class AbstractEmployee // 使用抽象类模拟接口，将复杂的逻辑隐藏起来，只留下基本的操作函数
{
	virtual void AskForPromotion() = 0; // 纯虚函数或者叫抽象函数，强制执行
}; // 相当于智能手机的按钮，我们不用去管它的实现有多么复杂，只用知道他的里面有这样一个方法可以去调用就行了

class Employee : AbstractEmployee {
// 子类不会继承父类中的构造函数
// 子类一定要调用父类的构造函数，当父类的构造函数没有参数的时候可以不显示调用，当父类的构造函数有参数的时候一定要显示调用传入参数
public:
	string Company;
	int Age;

protected:
	string Name;

public:
	// 没有返回类型
	// 构造函数名和类名相同
	// public，否则将无法访问
	// 构造函数会在创建对象的时候执行，但执行的是哪一个取决与函数的参数

	Employee(string name, string company, int age) { 
		Name = name;
		Company = company;
		Age = age;
	}

	// 将一些属性设置为private是为了防止恶意篡改，我们可以增加一些方法来对修改和访问增加一些限制即可
	// 这就是set 和 get的作用
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}
	void AskForPromotion() { // 子类必须要实现抽象类中的方法
		if (Age > 20) {
			cout << Name << " " << "got promoted!" << endl;
		}
		else {
			cout << Name << "no promotion for you !" << endl;
		}
	}

	// 基类指针指向子类的时候会起到作用，其余时候会正常调用
	virtual void Work(){ // 虚函数，在调用此函数时会检查子类中是否有相同的函数实现过，如果有那就执行那个函数
		cout << Name << " " << "is checking email, task backlog, performing tassks" << endl;
	}
};

// 继承默认为私有继承， 且这里没有直接签订抽象类的合同，不用重新实现
class Developer : public Employee {
public:
	string FavProgramingLanguage;

	Developer(string name, string company, int age, string favProgramingLanguage) 
		: Employee(name, company, age) // 因为父类的构造函数有参数所以要显式调用父类的构造函数
	{
		FavProgramingLanguage = favProgramingLanguage;
	}
	void FixBug() {
		cout << Name << "fixed bug using " << FavProgramingLanguage << endl;
	}

	void Work(){
		cout << Name << " " << "is writing " << FavProgramingLanguage << " code" << endl;
	}
};

class Teacher : public Employee{
public:
	string Subject;
	void PrepareLesson() {
		cout << Name << " is preparing" << Subject << " lesson" << endl;
	}
	Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
	{
		Subject = subject;
	}
	void Work(){
		cout << Name << " " << " is teaching" << Subject << endl;
	}
};

int main()
{
	Employee employee1 = Employee("lyb", "xxx", 25);

	employee1.AskForPromotion();

	Developer d = Developer("lyb", "xxx", 30, "c++");
	d.FixBug();

	Teacher t = Teacher("Jack", "Coll School", 35, "History");

	d.Work();
	t.Work();

	// 多态性
	Employee* e1 = &d;
	Employee* e2 = &t;
	
	e1->Work();
	e2->Work();

	return 0;
}
