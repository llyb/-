//// ��Ԫ������������ʹ�ã����ƻ���װ
//// ��Ԫ�ǵ����
//// ��Ԫ���ܱ��̳�
//// ��Ԫ�����������������������
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
//	// �������������һ��ȫ����Ԫ������������ȫ�ֵģ�
//	friend void PrintResults(EquilateralTriangle); // ����ָ�����֣���һ��Ҫָ������
//
//	friend class Homework;
//};
//
//class Homework {
//public:
//	void PrintResults(EquilateralTriangle et) // ���ڲ���ȫ�ֵĺ�����
//	{
//		cout << "circumference��" << et.circumference << endl;
//		cout << "area��" << et.area << endl;
//	}
//};
//
//void PrintResults(EquilateralTriangle et)
//{
//	cout << "circumference��" << et.circumference << endl;
//	cout << "area��" << et.area << endl;
//}
//
//int main()
//{
//	EquilateralTriangle et;
//	et.setA(3);
//
//	// ������������е�˽�б����Ľ��������
//	// 1���������ŵ�public�У��������������˶������Է���
//	// 2��������Ԫ���������ܷ������е�����˽�С����������г�Ա
//	//cout << "circumference��" << et.circumference << endl;
//	//cout << "area��" << et.area << endl;
//
//	PrintResults(et);
//
//	return 0;
//}