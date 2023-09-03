#include <iostream>
using namespace std;
class  Person							//������Person
{
public:
    Person(string ,int,string,string); //�������ι��캯��
    ~Person();							//������������
    const string _addr; 				//������ʾסַ�ĳ���Ա����
    void  myInfor() const;				//������ʾ������Ϣ�ĳ���Ա����
    void  myInfor();					//������ʾ������Ϣ����ͨ��Ա����
    void place();						//������ʾסַ����ͨ��Ա����
private:
    const string _name; 				//������ʾ�����ĳ���Ա����
    const int _age;						//������ʾ����ĳ���Ա����
    string _favFruit;					//������ʾˮ������ͨ��Ա����
};
//�вι��캯����ʼ������
Person::Person(string name,int age,string addr,string favFruit):
	_name(name), _age(age),_addr(addr),_favFruit(favFruit)
{
}
void Person::myInfor() const			//����ʵ�ֳ���Ա����myInfor()
{
    //_favFruit="����";
    //place();
    cout<<"�ҽ�"<<_name<<"����"<<_age<<"��"<<"��ϲ����"<<_favFruit<<endl;  
}
Person:: ~Person(){}					//����ʵ����������
void Person::myInfor()					//����ʵ����ͨ��Ա����myInfor()
{
    _favFruit="����";
    cout<<"�ҽ�"<<_name<<"����"<<_age
 		<<"��"<<"��ϲ����"<<_favFruit<<endl; 
    place();
}
void Person::place()					//����ʵ����ͨ��Ա����place()
{
    cout<<"��ס��"<<_addr<<endl;
}
int main()
{
    Person p1("����",18,"�����","ƻ��");			//��������p1
    p1.myInfor();								//������ͨ��Ա����myInfor()
    const Person p2("����",18,"�ϴ��","����");	//����������p2
    p2.myInfor();								//���ó���Ա����myInfor()
    return 0;
}
