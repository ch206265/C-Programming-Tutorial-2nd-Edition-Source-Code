#include <iostream>
using namespace std;
class Student							//����ѧ����Student
{
public:									//��������
	void study();						//������ʾѧϰ�ĳ�Ա����
	void exam();	   					//������ʾ���Եĳ�Ա����
	void setName(string name);			//�������������ĳ�Ա����
	void setAge(int age);				//������������ĳ�Ա����
	string getName();					//������ȡ�����ĳ�Ա����
	int getAge();						//������ȡ����ĳ�Ա����
private:								//˽������
	string _name;						//������ʾ�����ĳ�Ա����
	int _age;							//������ʾ����ĳ�Ա����
};
void Student::study()					//����ʵ��studey()��Ա����
{
	cout << "ѧϰC++" << endl;
}
void Student::exam()					//����ʵ��exam()��Ա����
{
	cout << "C++���Գɼ�100��" << endl;
}
void Student::setName(string name)		//����ʵ��setName()��Ա����
{
	_name = name;
}
void Student::setAge(int age)			//����ʵ��setAge()��Ա����
{
	if (age < 0 || age > 100)
	{
		cout << "_name" << "�����������" << endl;
		_age = 0;
	}
	else
		_age = age;
}
string Student::getName()				//����ʵ��getName()����
{
	return _name;
}
int Student::getAge()					//����ʵ��getAge()����
{
	return _age;
}
int main()
{
	Student stu;						//����Student�����stu
	stu.setName("����");					//���ö���stu������
	stu.setAge(-20);					//���ö���stu������
 	//���ó�Ա����getName()��getAge()��ȡ����stu�����������䣬�����
	cout << stu.getName() << stu.getAge() << "��" << endl;
	stu.study();						//���ó�Ա����study()
	stu.exam();							//���ó�Ա����exam()
 	Student stu1;						//����Student�����stu1
	stu1.setName("����");
	stu1.setAge(22);
	cout << stu1.getName() << stu1.getAge() << "��" << endl;
	stu1.study();
	stu1.exam();
 	return 0;
}
