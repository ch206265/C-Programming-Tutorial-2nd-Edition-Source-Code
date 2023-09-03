#include <iostream>
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
	//调用func()函数，第二个参数传入square()函数名
	cout << "square()函数：" << func(x, square) << endl;
	//调用func()函数，第二个参数传入仿函数Student()
	cout << "Student类：" << func(x, Student(1002)) << endl;
	//调用func()函数，第二个参数传入lambda表达式
	cout << "lambda表达式：" << func(x, [](int b) {return b/2; }) << endl;
	return 0;
}
