#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"������һ���ַ�����"<<endl;
	cout<<"��һ����ʽ��"<<cin.get()<<endl;
	cin.get(ch);
	cout<<"�ڶ�����ʽ��"<<ch<<endl;
	char buf[20];
	cin.get(buf,6,' ');
	cout<<"��������ʽ��"<<buf<<endl;
	return 0;
}
