#include<iostream>
using namespace std;
class A
{
private:
	int _x;
	int _y;
public:
	A(int x=0,int y=0):_x(x),_y(y){}
		void show() const;					//�������
		A operator+(const A& a) const;		//����+�����
		A operator- (const A& a) const;		//����-�����
	};
	void A::show() const					//show()������ʵ��
	{
		cout<<"(_x,_y)="<<"("<<_x<<","<<_y<<")"<<endl;
	}
	A A::operator+(const A& a) const		//����+�������ʵ��
	{
		return A(_x+a._x,_y+a._y);
	}
	A A::operator-(const A& a) const		//����-�������ʵ��
	{
		return A(_x-a._x,_y-a._y);
	}
int main()
{
	A a1(1,2);
	A a2(4,5);
	A a;
	cout<<"a1: "; 
	a1.show();
	cout<<"a2: "; 
	a2.show();
	a=a1+a2;					//ʵ�������������
	cout<<"a: "; 
	a.show();
	a=a1-a2;					//ʵ�������������
	cout<<"a: "; 
	a.show();
	return 0;
}
