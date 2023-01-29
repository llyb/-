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
	
	// ����ı�ֵӦ�ö���Ϊ���������ͳ�������
	bool operator==(const YouTuBeChannel& y) const{
		return this->Name == y.Name;
	}

	
};

// �������ﴫ���õ���������Ϊֵ���ݵĸ�����Ļ�ܴ�
ostream& operator<<(ostream& COUT, YouTuBeChannel& ytChannel) // ע����������ͨ����һ�����ε�������ȫ���Ե�
{
	COUT << "Name��" << ytChannel.Name << endl;
	COUT << "SubscribesCount��" << ytChannel.SubscribesCount << endl;
	return COUT; // Ϊ�������Ǻ������ܽ��������������ǵķ���ֵ������cout���͵ģ��൱�ڸ�cout�����������������
}

struct MyCollection {
	list<YouTuBeChannel> myChannels;

	// ������������������أ���������ֻ��д�ڶ�����������
	void operator+=(YouTuBeChannel& channel) {
		this->myChannels.push_back(channel);
	}

	void operator-=(YouTuBeChannel& channel) {
		myChannels.remove(channel); // ����remove���õ������ṹ��ıȽϣ����Ի�Ҫ������������
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

	// cout << y1;  ���������һ���ṹ���ڵĶ���������<<���������û���Ѿ�����õ���Ӧ�������������ǿ����Զ���
	
	//cout << y1; // ����ֵΪvoid���ͣ�����<<�������õ�����void���͵ģ����Ժ��治�ܽ�����������
	
	//cout << y1 << y2 << endl; // ���غ����������÷��غ����ǵ�cout��ӵ�������������

	MyCollection myCollection;
	myCollection += y1;
	myCollection += y2;
	myCollection -= y1;

	cout << myCollection << endl;
	return 0;
}