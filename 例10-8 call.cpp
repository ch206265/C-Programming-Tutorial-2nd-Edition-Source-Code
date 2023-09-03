#include <iostream>
using namespace std;
//����һ��ģ�庯��func()
template <typename T,typename U>
T func(T t, U u)
{
	static int count = 0;
	count++;
	cout << "count= " << count << ",&count = " << &count << endl;
	return u(t);
}
//������ͨ����square()���������������ƽ��
int square(int a)
{
	return a * a;
}
class Student			//������Student
{
private:
	int _id;
public:
	Student(int id = 1001) :_id(id) {}
	int operator()(int num) { return _id + num; }
};
int main()
{
	int x = 10;
	//����func()�������ڶ�����������square()������
	cout << "square()������" << func(x, square) << endl;
	//����func()�������ڶ�����������º���Student()
	cout << "Student�ࣺ" << func(x, Student(1002)) << endl;
	//����func()�������ڶ�����������lambda���ʽ
	cout << "lambda���ʽ��" << func(x, [](int b) {return b/2; }) << endl;
	return 0;
}
