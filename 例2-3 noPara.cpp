#include <iostream>
#include <iomanip>
using namespace std;
class Clock						//����ʱ����Clock
{
public:
	Clock();					//�����޲ι��캯��
	void showTime();			//������ʾʱ��ĳ�Ա����
private:
	int _hour;					//������ʾСʱ�ĳ�Ա����
	int _min;					//������ʾ���ӵĳ�Ա����
	int _sec;					//������ʾ��ĳ�Ա����
};
Clock::Clock()					//����ʵ���޲ι��캯��
{
	_hour=0;					//��ʼ�����̣�����Ա������ʼ��Ϊ0
	_min=0;
	_sec=0;
}
void Clock::showTime()			//����ʵ�ֳ�Ա����
{
	cout<<setw(2)<<setfill('0')<<_hour<<":"
 			<<setw(2)<<setfill('0')<<_min<<":"
 			<<setw(2)<<setfill('0')<<_sec<<endl;
}
int main()
{
	Clock clock;				//��������clock
	cout<<"clock��";
	clock.showTime();			//ͨ��������ó�Ա����showTime()��ʾʱ��
	return 0;
}
