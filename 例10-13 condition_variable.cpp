#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <queue>
using namespace std;
queue<int> products;				//������������products
mutex mtx;							//����������mtx
condition_variable cvar;			//������������cvar
bool done = false;					//�������done����ʶ��Ʒ�Ƿ��������
bool notified = false;				//�������notified����ʶ�Ƿ����߳�
void produce()						//��������
{
	for (int i = 1; i <= 5; i++)
	{
		//�õ�ǰ�߳�����2s
		this_thread::sleep_for(chrono::seconds(2));
		//����unique_lock����locker����ȡ������mtx
		unique_lock<mutex> locker(mtx);
		//������Ʒ��������Ʒ��ŵ�products������
		cout << "������Ʒ" << i << " ";
		products.push(i);
		//��notifiedֵ����Ϊtrue
		notified = true;
		//����һ���߳�
		cvar.notify_one();
	}
	done = true;					//������ϣ�����done��ֵΪtrue
	cvar.notify_one();				//����һ���߳�
}
void consume()						//�������Ѻ���
{
	//����unique_lock����locker����ȡ������mtx
	unique_lock<mutex> locker(mtx);
	while (!done)					//�жϲ�Ʒ�Ƿ��������
	{
		while (!notified)			//������ٻ���
		{
			cvar.wait(locker);		//��������
		}
		while (!products.empty())	//���products������Ϊ��
		{
			//���Ѳ�Ʒ
			cout << "���Ѳ�Ʒ" << products.front() << endl;
			products.pop();
		}
		notified = false;			//������֮�󣬽�notified��ֵ����Ϊfalse
	 }
}
int main()
{
	thread producer(produce);		//���������߳�
	thread consumer(consume);		//���������߳�
	producer.join();
	consumer.join();
    return 0;
}
