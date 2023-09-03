#include <iostream>
#include <sstream>
using namespace std;
//����ģ�庯������һ�������ַ���ת���ɶ�Ӧ����ֵ
template<class T>
inline T swapString(const string &str)
{
	istringstream istr(str);				//����istringstream�����istr
	T t;							//�������t
	istr>>t;						//������istr�е��������뵽t��
	return t;						//����t
}
int main( ) 
{
	int num=swapString<int>("10");		//���ַ���"10"ת������ֵ10
	cout<<"num="<<num<<endl;
	double d=swapString<double>("3.14");	//���ַ���"3.14"ת������ֵ3.14
	cout<<"d="<<d<<endl;
	float f=swapString<float>("abc");
	cout<<"f="<<f<<endl;
	return 0;
}
