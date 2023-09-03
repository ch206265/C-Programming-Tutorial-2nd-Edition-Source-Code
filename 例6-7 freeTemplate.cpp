#include<iostream>
using namespace std;
template< typename T>				//������ģ��A
class A
{
private:
	T _item;
public:
	A(const T& t) :_item(t){}
	template<class U, class V> 		//������Լ��ģ����Ԫ����
	friend void show(U& u, V& v);
};
template< typename U, typename V>	//����ģ��show()�Ķ���
void show(U& u, V& v){cout<<u._item<<","<<v._item<<endl;}
int main()
{
	A<int> a(10);					//����A<int>�����a
	A<int> b(20);					//����A<int>�����b
	A<double> c(1.2);				//����A<int>�����c
	cout<<"a,b: ";  
     show(a, b);						//����show()�������������a��b��Ϊʵ��
	cout<<"a,c:"; 
     show(a, c);						//����show()�������������a��c��Ϊʵ��
	return 0;
}
