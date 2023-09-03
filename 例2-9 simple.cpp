#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Sheep												//����������Sheep
{
public:
	Sheep(string name,string color,const char*home);	//�������������캯��
	Sheep(const Sheep& another);						//�����������캯��
	void show();										//������ͨ��Ա����
	~Sheep();											//������������
private:
	string _name;							//������ʾ�������ֵĳ�Ա����
	string _color;							//������ʾ������ɫ�ĳ�Ա����
	char* _home;							//������ʾ����ҵĳ�Ա����
};
Sheep::Sheep(string name, string color,const char*home)
{
	cout<<"���ù��캯��"<<endl;
	_name=name;
	_color=color;
	//Ϊָ���Աhome����ռ䣬���β�home�����ݸ��Ƶ�_homeָ��Ŀռ�
	int len=strlen(home)+1;
	_home=new char[len];
	memset(_home,0,len);
	strcpy(_home,home);
}
Sheep::Sheep(const Sheep& another)		//����ʵ�ֿ������캯��
{
	cout<<"���ÿ������캯��"<<endl;
	_name=another._name;
	_color=another._color;
	_home=another._home;				//ǳ����
}
void Sheep::show()
{
	cout<<_name<<" "<<_color<<" "<<_home<<endl;
}
Sheep::~Sheep()
{
	cout<<"������������"<<endl;
	if(_home!=NULL)
		delete []_home;
}
int main()
{
	const char *p = "beijing";
	Sheep sheepA("Doly","white",p);
	cout<<"sheepA:";
	sheepA.show();
	Sheep sheepB(sheepA);				//ʹ��sheepA��ʼ���¶���sheepB
	cout<<"sheepB:";
	sheepB.show();
	return 0;
}
