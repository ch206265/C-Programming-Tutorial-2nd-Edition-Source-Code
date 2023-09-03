#include <iostream>
using namespace std;
template< typename T>					//��������ģ��func()
void func();
template< typename T>					//��������ģ��show()
void show(T& t);
template< typename U>					//��ģ�嶨��
class A
{
private:
	U _item;
	static int _count;
public:
	A(const U& u):_item(u){_count++;}
	~A(){_count--;}
	friend void func<U>(); 				//������Ԫ����func()
	friend void show<>(A<U>& a); 		//������Ԫ����show()
};
template< typename T>
int A<T>::_count = 0;
template< typename T>					//����ģ��func()�Ķ���
void func()
{
	cout<<"template size:"<<sizeof(A<T>)<<";";
	cout<<" template func():"<<A<T>::_count<<endl;
}
template< typename T>					//����ģ��show()�Ķ���
void show(T& t){cout << t._item << endl;}
int main()
{
	func<int>(); 		//����int���͵ĺ���ģ��ʵ����int���ͣ����СΪ4�ֽ�
	A<int> a(10);  		//����A<int>�����a
	A<int> b(20); 		//����A<int>�����b
	A<double> c(1.2); 	//����A<double>�����c
	show(a); 			//����show()��������������a��ֵ
	show(b);			//����show()��������������b��ֵ
	show(c);			//����show()��������������c��ֵ
	cout<<"func<int> output:\n";
	func<int>();  		//���е��ˣ��Ѿ�����������int���Ͷ���
	cout<<"func<double>()output:\n";
	func<double>();
	return 0;
}
