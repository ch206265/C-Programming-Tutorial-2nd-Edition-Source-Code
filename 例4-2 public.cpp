#include <iostream>
using namespace std;
class Student							//����ѧ����Student
{
public:
void setGrade(string grade);			//�����꼶�ĳ�Ա����
string getGrade();						//��ȡ�꼶�ĳ�Ա����
void setName(string name);				//���������ĳ�Ա����
string getName();						//��ȡ�����ĳ�Ա����
protected:
	string _grade;						//������Ա����ʾ�꼶
private:
	string _name;						//˽�г�Ա����ʾ����
};
void Student::setGrade(string grade)	//����ʵ��setGrade()����
{
	_grade=grade;
}
string Student::getGrade()				//����ʵ��getGrade()����
{
	return _grade;
}
void  Student::setName(string name)		//����ʵ��setName()����
{
	_name=name;
}
string Student::getName()				//����ʵ��getName()����
{
	return _name;
}
class Undergraduate:public Student		//��ѧ���๫�м̳�ѧ����
{
public:
	Undergraduate(string major);		//�������캯��
	void show();						//������ʾ��ѧ����Ϣ�ĳ�Ա����
private:
	string _major;						//˽�г�Ա����ʾרҵ
};
//����ʵ�ֹ��캯��
Undergraduate::Undergraduate(string major)
{
	_major=major;
}
void Undergraduate::show()				//����ʵ��show()����
{
	cout<<"������"<<getName()<<endl;		//��������û����Ա����
	cout<<"�꼶��"<<_grade<<endl;		//��������ʼ̳еĻ����Ա����
	cout<<"רҵ��"<<_major<<endl;		//���������������Ա
}
int main()
{
	//������ѧ�������stu
	Undergraduate stu("�������Ϣ����");	
	stu.setGrade("����");			//�����������û����Ա���������꼶
	stu.setName("zhangsan");		//�����������û����Ա������������
	stu.show();						//������������������Ա������ʾѧ����Ϣ
	return 0;
}
