#include <iostream>
using namespace std;
template<typename T>
void transimit(T& t) { cout << "��ֵ" << endl; }
template<typename T>
void transimit(T&& t) { cout << "��ֵ" << endl; }
template<typename U>
void test(U&& u)
{
	transimit(u);			//����transimit()����
	transimit(move(u));		//����transimit()����
}
int main()
{
	test(1);				//����test()����
	return 0;
}
