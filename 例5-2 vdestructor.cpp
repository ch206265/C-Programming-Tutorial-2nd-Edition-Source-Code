#include<iostream>
using namespace std;
class Base							//����Base
{
public:
	virtual ~Base();				//����������
};
Base::~Base()
{
	cout<<"Base����������"<<endl; 
}
class Derive :public Base			//������Derive���м̳�Base��
{
public:
	~Derive();						//����������
};
Derive::~Derive()
{
	cout<<"Derive����������"<<endl; 
}
int main()
{
	Base *pb=new Derive;			//����ָ��ָ�����������
	delete pb;						//�ͷŻ���ָ��
     return 0;
}
