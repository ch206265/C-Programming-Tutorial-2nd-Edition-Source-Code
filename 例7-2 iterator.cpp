#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>c={1,2,3};					//����vector����c
	vector<int>::iterator pos;				//����iterator������pos
	vector<int>::reverse_iterator pos_r;	//����reverse_iterator������pos_r
	cout<<"iterator������:";
	for(pos=c.begin();pos!=c.end();++pos)	//ʹ�õ�����pos��������c�е�Ԫ��
	{
		cout<<*pos<<" ";
	}
	cout<<endl<<"reverse_iterator������:";
 	//ʹ�õ�����pos_r��������c�е�Ԫ��
	for (pos_r = c.rbegin(); pos_r != c.rend(); ++pos_r)
	{
		cout << *pos_r <<" ";
	}
	return 0;
}
