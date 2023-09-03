#include <iostream>
#include <functional>
//#include "function.h"
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
	function<int(int)> fi1 = square;
	function<int(int)> fi2 = Student(1002);
	function<int(int)> fi3 = [](int b) {return b / 2; };
	cout << "square()������" << func(x, fi1) << endl;
	cout << "Student�ࣺ" << func(x, fi2) << endl;
	cout << "lambda���ʽ��" << func(x, fi3) << endl;
	return 0;
}
