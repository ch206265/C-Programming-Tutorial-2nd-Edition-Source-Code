#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>
#include <ratio>
using namespace std;
int main()
{
 	//定义duration对象oneday，表示一天
    chrono::duration<int, ratio<60 * 60 * 24>> oneday(1);
 	//获取系统当前时间
    chrono::system_clock::time_point today = chrono::system_clock::now();
 	//计算明天的时间
    chrono::system_clock::time_point tomorrow = today + oneday;
    time_t t;		//创建time_t时间对象t
 	//将对象today中的时间转换之后存储到时间对象t中
    t = chrono::system_clock::to_time_t(today);
    cout << "today:" << ctime(&t);
 	//将对象tomorrow中的时间转换之后存储到时间对象t中
    t= chrono::system_clock::to_time_t(tomorrow);
    cout << "tomorrow:" << ctime(&t);
    return 0;
}
