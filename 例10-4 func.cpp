#include <iostream>
using namespace std;
class A					//������A
{
public:
	A() { cout << "���캯��" << endl; }
	A(const A& a) { cout << "�������캯��" << endl; }
	~A() { cout << "��������" << endl; }
};
A func()				//����func()����
{
	A a;				//��������a
	return a;			//���ض���a
}
int main()
{	
	A b = func();		//����func()����
	return 0;
}
