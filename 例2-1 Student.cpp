#include <iostream>
using namespace std;
class Student							//����ѧ����Student
{
public:									//��������
	void study();						//������ʾѧϰ�ĳ�Ա����
	void exam();	   					//������ʾ���Եĳ�Ա����			
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
int main()
{
	Student stu;						//����Student�����
	stu._name = "����";					//���ö�������
	stu._age = -20;						//���ö�������
	cout << stu._name << stu._age << "��" << endl;
	stu.study();						//����study()��Ա����
	stu.exam();							//����exam()��Ա����
 	return 0;
}
