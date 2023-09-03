#include<iostream>
using namespace std;
class Student
{
private:
	int _id;
	double _score;
public:
	Student(int id,double score):_id(id),_score(score){}
	void dis()
	{
		cout<<"ѧ��"<<_id<<"�ɼ�"<<_score<<endl;
	}
     //���ع�ϵ�����
	friend bool operator==(const Student& st1,const Student& st2);
     friend bool operator!=(const Student& st1,const Student& st2);
	friend bool operator>(const Student& st1,const Student& st2);
	friend bool operator<(const Student& st1,const Student& st2);
};
bool operator==(const Student& st1,const Student& st2)
{
	return st1._score==st2._score;     //����==�����
}
bool operator!=(const Student& st1,const Student& st2)
{
	return !(st1._score==st2._score); //����!=�����
}
bool operator>(const Student& st1,const Student& st2)
{
	return st1._score>st2._score;   	//����>�����
}
bool operator<(const Student& st1,const Student& st2)
{
	return st1._score<st2._score;   	//����<�����
}
int main()
{
	Student st1(1001,96),st2(1002,105);
	cout<<"�Ƚ�����ѧ���ĳɼ���"<<endl;
	if(st1>st2)
		st1.dis();
	else if(st1<st2)
		st2.dis();
	else
		cout<<"����ѧ���ɼ���ͬ��"<<endl;
	return 0;
}
