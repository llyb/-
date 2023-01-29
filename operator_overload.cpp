#include <iostream>
#include <list>

using namespace std;

struct YouTuBeChannel
{
private:
	string Name;
	int SubscribesCount;
	friend ostream& operator<<(ostream& COUT, YouTuBeChannel& ytChannel);
public:
	YouTuBeChannel(string name, int subscribesCount)
	{
		Name = name;
		SubscribesCount = subscribesCount;
	}
	
	// 不会改变值应该定义为常量函数和常量变量
	bool operator==(const YouTuBeChannel& y) const{
		return this->Name == y.Name;
	}

	
};

// 我们这里传引用的作用是因为值传递的复制损耗会很大
ostream& operator<<(ostream& COUT, YouTuBeChannel& ytChannel) // 注意这里向普通函数一样传参调用是完全可以的
{
	COUT << "Name：" << ytChannel.Name << endl;
	COUT << "SubscribesCount：" << ytChannel.SubscribesCount << endl;
	return COUT; // 为了让我们后续还能接其他东西，我们的返回值还得是cout类型的，相当于给cout加上了这个运算类型
}

struct MyCollection {
	list<YouTuBeChannel> myChannels;

	// 这里是类内运算符重载，所以我们只用写第二个参数即可
	void operator+=(YouTuBeChannel& channel) {
		this->myChannels.push_back(channel);
	}

	void operator-=(YouTuBeChannel& channel) {
		myChannels.remove(channel); // 但是remove会用到两个结构体的比较，所以还要重载相等运算符
	}
};

ostream& operator<<(ostream& COUT, MyCollection& mycollection)
{
	for (auto x : mycollection.myChannels) COUT << x << endl;
	return COUT;
}

int main()
{
	YouTuBeChannel y1 = YouTuBeChannel("a", 21);
	YouTuBeChannel y2 = YouTuBeChannel("b", 21);

	// cout << y1;  我们想输出一个结构体内的东西，但是<<运算符两边没有已经定义好的相应变量，于是我们可以自定义
	
	//cout << y1; // 返回值为void类型，经过<<运算符后得到的是void类型的，所以后面不能接其他东西了
	
	//cout << y1 << y2 << endl; // 重载函数加上引用返回后我们的cout就拥有上面的属性了

	MyCollection myCollection;
	myCollection += y1;
	myCollection += y2;
	myCollection -= y1;

	cout << myCollection << endl;
	return 0;
}