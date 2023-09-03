#include <iostream>
#include <iomanip>
using namespace std;
class Clock										//����ʱ����Clock
{
public:
	Clock(int hour, int min, int sec);			//�����вι��캯��
	void showTime();							//������ʾʱ��ĳ�Ա����
private:
	int _hour;									//������ʾСʱ�ĳ�Ա����
	int _min;									//������ʾ���ӵĳ�Ա����
	int _sec;									//������ʾ��ĳ�Ա����
};
Clock::Clock(int hour, int min, int sec)		//����ʵ���вι��캯��
{
	_hour=hour;					//��ʼ�����̣�����ʼֱֵ�Ӹ�ֵ����Ա����
	_min=min;
	_sec=sec;
}
void Clock::showTime()			//����ʵ�ֳ�Ա����
{
	cout<<setw(2)<<setfill('0')<<_hour<<":"
 	 			<<setw(2)<<setfill('0')<<_min<<":"
 	 			<<setw(2)<<setfill('0')<<_sec<<endl;
}
int main()
{
	Clock clock1(10,20,30);		//��������clock1�������ʼֵ
	cout<<"clock1��";
	clock1.showTime();			//ͨ��������ó�Ա����showTime()��ʾʱ��
	Clock clock2(22,16,12);		//��������clock2�������ʼֵ
	cout<<"clock2��";
	clock2.showTime();			//ͨ��������ó�Ա����showTime()��ʾʱ��
	return 0;
}
