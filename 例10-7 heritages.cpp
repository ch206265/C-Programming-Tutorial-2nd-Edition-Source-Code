#include <iostream>
#include <string>
using namespace std;
class Base								//定义基类Base
{
public:
	Base();								//无参构造函数
	Base(int num);						//一个int类型参数的构造函数
	Base(double d);						//一个double类型参数的构造函数
	Base(int num, double d);			//两个参数的构造函数
private:
 	int _num;							//成员变量_num
	double _d;							//成员变量_d
};
Base::Base() :_num(0), _d(0) 
{ 
	cout << "Base无参构造函数" << endl;
}
Base::Base(int num):_num(num),_d(1.2) 
{ 
	cout << "Base构造函数，初始化int num" << endl; 
}
Base::Base(double d):_num(100),_d(d) 
{ 
	cout << "Base构造函数，初始化double d" << endl; 
}
Base::Base(int num, double d):_num(num),_d(d) 
{ 
	cout << "Base两个参数构造函数" << endl; 
}
class Derive :public Base 				//定义派生类Derive
{
public:
	using Base::Base;					//继承基类构造函数
	Derive();							//派生类无参构造函数
	Derive(string name);				//派生类有参构造函数
private:
	string _name;						//派生类成员变量_name
};
Derive::Derive() :_name("xixi") 
{ 
	cout << "Derive无参构造函数" << endl; 
}
Derive::Derive(string name) :_name(name) 
{ 
	cout << "Derive有参构造函数" << endl; 
}
int main()
{
	Derive d1;				//调用Derive类的无参构造函数
	Derive d2("qiqi");		//调用Derive类的有参构造函数
	Derive d3(6);			//调用Base类的有参构造函数，初始化int num
	Derive d4(12.8);		//调用Base类的有参构造函数，初始化double d
	Derive d5(100, 2.9);	//调用Base类两个参数构造函数
	return 0;
}
