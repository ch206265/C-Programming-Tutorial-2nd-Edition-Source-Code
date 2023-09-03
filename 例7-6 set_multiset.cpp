#include <iostream>
#include <set>
#include <functional>
using namespace std;
int main()
{
	set<int, greater<int>> s;  			//����set����s��Ԫ�ذ���������
	multiset<char> ms;  				//����multiset����ms
	//��s�в���Ԫ��
	pair<set<int>::iterator, bool> ps;
	ps = s.insert(12);
	if (ps.second == true)
		cout << "insert success" << endl;
	s.insert(39);
	s.insert(32);
	s.insert(26);
	//��ms�в���Ԫ��
	ms.insert('a');
	ms.insert('z');
	ms.insert('T');
	ms.insert('u');
	ms.insert('u');
	//������������е�Ԫ��
	set<int>::iterator its; 			//��������s�ĵ����������ڻ�ȡԪ��
	cout << "s������Ԫ�أ�";
	for (its = s.begin(); its != s.end(); its++)
		cout << *its << " ";
	cout << endl;
	multiset<char>::iterator itms;  	//��������ms�ĵ�����
	cout << "ms������Ԫ�أ�";
	for (itms = ms.begin(); itms != ms.end(); itms++)
		cout << *itms << " ";
	cout << endl;	
 	//��������ms��Ԫ��u�ĸ���
	cout <<"ms������uԪ�ظ�����"<< ms.count('u') << endl;
	return 0;
}
