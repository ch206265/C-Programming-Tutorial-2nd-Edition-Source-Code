#include <iostream>
#include <thread>						//����ͷ�ļ�
using namespace std;
void func()							//���庯��func()
{
	cout << "���̹߳���" << endl;
	cout << "���̹߳�������" << endl;
}
int main()
{
	cout << "���̹߳���" << endl;
	thread t(func);						//�����̶߳���t
	t.join();						//�����̼߳������ִ��
	cout << "���̹߳�������" << endl;
	return 0;
}
