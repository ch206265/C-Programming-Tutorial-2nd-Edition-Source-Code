#include <iostream>
#include <string>
using namespace std;
class Base								//�������Base
{
public:
	Base();								//�޲ι��캯��
	Base(int num);						//һ��int���Ͳ����Ĺ��캯��
	Base(double d);						//һ��double���Ͳ����Ĺ��캯��
	Base(int num, double d);			//���������Ĺ��캯��
private:
 	int _num;							//��Ա����_num
	double _d;							//��Ա����_d
};
Base::Base() :_num(0), _d(0) 
{ 
	cout << "Base�޲ι��캯��" << endl;
}
Base::Base(int num):_num(num),_d(1.2) 
{ 
	cout << "Base���캯������ʼ��int num" << endl; 
}
Base::Base(double d):_num(100),_d(d) 
{ 
	cout << "Base���캯������ʼ��double d" << endl; 
}
Base::Base(int num, double d):_num(num),_d(d) 
{ 
	cout << "Base�����������캯��" << endl; 
}
class Derive :public Base 				//����������Derive
{
public:
	using Base::Base;					//�̳л��๹�캯��
	Derive();							//�������޲ι��캯��
	Derive(string name);				//�������вι��캯��
private:
	string _name;						//�������Ա����_name
};
Derive::Derive() :_name("xixi") 
{ 
	cout << "Derive�޲ι��캯��" << endl; 
}
Derive::Derive(string name) :_name(name) 
{ 
	cout << "Derive�вι��캯��" << endl; 
}
int main()
{
	Derive d1;				//����Derive����޲ι��캯��
	Derive d2("qiqi");		//����Derive����вι��캯��
	Derive d3(6);			//����Base����вι��캯������ʼ��int num
	Derive d4(12.8);		//����Base����вι��캯������ʼ��double d
	Derive d5(100, 2.9);	//����Base�������������캯��
	return 0;
}
