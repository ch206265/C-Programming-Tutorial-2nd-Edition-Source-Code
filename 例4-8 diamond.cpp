#include <iostream>
using namespace std;
class Furniture							//�Ҿ���Furniture
{
public:
	Furniture(string wood);				//Furniture�๹�캯��
protected:
	string _wood;						//��Ա����_wood����ʾ����
};
Furniture::Furniture(string wood)		//����ʵ�ֹ��캯��
{
	_wood=wood;
}
class Sofa:public Furniture				//ɳ����Sofa�����м̳�Furniture��
{
public:
	Sofa(float length,string wood);		//Sofa�๹�캯��
protected:
	float _length;						//��Ա����_length����ʾɳ������
};
//����ʵ��Sofa�๹�캯��
Sofa::Sofa(float length,string wood):Furniture(wood)
{
	_length=length;
};
class Bed:public Furniture				//����Bed�����м̳�Furniture��
{
public:
	Bed(float width, string wood);		//Bed�๹�캯��
protected:
	float _width;						//��Ա����_width����ʾ���Ŀ��
};
//����ʵ��Bed�๹�캯��
Bed::Bed(float width, string wood):Furniture(wood)
{
	_width=width;
}
class Sofabed:public Sofa,public Bed	//Sofabed�࣬���м̳�Sofa���Bed��
{
public:
	//���캯��
	Sofabed(float length,string wood1, float width,string wood2);
	void getSize();						//��Ա����getSize()����ȡɳ������С
};
//����ʵ��Sofabed�๹�캯��
Sofabed::Sofabed(float length, string wood1, float width, string wood2):
	Sofa(length,wood1),Bed(width,wood2)
{
}
void Sofabed::getSize()					//����ʵ��getSize()����
{
	cout<<"ɳ������"<<_length<<"��"<<endl;
	cout<<"ɳ������"<<_width<<"��"<<endl;
	cout<<"ɳ��������Ϊ"<< _wood<<endl;
}
int main()
{
	Sofabed sbed(1.8,"��ľ",1.5,"̴ľ");	//����Sofabed�����sbed
	sbed.getSize();						//����getSize()������ȡɳ������Ϣ
	return 0;
}
