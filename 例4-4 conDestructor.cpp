#include <iostream>
using namespace std;
class Engine								//���巢������Engine
{
public:
	Engine(string type,int power);			//���������캯��
	void show();							//��������ͨ��Ա����show
	~Engine();								//��������������
private:
	string _type;							//��Ա_type��ʾ�ͺ�
	int _power;								//��Ա_power��ʾ����
};
Engine::Engine(string type, int power)		//����ʵ�ֹ��캯��
{
	cout<<"���÷�����Engine���캯��"<<endl;
	_type=type;
	_power=power;
}
void Engine::show()							//����ʵ��show()����
{
	cout<<"�������ͺţ�"<<_type<<",���������ʣ�"<<_power<<endl;
}
Engine::~Engine()							//����ʵ����������
{
	cout<<"���÷�����Engine��������"<<endl;
}
class Vehicle								//���彻ͨ������Vehicle
{
public:
	Vehicle(string name);					//��ͨ�����๹�캯��
	void run();								//��ͨ��������ͨ��Ա����run()
	string getName();						//��ͨ��������ͨ��Ա����getName()
	~Vehicle();								//��ͨ��������������
private:
	string _name;							//��Ա_name��ʾ��ͨ��������
};
Vehicle::Vehicle(string name)				//����ʵ�ֹ��캯��
{
	cout<<"���ý�ͨ����Vehicle���캯��"<<endl;
	_name=name;
}
void Vehicle::run()							//����ʵ��run()����
{
	cout<<_name<<"������ʻ��"<<endl;
}
string Vehicle::getName()					//����ʵ��getName()����
{
	return _name;
}
Vehicle::~Vehicle()							//����ʵ����������
{
	cout<<"���ý�ͨ����Vehicle��������"<<endl;
}
//����С������Car�����м̳н�ͨ������Vehicle
class Car :public Vehicle
{
public:
	//Car�๹�캯��������������˳�Ա���󡢻����Ա������������Ա�����Ĳ���
	Car(int seats,string color,string type, int power,string name);
	void brake();							//С��������ͨ��Ա����brake()
	void display();							//С��������ͨ��Ա����display()
	~Car();									//С��������������
	Engine engine;							//���г�Ա������Engine�����
private:
	int _seats;								//��Ա_seats��ʾ��λ����
	string _color;							//��Ա_color��ʾ��ɫ
};
//����ʵ�ֹ��캯��������ʹ�á�:����������ó�Ա�����캯�������๹�캯��
Car::Car(int seats, string color, string type, int power, string name):
	engine(type,power),Vehicle(name)
{
	cout<<"����С����Car���캯��"<<endl;
	_seats=seats;
	_color=color;
}
void Car::brake()							//����ʵ��brake()����
{
	cout<<getName()<<"ͣ��"<<endl;
}
void Car::display()							//����ʵ��display()����
{
	cout<<getName()<<"��"<<_seats<<"����λ��"<<"��ɫΪ"<<_color<<endl;
}
Car::~Car()									//����ʵ����������
{
	cout<<"����С����Car��������"<<endl;
}
int main()
{
	Car car(5,"red","EA113",130,"passat");	//����С���������car
	car.run();								//���û����run()����
	car.brake();							//����brake()����
	car.display();							//����display()����
 	//ͨ����Ա����engine����Engine���show()��������ʾ��������Ϣ
	car.engine.show();
	return 0;
}
