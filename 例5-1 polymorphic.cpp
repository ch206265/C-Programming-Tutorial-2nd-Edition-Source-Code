#include<iostream>
using namespace std;
class Animal					//������Animal
{
public:
	virtual void speak();		//�����麯��speak()
};
void Animal::speak()			//����ʵ���麯��
{
	cout<<"�������"<<endl;
}
class Cat :public Animal		//è��Cat���м̳�Animal��
{
public:
	virtual void speak();		//�����麯��speak()
};
void Cat::speak()				//����ʵ���麯��
{
	cout<<"è�Ľ���������"<<endl;
}
class Dog:public Animal			//����Dog���м̳�Animal��
{
public:
	virtual void speak();		//�����麯��speak()
};
void Dog::speak()				//����ʵ���麯��
{
	cout<<"���Ľ���������"<<endl;
}
int main()
{
	Cat cat;					//����Cat�����cat
	Animal *pA=&cat;			//����Animal��ָ��pAָ�����cat
	pA->speak();				//ͨ��pA����speak()����
	Dog dog;					//����Dog�����dog
	Animal *pB=&dog;			//����Animal��ָ��pBָ�����dog
	pB->speak();				//ͨ��pB����speak()����
    return 0;
}
