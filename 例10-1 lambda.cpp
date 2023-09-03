#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num = 100;
	//lambda���ʽ
	auto f = [num](int x)->int {return x + num; };
	cout << f(10) << endl;
	//����vector����v
	vector<int> v = { 54,148,3,848,2,89 };
	//����for_each()�����������v�����е�Ԫ��
	for_each(v.begin(), v.end(), [](auto n) {
		cout << n << " "; });
	return 0;
}
