#include <iostream>
#include <fstream>					//����fstream�ļ�
using namespace std;
int main()
{
	ifstream ifs;					//��������������
 	ifs.open("hello.txt", ios::in);			//��ֻ����ʽ��hello.txt
 	if (!ifs)					//�ж��ļ����Ƿ�ɹ�
 		cout << "�ļ���ʧ��" << endl;
 	else
 		cout << "�ļ��򿪳ɹ�" << endl;
	ifs.close();					//�ر��ļ�
	return 0;
}
