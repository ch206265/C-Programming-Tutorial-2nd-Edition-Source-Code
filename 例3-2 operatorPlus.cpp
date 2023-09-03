#include<iostream>
using namespace std;
class A
{
private:
	int _x;
	int _y;
public:
	A(int x=0,int y=0):_x(x),_y(y){}
	void show() const; 		//�������
	A operator++();  		//����ǰ��++
	A operator++(int); 		//���غ���++
};
void A::show() const
{
	cout<<"(_x,_y)="<<"("<<_x<<","<<_y<<")"<<endl;
}
A A::operator++()  			//ǰ��++ʵ��
{
	++_x;
	++_y;
	return *this;
}
A A::operator++(int) 	 	//����++ʵ��
{
	A a=*this;
	++(*this);  			//�����Ѿ�ʵ�ֵ�ǰ��++
	return a;
}
int main()
{
	A a1(1,2), a2(3,4);
	(a1++).show();
	(++a2).show();
	return 0;
}
