#include <iostream>
using namespace std;
class Sheep								//����������Sheep
{
public:
	Sheep(string name,string color);	//�������������캯��
	Sheep(const Sheep& another);		//�����������캯��
	void show();						//������ͨ��Ա����
	~Sheep();							//������������
private:
	string _name;						//������ʾ�������ֵĳ�Ա����
	string _color;						//������ʾ������ɫ�ĳ�Ա����
};
Sheep::Sheep(string name, string color)
{
	cout<<"���ù��캯��"<<endl;
	_name=name;
	_color=color;
}
Sheep::Sheep(const Sheep& another)		//����ʵ�ֿ������캯��
{
	cout<<"���ÿ������캯��"<<endl;
	_name=another._name;
	_color=another._color;
}
void Sheep::show()
{
	cout<<_name<<" "<<_color<<endl;
}
Sheep::~Sheep()
{
	cout<<"������������"<<endl;
}

int main()
{
	Sheep sheepA("Doly","white");
	cout<<"sheepA:";
	sheepA.show();
	Sheep sheepB(sheepA);				//ʹ��sheepA��ʼ���¶���sheepB
	cout<<"sheepB:";
	sheepB.show();
 	return 0;
}
