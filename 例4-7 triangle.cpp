#include <iostream>
using namespace std;
class Sofa								//ɳ����Sofa
{
public:
	void rest(){cout<<"ɳ������������Ϣ"<<endl; }
};
class Bed								//����Bed
{
public:
	void rest(){cout<<"������������Ϣ"<<endl; }
};
class Sofabed:public Sofa,public Bed	//Sofabed�࣬���м̳�Sofa���Bed��
{
public:
	void function(){cout<<"ɳ�����ۺ���ɳ���ʹ��Ĺ���"<<endl; }
};
int main()
{
	Sofabed sbed;						//����ɳ��������sbed
	sbed.rest();						//ͨ��sbed����rest()����
	return 0;
}
