#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v; 								//����һ���յ�vector����v
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);  					//��β��������v�в���10��Ԫ��
	for (int i = 0; i < 10; i++)
		cout << v[i] << "  ";  					//�������v�е�Ԫ��
	cout << endl;
	v.pop_back(); 								//�Ƴ�β��Ԫ��
	for (int i = 0; i < 9; i++) 				//��ʱԪ�ظ���Ϊ9
		cout << v[i] << "  ";  					//�������v�е�Ԫ��
	cout << endl;
	return 0;
}
