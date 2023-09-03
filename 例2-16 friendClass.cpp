#include <iostream>
using namespace std;
class Time									//����Time�࣬����ʱ����
{
public:
    Time(int hour, int minute, int second); //�������ι��캯��
    friend class Date; 						//������DateΪ��Ԫ��
private:
    int _hour, _minute, _second;
};
class Date									//����Date��
{
public:
	Date(int year, int month, int day); 	//�������ι��캯��
	void showTime(Time& time); 				//������ʾʱ��ĳ�Ա����
private:
	int _year, _month, _day;
};
Date::Date(int year, int month, int day) 	//ʵ��Date�๹�캯��
{
	_year = year;
	_month = month;
	_day = day;
}
void Date::showTime(Time& time)
{
	cout << _year << "-" << _month << "-" << _day
		<< " " << time._hour << ":" << time._minute
		<< ":" << time._second << endl;
}
Time::Time(int hour,int minute,int second) //ʵ��Time�๹�캯��
{
    _hour = hour;
    _minute = minute;
    _second = second;
}
int main()
{
    Time time(17,30,20); 		//����Time����
    Date date(2019,10,31); 		//����Date����
    date.showTime(time); 		//����showTime()��ʾ�����ա�ʱ������Ϣ
    return 0;
}
