#include <iostream>
using namespace std;
template< typename T, unsigned len> 	//������ģ�����unsigned len
class Array
{
public:
	T& operator[](unsigned i)		//�����±������
	{
		if (i >= len)
				cout << "����Խ��" << endl;
		else
				return arr[i];
	}
private:
	T arr[len];
};
int main()
{
	Array<char, 5> arr1;  			//����һ������Ϊ5��char��������
	Array<int, 10> arr2;  			//����һ������Ϊ10��int����
	arr1[0]= 'A';
	cout<<arr1[0]<<endl;
	for (int i = 0; i < 10; i++)	//Ϊint��������arr2��ֵ�����
		arr2[i] = i + 1;
	for (int i = 0; i < 10; i++)
		cout<<arr2[i]<< " ";
		cout<<endl;
	return 0;
}
