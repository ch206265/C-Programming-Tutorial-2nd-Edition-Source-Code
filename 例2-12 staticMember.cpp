#include <iostream>
using namespace std;
class Student       					//����ѧ����Student
{
public:
    Student(string name);				//�������ι��캯��
    ~Student();							//������������
     static int _sum;					//������ʾѧ�������ľ�̬��Ա����
private:
    string _name;						//������ʾѧ�������ĳ�Ա����
};
//����ʵ��Student��������Ĺ��캯��
Student::Student(string name)
{
    this->_name=name;
    _sum++;   
}
Student::~Student(){}					//����ʵ����������
int Student::_sum = 0;					//�����ʼ����̬��Ա����_sum
int main()
{
    Student stu1("����");
    Student stu2("����");
    cout<<"������:"<<stu1._sum<<endl;	//ͨ��������ʾ�̬��Ա����
    cout<<"������:"<<stu2._sum<<endl;
     cout<<"������"<<Student::_sum<<endl;//ͨ������ʾ�̬��Ա����
     cout<<"stu1�Ĵ�С��:"<<sizeof(stu1)<<endl;
    return 0;
}
