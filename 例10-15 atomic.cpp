#include <iostream>
#include <thread>
#include <atomic>
using namespace std;
atomic<int> num = 0;
void func()
{
    for (int i = 0; i < 100000; i++)
    {
        num++;
    }
    cout << "func()num: " << num << endl;
}
int main()
{
    thread t1(func);
    thread t2(func);
    t1.join();
    t2.join(); 
    cout << "main()num: " << num << endl;
    return 0;
}
