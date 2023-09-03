#include <iostream>
#include <map>
#include <functional>
#include <string>
using namespace std;
//����printm()�������map����Ԫ��
void printm(map<char, double> mymap)
{
	pair<char, double> p;  					//����pair����p
	map<char, double>::iterator it; 		//����map��iterator������it
	for (it = mymap.begin(); it != mymap.end(); it++)
	{
		p = (pair<char, double>)*it; 		//��������ָ���һ��Ԫ�ش�ŵ�p��
		cout << p.first << "->" << p.second << endl; 	//���һ��Ԫ��
	}
}
//����printmt()�������multimap����Ԫ��
void printmt(multimap<int, string> mymul)
{
	pair<int, string> p;
	multimap<int, string>::iterator it;
	for (it = mymul.begin(); it != mymul.end(); it++)
	{
		p = (pair<int, string>)*it;
		cout << p.first << "->" << p.second << endl;
	}
}
int main()
{
	map<char, double> m;   					//����һ��map����m
	//������m�в���Ԫ��
	m['a'] = 1.2;
	m['b'] = 3.6;
	m['c'] = 6.4;
	m['d'] = 0.8;
	m['e'] = 5.3;
	m['f'] = 3.6;
	cout << "map: " << endl;
	printm(m);								//����printm()�����������m�е�Ԫ��
	cout << "map��key=a��ֵ��" << m.at('a') << endl;
	cout << "map��key=f��Ԫ�ظ�����" << m.count('f') << endl;
	multimap<int, string> mt;  				//����һ��multimap����mt
	//������mt�в���Ԫ��
	mt.insert(pair<int, string>(1, "Hello"));
	mt.insert(make_pair(1, "China"));
 	mt.insert(make_pair(2, "!"));
	cout << "multimap: " << endl;
	printmt(mt);							//����printmt()�����������mt�е�Ԫ��
	return 0;
}
