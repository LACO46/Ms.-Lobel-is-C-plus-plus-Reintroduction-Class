#include <iostream>

using namespace std;

int main()
{
    // 変数を定義
    int a;
    // 変数とポインタを紐付ける（参照）
    // "r"と"a"は同じになる
    int &r = a;

    a = 0;
    cout << " a = " << a << endl;
    cout << " r = " << r << endl;

    a = 100;
    cout << " a = " << a << endl;
    cout << " r = " << r << endl;

    cout << "&a = " << &a << endl;
    cout << "&r = " << &r << endl;

    return 0;
}