#include <iostream>
using namespace std;
class Birth								//�������������Birth
{
public:
	Birth(int year,int month, int day);//���캯��
	void show();						//������Ա����show()��ʾ����
private:
	int _year;	
	int _month;
	int _day;
};
//����ʵ�ֹ��캯��
Birth::Birth(int year, int month, int day)
	:_year(year),_month(month),_day(day)
{
	cout<<"Birth�๹�캯��"<<endl;
}
//����ʵ��show()����
void Birth::show()
{
	cout<<"�������ڣ�"<<_year<<"-"<<_month<<"-"<<_day<<endl;
}
class Student							//����ѧ����Student
{
public:
	//���캯��
	Student(string name, int id, int year, int month, int day);	
	void show();
private:
	string _name;
	int _id;
	Birth birth;
};
//����ʵ�ֹ��캯��
Student::Student(string name, int id, int year, int month, int day)
	:birth(year,month,day)
{
	cout<<"Student�๹�캯��"<<endl;
	_name=name;
	_id=id;
}
//����ʵ��show()����
void Student::show()
{
	cout<<"������"<<_name<<endl;
	cout<<"ѧ�ţ�"<<_id<<endl;
	birth.show();
}
int main()
{
 	Student stu("lili",10002,2000,1,1);	//����ѧ������stu
	stu.show();								//��ʾѧ����Ϣ
	return 0;
}
