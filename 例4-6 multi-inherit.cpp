#include <iostream>
using namespace std;
class Wood								//ľ����Wood
{
public:
	Wood(){cout<<"ľ�Ĺ��캯��"<<endl; }	
	~Wood(){cout<<"ľ����������"<<endl; }
};
class Sofa								//ɳ����Sofa
{
public:
	Sofa(){cout<<"ɳ�����캯��"<<endl; }
	~Sofa(){cout<<"ɳ����������"<<endl; }
	void sit(){cout<<"Sofa������..."<<endl; }
};
class Bed								//����Bed
{
public:
	Bed(){cout<<"���Ĺ��캯��"<<endl; }
	~Bed(){cout<<"������������"<<endl; }
	void sleep(){cout<<"Bed����˯��..."<<endl; }
};
class Sofabed:public Sofa,public Bed	//Sofabed�࣬���м̳�Sofa���Bed��
{
public:
	Sofabed(){cout<<"ɳ�������캯��"<<endl; }
	~Sofabed(){cout<<"ɳ������������"<<endl; }
	Wood pearwood;						//Wood������ľ
};
int main()
{
	Sofabed sbed;						//����ɳ��������sbed
	sbed.sit();							//ͨ��sbed���û���Sofa��sit()����
	sbed.sleep();						//ͨ��sbed���û���Bed��sleep()����
	return 0;
}
