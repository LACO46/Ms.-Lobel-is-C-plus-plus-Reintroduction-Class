#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    // forループ内で定義していない変数をループの終了条件にすることができる
    for (; a < 10;)
    {
        cout << a << endl;
        a += 2;
    }
}