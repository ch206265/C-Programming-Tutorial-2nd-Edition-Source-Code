#include <iostream>
using namespace std;
class A					//定义类A
{
public:
	A() { cout << "构造函数" << endl; }
	A(const A& a) { cout << "拷贝构造函数" << endl; }
	~A() { cout << "析构函数" << endl; }
};
A func()				//定义func()函数
{
	A a;				//创建对象a
	return a;			//返回对象a
}
int main()
{	
	A b = func();		//调用func()函数
	return 0;
}
