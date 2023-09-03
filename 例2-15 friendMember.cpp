#include <iostream>
#include <math.h>
using namespace std;
class Point;
class Circle
{
public:
    float getArea(Point &p1,Point &p2); 		//������������ĳ�Ա����
private:
    const float PI=3.14;
};
class Point
{
//������Circle��getArea()����Ϊ��Ԫ��������
friend float Circle::getArea(Point &p1,Point &p2);	
public:
    Point (float x,float y);
    ~Point();
private:
    float _x;
    float _y;
};
Point::Point(float x=0,float y=0):_x(x),_y(y)	//ʵ��Point��Ĺ��캯��
{
    cout<<"��ʼ�������"<<endl;
}
Point::~Point(){}
float Circle::getArea(Point &p1,Point &p2)
{
    double x=abs(p1._x-p2._x); 					//��ȡ���������ľ���
    float y=abs(p1._y-p2._y); 					//��ȡ���������ľ���
    float len=sqrtf(x*x+y*y);					//�������������֮��ľ���
    cout<<"��ȡ���������֮��ľ�����"<<len<<endl;
    return len*len*PI; 							//��Ԫ��������˽�г�Ա����PI
}
int main()
{
    Point p1(5,5);
    Point p2(10,10);
    Circle circle;
    float area=circle.getArea(p1,p2);
    cout<<"Բ������ǣ�"<<area<<endl;
    return 0;
}
