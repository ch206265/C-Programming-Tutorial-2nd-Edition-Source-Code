#include <iostream>
using namespace std;
class Vehicle					//���彻ͨ������Vehicle
{
public:
	void run();					//��ͨ��������ͨ��Ա����run()
};
void Vehicle::run()				//����ʵ��run()����
{
	cout<<"����run()��������ʻ"<<endl;
}
class Car :public Vehicle		//����С������Car�����м̳н�ͨ������Vehicle
{
public:
	void run();					//С��������ͨ��Ա����run()
};
void Car::run()					//����ʵ��brake()����
{
	cout<<"С������Ҫȼ������,��ʻ�ٶȿ�"<<endl;
}
int main()
{
	Car car;					//����С���������car
	car.run();					//�����������run()����
	car.Vehicle::run();			//ͨ�����������������޶������û���run()����
	Vehicle* pv=&car;
	pv->run();					//����ָ����û���run()����
	return 0;
}
