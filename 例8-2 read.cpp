#include <iostream>
using namespace std;
int main()
{
	char buf[50]={0};
	cout<<"������һ���ַ�����"<<endl;
	cin.read(buf,25);
	cout<<"�����"<<endl<<buf<<endl;
 	return 0;
}
