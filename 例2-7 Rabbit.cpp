#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Rabbit								//����������Rabbit
{
public:
	Rabbit(string name,const char *pf);	//�������캯��
	void eat();
	~Rabbit();								//������������
private:
	string _name;							//������ʾ�������ֵĳ�Ա����
	char *_food;							//������ʾ����ʳ��ĳ�Ա����
};
Rabbit::Rabbit(string name, const char* pf)
{
	cout<<"���ù��캯��"<<endl;
	_name=name;
	_food=new char[50];						//Ϊ_foodָ������ռ�
	memset(_food,0,50);						//��ʼ��_food�ռ�
	strcpy(_food,pf);						//������pfָ������ݸ��Ƶ�_food��
}
void Rabbit::eat()
{
	cout<<_name<<" is eating "<<_food<<endl;
}
Rabbit::~Rabbit()							//����ʵ����������
{
	cout<<"������������������"<<_name<<endl;
	if(_food != NULL)
		delete []_food;
}
int main()
{
	Rabbit A("A","luobo");
	A.eat();
	Rabbit B("B","baicai");
	B.eat();
	return 0;
}
