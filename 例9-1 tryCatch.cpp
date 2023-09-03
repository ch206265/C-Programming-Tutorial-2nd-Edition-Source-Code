#include <iostream>
#include <fstream>
using namespace std;
class AbstractException				//��������쳣��AbstractException
{
public:
	virtual void printErr() = 0;	//���麯��printErr()
};
//�����ļ��쳣��FileException���м̳�AbstractException
class FileException : public AbstractException
{
public:
	virtual void printErr()			//ʵ��prinErr()����
	{
		cout << "�����ļ�������" << endl;
	}
};
//���������쳣��DivideException���м̳�AbstractException
class DivideException : public AbstractException
{
public:
	virtual void printErr()			//ʵ��printErr()����
	{
		cout << "���󣺳����쳣" << endl;
	}
};
void readFile()						//����readFile()����
{
	ifstream ifs("log.txt");		//�����ļ�����������ifs����log.txt�ļ�
	if (!ifs)						//����ļ���ʧ��
	{
		throw FileException();		//�׳��쳣
	}
	ifs.close();					//�ر��ļ�
}
void divide()						//����divide()����
{
	int num1 = 100;
	int num2 = 2;
	if (num2 == 0)					//�������num2Ϊ0
	{
		throw DivideException();	//�׳��쳣
	}
	int ret = num1 / num2;
	cout << "��������������" << ret << endl;
}
int main()
{
	try	
	{
		readFile();					//���readFile()��������
		divide();					//���divide()��������
	}
	catch (FileException& fex)		//����FileException&�����쳣
	{
		fex.printErr();				//������Ӧ��������쳣��Ϣ
	}
	catch (DivideException& dex)	//����DivideException&�����쳣
	{
		dex.printErr();
	}
	catch (...)						//�������������쳣	
	{
		cout << "���������쳣" << endl;
	}
 	cout << "����ִ�н���" << endl;
	return 0;
}
