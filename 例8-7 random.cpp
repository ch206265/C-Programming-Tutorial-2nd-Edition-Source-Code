#include <iostream>
#include <fstream>
using namespace std;
int main( ) 
{
	//��������ļ�������ofs
	ofstream ofs("random.dat",ios::out|ios::binary);
	if(!ofs)
	{
		cout<<"д���ļ�ʱ���ļ���ʧ��"<<endl;
		exit(0);
	}
	//����ļ�λ��ָ���λ��
	cout<<"�ļ���ʱ���ļ�λ��ָ��λ�ã�"<<ofs.tellp()<<endl;
	cout<<"���������ݣ�"<<endl;
	char buf[1024]={0};				//�����ַ�����buf
	cin.getline(buf,1024,'/');		//�Ӽ��̶�ȡ���ݴ洢��buf��
	ofs.write(buf,30);				//����write()������buf�е�����д�뵽�ļ�
	//д�����֮������ļ�λ��ָ���λ��
	cout<<"д����ɺ��ļ�λ��ָ��λ�ã�"<<ofs.tellp()<<endl;
	ofs.seekp(-10,ios::end);		//�ƶ��ļ�λ��ָ��
	//�ƶ�֮������ļ�λ��ָ���λ��
	cout<<"�ƶ�֮���ļ�λ��ָ��λ�ã�"<<ofs.tellp()<<endl;
	return 0;
}
