#include <iostream>
using namespace std;
class A
{
public:
	A(int n);				//构造函数
	A(const A& a);			//拷贝构造函数
	A(A&& a);				//移动构造函数
	~A();					//析构函数
private:
	int* p;					//成员变量
};
A::A(int n) :p(new int(n)) 
{ 
	cout << "构造函数" << endl; 
}
A::A(const A& a)
{ 
	p = new int(*(a.p));
	cout << "拷贝构造函数" << endl;
}
A::A(A&& a)					//类外实现移动构造函数
{ 
	p = a.p;				//将当前对象指针指向a.p指向的空间
	a.p = nullptr;			//将a.p赋值为nullptr
	cout << "移动构造函数" << endl; 
}
A::~A()
{ 
	cout << "析构函数" << endl; 
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
