#include <iostream>
#include <sstream>
using namespace std;
int main( ) 
{
	ostringstream ostr;			//����ostringstream�����
	string str;					//����string�����str
	cout<<"������һ���ַ���"<<endl;	
	getline(cin,str);			//����getline()�����Ӽ���Ϊstr��������
	ostr<<str;					//��str���ݲ��뵽ostr��������
 	string result=ostr.str();	//����str()��Ա������ȡostr���󻺳�������
	cout<<result<<endl;			//�����ȡ������
	return 0;
}
