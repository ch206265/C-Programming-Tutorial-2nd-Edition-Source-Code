#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &ra=a;
    cout<<"����a�ĵ�ַ"<<hex<<&a<<endl;
    cout<<"����ra�ĵ�ַ:"<<hex<<&ra<<endl;
    cout<<"����ra��ֵ:"<<dec<<ra<<endl;
    return 0;
}
