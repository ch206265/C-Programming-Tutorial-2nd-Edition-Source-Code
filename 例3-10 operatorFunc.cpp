#include<iostream>
#include<string>
using namespace std;
class Show
{
public:
	void operator ()(const string str) 		//()��������غ���
	{
		cout<<str<<endl;
	}
	float operator()(const float num)		//()��������غ���
	{
		 return num*num;
	}
};
int main()
{
	Show s;
	s("abcdef");
	cout<<s(4)<<endl;
	return 0;
}
