#include <iostream>
using namespace std;
void add(int x, int y)
{
	cout << "int: " << x + y << endl;
}
void add(double x)
{
	cout << "double: " << 10 + x << endl;
}
double add(double x, double y)
{
	return x + y;
}
int main()
{
	add(10.2);  		//һ��double���Ͳ���
	add(1, 3);  		//����int���Ͳ���
	return 0;
}
