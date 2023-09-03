#include <iostream>
using namespace std;
class Animal					//���嶯����Animal
{
public:
	virtual void speak();		//�����麯��speak()
};
void Animal::speak()			//����ʵ��speak()����
{
	cout << "�������" << endl;
}
class Cat :public Animal		//è��Cat���м̳�Animal��
{
public:
	virtual void speak();		//�����麯��speak()
};
void Cat::speak()				//����ʵ��speak()����
{
	cout << "Сè������" << endl;
}
int main()
{
	Animal animal;				//����Animal�����animal
	Animal& ref = animal;		//����Animal������ref
	ref.speak();				//ͨ��Animal������ref����speak()����
	try
	{
		//������refǿ��ת��ΪCat&����
		Cat& cat = dynamic_cast<Cat&>(ref);
		cat.speak();
	}
	catch (bad_cast& ex)		//�����쳣��bad_cast��׼�쳣
	{
		cout << ex.what() << endl;
	}
	return 0;
}
