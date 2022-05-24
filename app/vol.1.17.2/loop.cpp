#include <iostream>

using namespace std;

int main()
{
    // ループの条件は最初に処理される
    // コードは上から処理される
    // 何も表示されない
    for (int i = 10000; i < 10; i++)
    {
        cout << i << endl;
    }
}