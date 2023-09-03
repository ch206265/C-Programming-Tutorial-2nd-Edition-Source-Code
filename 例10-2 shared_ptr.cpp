#include <iostream>
#include <memory>
using namespace std;
int main()
{
	//����shared_ptr����ָ�����language1��language2��language3
	shared_ptr<string> language1(new string("C++"));
	shared_ptr<string> language2 = language1;
	shared_ptr<string> language3 = language1;
	//ͨ������ָ�����language1��language2��language3����get()����
	cout << "language1: " << language1.get() << endl;
	cout << "language2: " << language2.get() << endl;
	cout << "language3: " << language3.get() << endl;
	cout << "���ü�����";
	cout << language1.use_count() <<" ";
	cout << language2.use_count() <<" ";
	cout << language3.use_count() <<endl;
	language1.reset();
	cout << "���ü�����";
	cout << language1.use_count()<<" ";
	cout << language2.use_count()<<" ";
	cout << language3.use_count() << endl;
	cout << "language1: " << language1.get() << endl;
	cout << "language2: " << language2.get() << endl;
	cout << "language3: " << language3.get() << endl;
	return 0;
}
