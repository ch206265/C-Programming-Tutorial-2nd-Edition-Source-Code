#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//�����ļ������󣬲���ֻдģʽ��hello.txt�ļ�
	ofstream ofs("hello.txt",ios::out); 
	if (!ofs)							//�ж��ļ����Ƿ�ɹ�
	{
		cout<<"д�ļ�ʱ���ļ���ʧ��"<<endl;
		exit(0);
	}
	cout<<"��26����ĸд���ļ�"<<endl;
	char ch1='a';
	for(int i=0;i<26;i++)
	{
		ofs.put(ch1+i);					//����put()��������ĸд���ļ�
	}
	cout<<"�ļ�д��ɹ�"<<endl;
	ofs.close();						//�ر��ļ�
	//�����ļ������󣬲���ֻ��ģʽ��hello.txt�ļ�
	ifstream ifs("hello.txt",ios::in);
	if (!ifs)							//�ж��ļ��Ƿ�򿪳ɹ�
	{
		cout<<"���ļ�ʱ���ļ���ʧ��"<<endl;
		exit(0);
	}
	cout<<"�ļ���ȡ�ɹ����������£�"<<endl;
	char ch2;
	ifs.get(ch2);						//����get()��������ĸ��ȡ��ch2������
	while (!ifs.eof())					//ѭ����ȡʣ����ĸ
	{
		cout<<ch2;						//���ch2��ֵ
		ifs.get(ch2);
	}
	ifs.close();						//�ر��ļ�
	return 0;
}
