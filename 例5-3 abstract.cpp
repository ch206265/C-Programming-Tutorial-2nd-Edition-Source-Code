#include<iostream>
using namespace std;
class Animal						//������Animal
{
public:
	virtual void speak()=0;			//���麯��speak()
	virtual void eat()=0;			//���麯��eat()
	virtual ~Animal();				//����������
};
Animal::~Animal()
{
	cout<<"����Animal��������"<<endl;
}
class Cat :public Animal			//è��Cat���м̳�Animal��
{
public:
	void speak();					//����speak()����
	void eat();						//����speak()����
	~Cat();							//������������
};
void Cat::speak()					//ʵ��speak()����
{
	cout<<"Сè������"<<endl;
}
void Cat::eat()						//ʵ��eat()����
{
	cout<<"Сè����"<<endl;
}
Cat::~Cat()							//ʵ����������
{
	cout<<"����Cat��������"<<endl;
}
class Rabbit :public Animal			//������Rabbit���м̳�Animal��
{
public:
	void speak();					//����speak()����
	void eat();						//����eat()����
	~Rabbit();						//������������
};
void Rabbit::speak()				//ʵ��speak()����
{
	cout<<"С���ӹ�����"<<endl;
}
void Rabbit::eat()					//ʵ��eat()����
{
	cout<<"С���ӳ԰ײ�"<<endl;
}
Rabbit::~Rabbit()					//ʵ����������
{
	cout<<"����Rabbit��������"<<endl;
}
int main()
{
	Animal* pC=new Cat;				//�������ָ��pCָ��Cat�����
	pC->speak();					//ͨ��pCָ�����Cat���speak()����
	pC->eat();						//ͨ��pCָ�����Cat���eat()����
	delete pC;						//�ͷ�ָ��pCָ��Ŀռ�
	Animal *pR=new Rabbit;			//�������ָ��pRָ��Rabbit�����
	pR->speak();					//ͨ��pRָ�����Rabbit���speak()����
	pR->eat();						//ͨ��pRָ�����Rabbit���eat()����
	delete pR;						//�ͷ�pRָ��Ŀռ�
    return 0;
}
