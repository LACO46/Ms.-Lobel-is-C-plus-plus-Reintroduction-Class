#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    // 終了条件を変えることもできる
    for (int i = 0; a < 10; i++)
    {
        cout << i << "," << a << endl;
        a += 2;
    }
}