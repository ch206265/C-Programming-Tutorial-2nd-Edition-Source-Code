#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//�����ļ������󣬲���ֻдģʽ��hello.txt�ļ�
	ofstream ofs("hello.txt",ios::out); 
	if (!ofs)								//�ж��ļ����Ƿ�ɹ�
	{
		cout<<"д�ļ�ʱ���ļ���ʧ��"<<endl;
		exit(0);
	}
	cout<<"������Ҫд���ļ������ݣ�"<<endl;
	char str[1024]={0};						//��������str
	cin>>str;								//�Ӽ����������ݴ洢��str����
	ofs<<str;								//��str����������д���ļ�
	cout<<"�ļ�д��ɹ�"<<endl;
	ofs.close();							//�ر��ļ�
	//�����ļ������󣬲���ֻ��ģʽ��hello.txt�ļ�
	ifstream ifs("hello.txt",ios::in);
	if (!ifs)								//�ж��ļ��Ƿ�򿪳ɹ�
	{
		cout<<"���ļ�ʱ���ļ���ʧ��"<<endl;
		exit(0);
	}
	char buf[1024]={0};						//��������buf
	ifs>>buf;								//���ļ����ݶ��뵽buf
	cout<<"�ļ���ȡ�ɹ����������£�"<<endl;
	cout<<buf<<endl;						//���buf�����е�����
	ifs.close();							//�ر��ļ�
	return 0;
}
