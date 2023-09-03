#include <iostream>
using namespace std;
template< typename T>
class A
{
	T _item;
	static int _count;  				//��̬����
public:
	A(const T& t) :_item(t){ _count++; }
	~A(){ _count--; }
	friend void func();  				//�޲���Ԫ����func()
	friend void show(const A<T>& a); 	//�в���Ԫ����show()
};
template< typename T>
int A<T>::_count = 0;  					//��ʼ����̬����
void func()  							//func()����ʵ��
{
	cout<<"int count:"<<A<int>::_count<<";";
	cout<<"double count:"<<A<double>::_count<<";"<<endl;
}
//ģ���β�Ϊint����
void show(const A<int>& a){	cout<<"int:"<<a._item<<endl;}
void show(const A<double>& a){cout<<"double:"<<a._item<<endl;}
int main()
{
	func();  							//�����޲���Ԫ����
	A<int> a(10);  						//����int���Ͷ���
	func();
	A<double> b(1.2);
	show(a);  							//�����в�������Ԫ����
	show(b);
	return 0;
}
