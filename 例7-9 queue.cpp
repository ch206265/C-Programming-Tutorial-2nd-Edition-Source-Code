#include <iostream>
#include <list>
#include<queue>									//����ͷ�ļ�queue
using namespace std;
int main()
{
	list <int >l = { 1,2,3 };					//����list����l
	queue<int, list <int>> q(l);				//����queue����q
	q.push(4);
	q.emplace(5);
	q.pop();
	cout << "��һ��Ԫ��" << q.front() << endl;	//��ȡ��һ��Ԫ��
	cout << "���һ��Ԫ��" << q.back() << endl;	//��ȡ���һ��Ԫ��
	while(!q.empty())
	{
		cout << " "<<q.front();
		q.pop();
	}
	return 0;
}
