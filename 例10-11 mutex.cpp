#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int num = 0;						//����ȫ�ֱ���num
mutex mtx;							//���廥����mtx
void func()
{
	mtx.lock();						//����
	cout << "�߳�id: " << this_thread::get_id() << endl; //��ȡ��ǰ�߳�id
	num++;
	cout << "counter:" << num << endl;
	mtx.unlock();					//����
}
int main()
{
	thread ths[3];					//�����߳�����
	for (int i = 0; i < 3; i++)
		ths[i] = thread(func);		//�����߳�����
	for (auto& th : ths)
		th.join();					//���̼߳������
	cout << "���̹߳�������" << endl;
	return 0;
}
