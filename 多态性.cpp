// �麯�� ���麯�� ������

// �麯�����ڻ����ж��壬Ȼ���������������¶���ĺ���
// ���ã�����ʱ��̬
// ������൱��������ϰ壬�ϰ��·���������������Ա��ȥ��һ���£�ÿ��Ա��Ӧ�øɵ����Լ����£��������ϰ�ɵ���

// �������Ǿ�������һ�����麯������
// ���麯�����ڵ�ǰ����û�о���ʵ�֣��ڼ̳е����б���ʵ�ֵĺ���
// �ͽӿڵ�������һ���ģ��൱���ֻ��İ����������ӵ��߼���װ������ֻչʾ�򵥵Ĺ���

#include <iostream>

using namespace std;

class Instrument {
public:
	//// �麯��
	//virtual void MakeSound() { // ����virtual֮��ͻ�ִ�����������汾
	//	cout << "Instrument playing..." << endl;
	//}

	// ���麯��
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