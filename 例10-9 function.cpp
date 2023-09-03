#include <iostream>
#include <functional>
//#include "function.h"
using namespace std;
//定义一个模板函数func()
template <typename T,typename U>
T func(T t, U u)
{
	static int count = 0;
	count++;
	cout << "count= " << count << ",&count = " << &count << endl;
	return u(t);
}
//定义普通函数square()，用于求算参数的平方
int square(int a)
{
	return a * a;
}
class Student			//定义类Student
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
	cout << "square()函数：" << func(x, fi1) << endl;
	cout << "Student类：" << func(x, fi2) << endl;
	cout << "lambda表达式：" << func(x, fi3) << endl;
	return 0;
}
