#include <iostream>
#include <iomanip>
using namespace std;
class Clock										//����ʱ����Clock
{
public:
	//�������ع��캯��
	Clock(int hour, int min);
	Clock(int hour, int min, int sec=0); 
	void showTime();							//������ʾʱ��ĳ�Ա����
private:
 	int _hour;									//������ʾСʱ�ĳ�Ա����
 	int _min;									//������ʾ���ӵĳ�Ա����
 	int _sec;									//������ʾ��ĳ�Ա����
};
Clock::Clock(int hour, int min):_hour(hour),_min(min)
{
	cout<<"�������������Ĺ��캯��"<<endl;
	_sec=10;
}
Clock::Clock(int hour, int min, int sec=0)		//����ʵ�ֹ��캯��
{
	cout<<"�������������Ĺ��캯��"<<endl;
	_hour=hour;
	_min=min;
	_sec=sec;
}
void Clock::showTime()							//����ʵ�ֳ�Ա����showTime()
{
 	cout<<setw(2)<<setfill('0')<<_hour<<":"
 	 	 		<<setw(2)<<setfill('0')<<_min<<":"
 	 	 		<<setw(2)<<setfill('0')<<_sec<<endl;
}
int main()
{
	Clock clock(8,0);							//��������clock�������ʼֵ
	cout<<"clock��";
	clock.showTime();							//ͨ��������ó�Ա������ʾʱ��
	return 0;
}
