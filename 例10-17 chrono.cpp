#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>
#include <ratio>
using namespace std;
int main()
{
 	//����duration����oneday����ʾһ��
    chrono::duration<int, ratio<60 * 60 * 24>> oneday(1);
 	//��ȡϵͳ��ǰʱ��
    chrono::system_clock::time_point today = chrono::system_clock::now();
 	//���������ʱ��
    chrono::system_clock::time_point tomorrow = today + oneday;
    time_t t;		//����time_tʱ�����t
 	//������today�е�ʱ��ת��֮��洢��ʱ�����t��
    t = chrono::system_clock::to_time_t(today);
    cout << "today:" << ctime(&t);
 	//������tomorrow�е�ʱ��ת��֮��洢��ʱ�����t��
    t= chrono::system_clock::to_time_t(tomorrow);
    cout << "tomorrow:" << ctime(&t);
    return 0;
}
