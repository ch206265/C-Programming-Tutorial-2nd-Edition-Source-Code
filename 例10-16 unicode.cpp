#include <iostream>
using namespace std;
int main()
{
 	//普通字符数组
    char arr1[] = "你好，祖国";
 	//wchar_t类型数组
    wchar_t arr2[] = L"中国";
 	//UTF-8编码方式
    char arr3[] = u8"你好";
 	//UTF-16编码方式
    char16_t arr4[] = u"hello";
 	//UTF-32编码方式
    char32_t arr5[] = U"hello 和\u4f60\u597d\u554a";
    cout << "arr1:" << arr1 << endl;
    cout << "arr2:" << arr2 << endl;
    cout << "arr3:" << arr3 << endl;
    cout << "arr4:" << arr4 << endl;
    cout << "arr5:" << arr5 << endl;
    return 0;
}
