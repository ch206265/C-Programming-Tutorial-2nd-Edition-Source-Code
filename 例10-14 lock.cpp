#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
mutex mtx;							//���廥����
int num = 0;							//����ȫ�ֱ���num
void func()
{
    lock_guard<mutex> locker(mtx);				//����
    for (int i = 0; i < 100000; i++)
    {
        num++;							//ͨ��forѭ���޸�num��ֵ
    }
    cout << "func()num: " << num << endl;
}
int main()
{
    thread t1(func);						//�����߳�t1ִ��func()����
    thread t2(func);						//�����߳�t2ִ��func()����
    t1.join();
    t2.join(); 
    cout << "main()num: " << num << endl;
    return 0;
}
