#include <iostream>
using namespace std;
class A
{
public:
	A(int n);				//���캯��
	A(const A& a);			//�������캯��
	A(A&& a);				//�ƶ����캯��
	~A();					//��������
private:
	int* p;					//��Ա����
};
A::A(int n) :p(new int(n)) 
{ 
	cout << "���캯��" << endl; 
}
A::A(const A& a)
{ 
	p = new int(*(a.p));
	cout << "�������캯��" << endl;
}
A::A(A&& a)					//����ʵ���ƶ����캯��
{ 
	p = a.p;				//����ǰ����ָ��ָ��a.pָ��Ŀռ�
	a.p = nullptr;			//��a.p��ֵΪnullptr
	cout << "�ƶ����캯��" << endl; 
}
A::~A()
{ 
	cout << "��������" << endl; 
}
A func()
{
	A a(10);
	return a;
}
int main()
{	
	A m = func();
	return 0;
}
