#include <iostream>
#include <vector>
#include<stack>									//����ͷ�ļ�stack
using namespace std;
int main()
{
	vector <int >v = { 1,2,3 };					//����vector����v
	stack<int, vector <int >> s(v);				//����stack����s
	s.push(4);
	s.emplace(5);
	s.pop();
	while (!s.empty())
	{
		cout << " "<<s.top();
		s.pop();
	}
	return 0;
}
