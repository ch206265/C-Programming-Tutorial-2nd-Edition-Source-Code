#include <iostream>
using namespace std;
class Person					//������Person
{
public:
    Person(string name,int age,string addr);  //�������ι��캯��
    const string _addr; 		//������ʾסַ�ĳ���Ա����
	~Person();					//������������
private:
    const string _name; 		//������ʾ�����ĳ���Ա����
    const int _age;				//������ʾ����ĳ���Ա����
};
//����ʵ�ֹ��캯��
Person::Person(string name,int age,string addr):
	_name(name),_age(age),_addr(addr)
{
    cout<<"��ʼ��const���εĳ�Ա����"<<endl;
    cout<<"name:"<<_name<<endl;
    cout<<"age:"<<_age<<endl;
    cout<<"addr:"<<_addr<<endl;
}
Person::~Person(){}				//����ʵ����������
int main()
{
    Person p1("����",18,"�����");
     p1._addr="�ϴ��";
    return 0;
}
