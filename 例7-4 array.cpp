#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,3>c={1,2,3};						//����array����c
	array<int,3>c1={2,3,4};						//����array����c1
	array<int,3>::iterator pos;					//����iterator������pos
	c.swap(c1);									//��������c������c1��Ԫ��
	for(pos=c.begin();pos!=c.end();++pos)		//ʹ�õ�����pos��������c�е�Ԫ��
	{
		cout<<*pos<<" ";
	}
	return 0;
}
