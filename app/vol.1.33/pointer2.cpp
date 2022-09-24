#include <iostream>

using namespace std;

int main()
{
    // int型の変数を定義
    // 変数に整数を代入
    int a = 10;
    // int型のポインタ変数を定義
    // aのアドレスを代入
    int *p = &a;

    // とりあえずプリント
    cout << "a=" << a << " : b=" << *p << endl;

    // ポインタ変数の値を変更してみる
    *p = 20;
    cout << "a'=" << a << " : b'=" << *p << endl;

    // 改めて、変数を変更してみる
    a = 30;
    cout << "a''=" << a << " : b''=" << *p << endl;

    return 0;
}