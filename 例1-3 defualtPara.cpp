#include <iostream>
using namespace std; 
void add(int x,int y=1,int z=2) 
{
	cout<<x+y+z<<endl;
}
int main()
{
	add(1);      	//ֻ����1���β�x��y��zʹ��Ĭ���β�ֵ
	add(1,2);    	//����1��x��2��y,zʹ��Ĭ���β�ֵ
	add(1,2,3); 	//����������������ʹ��Ĭ���β�ֵ
	return 0;
}
