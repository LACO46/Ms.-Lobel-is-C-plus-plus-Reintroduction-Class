#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    // 無限ループ
    // ctr+cで強制終了
    for (;;)
    {
        cout << a << endl;
        a++;
    }
}