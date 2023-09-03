#include <iostream>
using namespace std;
class Solid			
{
public:
	Solid(int x,int y,int z) :_x(x), _y(y),_z(z){}
	void show()
	{
		cout<<"��ά����"<<_x<<","<<_y<<","<<_z<<endl;
	}
	friend class Point;
private:
	int _x,_y,_z;
};
class Point
{
private:
	int _x, _y;
public:
	Point(int x, int y) :_x(x), _y(y){}
	Point(const Solid &another)
	{
		this->_x=another._x;
		this->_y=another._y;
	}
	void show()
	{
		cout<<"ƽ������:"<<_x<<","<<_y<<endl;
	}
};
int main()
{
	cout<<"ԭʼ����"<<endl;
	Point p(1,2); 
    p.show();
	Solid s(3,4,5); 
    s.show();
	cout<<"��άת��ƽ������"<<endl;
	p=s;
	p.show();
	return 0;
}
