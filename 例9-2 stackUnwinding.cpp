#include <iostream>
using namespace std;
class Shape						//������״��Shape
{
public:
	Shape();					//���캯��
	~Shape();					//��������
	static int count;			//��̬��Ա����count
};
int Shape::count = 0;			//count��ʼֵΪ0
Shape::Shape()					//ʵ�ֹ��캯��
{
	count++;
	if (Shape::count == 3)
		throw "ֽ�Ż�����������";
	cout << "Shape���캯��" << endl;
}
Shape::~Shape()					//ʵ����������
{
	cout << "Shape��������" << endl;
}
int main()
{
	Shape circle;				//��Բ��
	try							//try����������׳��쳣�Ĵ���
	{
		int num = 2;			//����int���ͱ���num,��ʾֽ�ſɻ�����ͼ��
		cout << "ֽ�ſɻ�ͼ�θ�����" << num << endl;
		Shape rectangle;		//��������
		Shape triangle;		 	//��������
	}
	catch (const char* e)		//�����쳣
	{
		cout << e << endl;
	}
	return 0;
}
