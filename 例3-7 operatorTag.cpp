#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Tag
{
private:
	int size;
	char* buf;
public:
	Tag(int n);
	Tag(const char* src);
	~Tag()
	{
		delete[]buf;
	}
	char& operator[](int n);
	void show()
	{
		for(int i=0;i<size;i++)
			cout<<buf[i];
		cout<<endl;
	}
};
Tag::Tag(int n)
{
	size=n;
	buf=new char[size+1];
	*(buf+size)='\0';
}
Tag::Tag(const char* src)
{
	buf = new char[strlen(src)+1];
	strcpy(buf,src);
	size=strlen(buf);
}
char& Tag::operator[](int n)
{
    static char ch=0;
    if (n>size||n<0)  			//��������Ƿ�Խ��
	{
		cout<<"Խ��"<<endl;
		return ch;
	}
	else
	return *(buf+n);
}
int main()
{
	Tag arr1(20);
	for(int i=0;i<20;i++)
		arr1[i]=65+i;  		//����[]��������غ�����ֵ
	arr1.show();
	Tag arr2("Itcast!");
	cout<<arr2[6]<<endl;
	arr2[6]= 'A';
	arr2.show();
     return 0;
}
