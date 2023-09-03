#include <iostream>
using namespace std;
class Base								//�������Base
{
public:
	Base();								//Base�๹�캯��
	void show();						//Base����ͨ��Ա����show()
protected:
	string _name;						//Base�ౣ����Ա����_name
};
Base::Base()							//����ʵ�ֻ��๹�캯��
{
	_name="base";
}
void Base::show()						//����ʵ��show()����
{
	cout<<_name<<" Base show()"<<endl;
}
class Derive : public Base				//Derive�๫�м̳�Base��
{
public:
	Derive();							//Derive�๹�캯��
	void display();						//Derive����ͨ��Ա����display()
};
Derive::Derive()						//����ʵ�������๹�캯��
{
	_name="derive";						//_name��Ա��Base��̳ж���
}
void Derive::display()					//����ʵ��display()����
{
	cout<<_name<<" Derive show()"<<endl;
}
void func(Base* pbase)					//������ͨ����func()������Ϊ����ָ��
{
	pbase->show();
}
int main()
{
	Derive derive;			//����Derive�����derive
	Base base=derive;		//ʹ�ö���deriveΪBase�����base��ֵ
	Base &qbase=derive;		//ʹ�ö���deriveΪBase����������qbase��ֵ
	Base *pbase=&derive;	//ʹ�ö���derive�ĵ�ַΪBase��ָ��pbase��ֵ
	base.show();			//ͨ��Base��������show()����
	qbase.show();			//ͨ��Base��������õ���show()����
	pbase->show();			//ͨ��Base��ָ�����show()����
	func(&derive);			//ȡ����derive�ĵ�ַ��Ϊfunc()�����Ĳ���
	return 0;
}
