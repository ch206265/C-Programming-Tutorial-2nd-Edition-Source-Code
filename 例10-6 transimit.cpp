#include <iostream>
using namespace std;
template<typename T>
void transimit(T& t) { cout << "左值" << endl; }
template<typename T>
void transimit(T&& t) { cout << "右值" << endl; }
template<typename U>
void test(U&& u)
{
	transimit(u);			//调用transimit()函数
	transimit(move(u));		//调用transimit()函数
}
int main()
{
	test(1);				//调用test()函数
	return 0;
}
