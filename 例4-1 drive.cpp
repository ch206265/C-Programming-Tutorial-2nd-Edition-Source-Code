#include<iostream>
using namespace std;
class Animal				//���嶯����Animal
{
public:
	void move();			//������ʾ������Ϊ�ĳ�Ա����move()
};
void Animal::move()			//����ʵ�ֳ�Ա����move()
{
	cout<<"������Ϊ"<<endl;
}
class Cat :public Animal	//����è��Cat�����м̳ж�����Animal
{
public:
	Cat(string name);		//�����вι��캯��
	void walk();			//������ʾ������Ϊ�ĳ�Ա����walk()
private:
	string _name;			//��Ա��������ʾ����
};
Cat::Cat(string name)		//����ʵ�ֹ��캯��
{
	_name=name;
}
void Cat::walk()			//����ʵ����ͨ��Ա����walk()
{
	cout<<_name<<"����"<<endl;
}
int main()
{
 	Cat cat("è");			//����è�����cat
	cat.move();				//ͨ�������������û����Ա����
	cat.walk();				//ͨ�������������������ĳ�Ա����
 	return 0;
}
