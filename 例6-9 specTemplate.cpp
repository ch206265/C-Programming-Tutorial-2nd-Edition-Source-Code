#include <iostream>
using namespace std;
//��ģ��
template<typename T>
class Special
{
public:
	Special(T a, T b)
	{
		_a = a;
		_b = b;
	}
	T compete()
	{
		cout << "��ģ��" << endl;
		return _a > _b ? _a : _b;
	}
private:
	T _a;
	T _b;
};
//��ģ��ȫ�ػ�
template<>
class Special<const char*>			//ָ���ػ�����Ϊconst char*
{
public:
	Special(const char* a, const char* b)
	{
		_a = a;
		_b = b;
	}
	const char* compete()			//���¶����Ա����compete()
	{
		cout << "��ģ���ػ�" << endl;
		if (strcmp(_a, _b)>0)
			return _a;
		else
			return _b;
	}
private:
	const char* _a;
	const char* _b;
};
int main()
{
	//����Special<string>�����s1
	Special<string> s1("hello", "nihao");
	cout << s1.compete() << endl;
	//����Special<const char*>�����s2
	Special<const char*> s2("hello", "nihao");
	cout << s2.compete() << endl;
	return 0;
}
