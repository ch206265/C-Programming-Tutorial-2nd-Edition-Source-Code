#include <iostream>
using namespace std;
template<typename T,typename U>	
void func(T& t, U& u)								//���庯��ģ��func()
{
	static_assert(sizeof(t) == sizeof(u),			//��̬����
		"the parameters must be the same width.");
	cout << t << "��" << u << "�ֽڴ�С��ͬ" << endl;
}
int main()
{
	int x = 100;									//�������
	int y = 20;										//�������
	char ch = 'a';									//�������
	func(x, y);										//����func()����
	func(x, ch);									//����func()����
	return 0;
}
