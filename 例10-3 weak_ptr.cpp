#include <iostream>
#include <memory>
using namespace std;
void func(weak_ptr<string>& pw)
{
	//ͨ��pw.lock()��ȡһ��shared_ptr����
	shared_ptr<string> ps = pw.lock();
	if (ps != nullptr)
		cout << "���������" << *ps << endl;
	else
		cout << "shared_ptr����ָ��ʧЧ��" << endl;
}
int main()
{
	//����shared_ptr����pt1��pt2
	shared_ptr<string> pt1(new string("C++"));
	shared_ptr<string> pt2 = pt1;
	//����weak_ptr����
	weak_ptr<string> pw = pt1;
	func(pw);				//����func()����
	*pt1 = "Java";
	pt1.reset();			//ȡ��pt1������
	func(pw);				//����func()����
	pt2.reset();			//ȡ��pt2������
	func(pw);				//����func()����
	return 0;
}
