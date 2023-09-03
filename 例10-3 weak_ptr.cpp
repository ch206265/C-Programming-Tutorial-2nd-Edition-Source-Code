#include <iostream>
#include <memory>
using namespace std;
void func(weak_ptr<string>& pw)
{
	//通过pw.lock()获取一个shared_ptr对象
	shared_ptr<string> ps = pw.lock();
	if (ps != nullptr)
		cout << "编程语言是" << *ps << endl;
	else
		cout << "shared_ptr智能指针失效！" << endl;
}
int main()
{
	//定义shared_ptr对象pt1与pt2
	shared_ptr<string> pt1(new string("C++"));
	shared_ptr<string> pt2 = pt1;
	//定义weak_ptr对象
	weak_ptr<string> pw = pt1;
	func(pw);				//调用func()函数
	*pt1 = "Java";
	pt1.reset();			//取消pt1的引用
	func(pw);				//调用func()函数
	pt2.reset();			//取消pt2的引用
	func(pw);				//调用func()函数
	return 0;
}
