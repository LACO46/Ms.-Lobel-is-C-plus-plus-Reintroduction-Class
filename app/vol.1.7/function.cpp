#include <iostream>
using namespace std;

// 関数
// 引数 x,y
// 引数 intとint
// int f()なので int型の値を返す必要がある
int f(int x, int y)
{
    return 2 * x + y; // intを返却
}

int main()
{
    cout << "f(1,2) = " << f(1, 2) << endl;         // 関数呼び出し
    cout << "f(182,144) = " << f(182, 144) << endl; // 関数呼び出し

    return 0;
}