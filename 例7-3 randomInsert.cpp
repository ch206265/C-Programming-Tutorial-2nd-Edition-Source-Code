#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<char> v;  					//�����յ�vector����v
	v.insert(v.begin(), 'a');  			//��ͷ��λ�ò���Ԫ��a
	v.insert(v.begin(), 'b');			//��ͷ��λ�ò���Ԫ��b
	v.insert(v.begin(), 'c');			//��ͷ��λ�ò���Ԫ��c
	v.insert(v.begin() + 1, 5, 't');  	//��v.begin()+1λ�ò���5��Ԫ��t
	for (int i = 0; i < 8; i++)  		//�������v�е�Ԫ��
		cout << v[i] << " ";
	cout << endl;
	cout << "after erase elems:\n"; 
 	//ɾ��begin()+1��begin()+6�����5��Ԫ��
	v.erase(v.begin() + 1, v.begin() + 6); 
	for (int i = 0; i <3; i++)			//�������v�е�Ԫ��
		cout << v[i] << " ";
	cout << endl;
	return 0;
}
