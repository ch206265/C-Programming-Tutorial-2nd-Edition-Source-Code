#include <iostream>
#include <fstream>
using namespace std;
struct Student					//����ѧ���ṹ��Student
{
 	char name[20];				//����
 	int age;					//����
 	char sex;					//�Ա�
};
int main()
{
 	Student stus[3];			//����ѧ���ṹ�����飬��СΪ3
 	cout << "������3��ѧ������Ϣ:\n������ ���� �Ա�" << endl;
 	for (int i = 0; i < 3; i++)	//ͨ��forѭ���Ӽ��̶���ѧ����Ϣ
 	{
 		cin >> stus[i].name>>stus[i].age>>stus[i].sex;
 	}
	//��������ļ��������Զ����ơ�д��ģʽ��student.dat�������ļ�
 	ofstream ofs("student.dat", ios::out | ios_base::binary);
 	if (!ofs)
 	{
 		cerr << "д��ʱ���ļ���ʧ��" << endl;
 		exit(0);
 	}
 	//ͨ��forѭ����3��ѧ������Ϣд���ļ�	
 	for (int i = 0; i < 3; i++)
 	{
		//����write()����д�����ݣ�ÿ��д��һ��ѧ����Ϣ
 		ofs.write(reinterpret_cast<char*>(&stus[i]), sizeof(stus[i]));
 		ofs.flush();
 	}
 	ofs.close();				//�ر��ļ�
 	cout << "д��ɹ�" << endl << "��ȡ�ļ�:" << endl;
 	//���������ļ���������ֻ���Ͷ�����ģʽ��student.txt�ļ�
 	ifstream ifs("student.dat", ios::in | ios_base::binary);
 	if (!ifs)
 	{
 		cout << "��ȡʱ���ļ���ʧ��" << endl;
 		exit(0);
 	}
	Student stus1[3];			//����ѧ���ṹ�����ݴ洢��ȡ���ļ�����
 	for (int i = 0; i < 3; i++)
 	{
		//����read()������ȡ���ݣ�ÿ�ζ�ȡһ��ѧ����Ϣ
 		ifs.read(reinterpret_cast<char*>(&stus1[i]), sizeof(stus1[i]));
 		cout << stus1[i].name << " " << stus1[i].age 
			<< " " << stus1[i].sex << endl;
 	}
 	ifs.close();				//�ر��ļ�
 	return 0;
}
