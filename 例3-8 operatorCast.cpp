#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Student
{
private:
	string _id;
 	char* _name;
public:
 	Student(string id, const char* name) :_id(id)
	{
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
}
	operator  char*()			//����ת����������غ���
	{
		return _name;
	}
	void show()
	{
		cout<<"ID:"<<_id<<","<<"name:"<<_name<<endl;
	}
};
int main()
{
	Student s1("1001","С��");	//������ͨ���캯����������
	cout<<"s1: "; 
	s1.show();
	char *ch=s1;				//��������ת������
	cout<<ch<<endl;
	return 0;
}
