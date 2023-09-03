#include<iostream>
#include<string>
using namespace std;
class Data{/*...*/};	//Data�ඨ������3-10��
class Count				//Count�����ڴ洢ָ��ͬһ��Դ��ָ������
{
public:
    friend class SmartPtr;
    Count(Data *pdata):_pdata(pdata),_count(1)
	{
		cout<<"Count�๹�캯��"<<endl;
	}
    ~Count()
    {
		cout<<"Count����������"<<endl;
        delete _pdata;
    }
private:
    Data *_pdata;
    int _count;
};
//ʹ��ָ��ʵ������ָ��
class SmartPtr			//SmartPtr�����ڶ�ָ��Data������ָ��ʵ�����ܹ���
{
public:
    SmartPtr(Data* pdata):_reNum(new Count(pdata))
	{
		cout<<"�����������"<<endl;
	}
    SmartPtr(const SmartPtr&another):_reNum(another._reNum)
    {
		++_reNum->_count;
        cout<<"Smartptr�ิ�ƹ��캯��"<<endl;
    }
    ~SmartPtr()
    {
        if(--_reNum->_count==0)
        {
            delete _reNum;
            cout<<"Smartptr����������"<<endl;
		}		
    }
	Data *operator->()
	{
		return _reNum->_pdata;
	}
	Data &operator*()
	{
		return *_reNum->_pdata;
	}
	int disCount()
	{
		return _reNum->_count;
	}
private:
    Count *_reNum;
};
int main()
{
	Data  *pstr1=new Data("I Love China!");
	SmartPtr pstr2=pstr1;
	(*pstr1).dis();
	SmartPtr pstr3=pstr2;
	pstr2->dis();
	cout<<"ʹ�û�������ָ��������"<<pstr2.disCount()<<endl;
	return 0;
}
