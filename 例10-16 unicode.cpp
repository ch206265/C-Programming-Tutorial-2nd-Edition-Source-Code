#include <iostream>
using namespace std;
int main()
{
 	//��ͨ�ַ�����
    char arr1[] = "��ã����";
 	//wchar_t��������
    wchar_t arr2[] = L"�й�";
 	//UTF-8���뷽ʽ
    char arr3[] = u8"���";
 	//UTF-16���뷽ʽ
    char16_t arr4[] = u"hello";
 	//UTF-32���뷽ʽ
    char32_t arr5[] = U"hello ��\u4f60\u597d\u554a";
    cout << "arr1:" << arr1 << endl;
    cout << "arr2:" << arr2 << endl;
    cout << "arr3:" << arr3 << endl;
    cout << "arr4:" << arr4 << endl;
    cout << "arr5:" << arr5 << endl;
    return 0;
}
