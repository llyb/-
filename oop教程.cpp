//#include <iostream>
//
//using namespace std;
//
//// ���������д������
//// ǩ���ͬ��ô����ʵ���������������
//class AbstractEmployee // ʹ�ó�����ģ��ӿڣ������ӵ��߼�����������ֻ���»����Ĳ�������
//{
//	virtual void AskForPromotion() = 0; // ���麯�����߽г�������ǿ��ִ��
//}; // �൱�������ֻ��İ�ť�����ǲ���ȥ������ʵ���ж�ô���ӣ�ֻ��֪����������������һ����������ȥ���þ�����
//
//class Employee : AbstractEmployee {
// // ���಻��̳и����еĹ��캯��
// // ����һ��Ҫ���ø���Ĺ��캯����������Ĺ��캯��û�в�����ʱ����Բ���ʾ���ã�������Ĺ��캯���в�����ʱ��һ��Ҫ��ʾ���ô������
//public:
//	string Company;
//	int Age;
//
//protected:
//	string Name;
//
//public:
//	// û�з�������
//	// ���캯������������ͬ
//	// public�������޷�����
//	// ���캯�����ڴ��������ʱ��ִ�У���ִ�е�����һ��ȡ���뺯���Ĳ���
//
//	Employee(string name, string company, int age) { 
//		Name = name;
//		Company = company;
//		Age = age;
//	}
//
//	// ��һЩ��������Ϊprivate��Ϊ�˷�ֹ����۸ģ����ǿ�������һЩ���������޸ĺͷ�������һЩ���Ƽ���
//	// �����set �� get������
//	void setName(string name)
//	{
//		Name = name;
//	}
//	string getName()
//	{
//		return Name;
//	}
//	void AskForPromotion() { // �������Ҫʵ�ֳ������еķ���
//		if (Age > 20) {
//			cout << Name << " " << "got promoted!" << endl;
//		}
//		else {
//			cout << Name << "no promotion for you !" << endl;
//		}
//	}
//
//	// ����ָ��ָ�������ʱ��������ã�����ʱ�����������
//	virtual void Work(){ // �麯�����ڵ��ô˺���ʱ�����������Ƿ�����ͬ�ĺ���ʵ�ֹ���������Ǿ�ִ���Ǹ�����
//		cout << Name << " " << "is checking email, task backlog, performing tassks" << endl;
//	}
//};
//
//// �̳�Ĭ��Ϊ˽�м̳У� ������û��ֱ��ǩ��������ĺ�ͬ����������ʵ��
//class Developer : public Employee {
//public:
//	string FavProgramingLanguage;
//
//	Developer(string name, string company, int age, string favProgramingLanguage) 
//		: Employee(name, company, age) // ��Ϊ����Ĺ��캯���в�������Ҫ��ʽ���ø���Ĺ��캯��
//	{
//		FavProgramingLanguage = favProgramingLanguage;
//	}
//	void FixBug() {
//		cout << Name << "fixed bug using " << FavProgramingLanguage << endl;
//	}
//
//	void Work(){
//		cout << Name << " " << "is writing " << FavProgramingLanguage << " code" << endl;
//	}
//};
//
//class Teacher : public Employee{
//public:
//	string Subject;
//	void PrepareLesson() {
//		cout << Name << " is preparing" << Subject << " lesson" << endl;
//	}
//	Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
//	{
//		Subject = subject;
//	}
//	void Work(){
//		cout << Name << " " << " is teaching" << Subject << endl;
//	}
// };
//
//int main()
//{
//	Employee employee1 = Employee("lyb", "xxx", 25);
//
//	employee1.AskForPromotion();
//
//	Developer d = Developer("lyb", "xxx", 30, "c++");
//	d.FixBug();
//
//	Teacher t = Teacher("Jack", "Coll School", 35, "History");
//
//	d.Work();
//	t.Work();
//
//	// ��̬��
//	Employee* e1 = &d;
//	Employee* e2 = &t;
//	
//	e1->Work();
//	e2->Work();
//
//	return 0;
//}