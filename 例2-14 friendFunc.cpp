#include <iostream>
using namespace std;
class Circle
{
friend void getArea(Circle &circle);    //������ͨ����getArea()Ϊ��Ԫ����
private:
    float _radius;
    const float PI=3.14;
public:
    Circle(float radius);
    ~Circle();
};
Circle::Circle(float radius=0):_radius(radius)
{
    cout<<"��ʼ��Բ�İ뾶Ϊ��"<<_radius<<endl;
}
Circle::~Circle(){}
void getArea(Circle &circle)
{
     //�������еĳ�Ա����
    cout<<"Բ�İ뾶�ǣ�"<<circle._radius<<endl;
    cout<<"Բ�������"<<circle.PI*circle._radius*circle._radius<<endl;
    cout<<"��Ԫ�����޸İ뾶:"<<endl;
    circle._radius=1;
    cout<<"Բ�İ뾶�ǣ�"<<circle._radius<<endl;
} 
int main()
{
    Circle circle(10);
    getArea(circle);
    return 0;
}
