#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<iostream>
using namespace std;
class Assign
{
public:
	char* name;
	char* url;
public:
	Assign(const char* name,const char* url); 		//���캯��
	Assign(const Assign& temp); 					//�������캯��
	~Assign()
	{
		delete[]name;
		delete[]url;
	}
	Assign& operator=(Assign& temp); 	//��ֵ���������
};
Assign::Assign(const char* name,const char* url)  
{
	this->name=new char[strlen(name)+1];
	this->url=new char[strlen(url)+1];
	if (name)
		strcpy(this->name,name);
	if (url)
		strcpy(this->url,url);
}
Assign::Assign(const Assign& temp) 
{
	this->name=new char[strlen(temp.name)+1];
	this->url=new char[strlen(temp.url)+1];
	if (name)
		strcpy(this->name,temp.name);
	if (url)
		strcpy(this->url,temp.url);
}
Assign& Assign:: operator=(Assign& temp)
{
	delete[]name;
	delete[]url;  						//���ͷ�ԭ���ռ䣬����������
	this->name=new char[strlen(temp.name)+1];
	this->url=new char[strlen(temp.url)+1];
	if (name)
		strcpy(this->name,temp.name);
	if (url)
		strcpy(this->url,temp.url);
	return *this;
}
int main()
{
	Assign a("���ǲ���", "http://net.itcast.cn/"); 
	cout<<"a����" <<a.name<<" "<<a.url<<endl;
	Assign b(a);  						//��a�����ʼ��b�����õ��ǿ������캯��
	cout<<"b����" <<b.name<<" "<<b.url<<endl;
	Assign c("����ѵ��Ӫ", "http://www.itheima.com/");
	cout<<"c����" <<c.name<<" "<<c.url<<endl;
	b=c; 								//���ø�ֵ���غ���
	cout<<"b����"<<b.name<<" "<<b.url<<endl;
	return 0;
}
