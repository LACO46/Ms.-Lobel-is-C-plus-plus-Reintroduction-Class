#include <iostream>

using namespace std;

int main()
{
    // 変数を定義
    int a;
    // 変数とポインタを紐付ける（参照）
    // "r"と"a"は同じになる
    int &r = a;

    // a値を代入
    a = 0;
    cout << "updated a" << endl;
    cout << " a = " << a << endl;
    cout << " r = " << r << endl;
    cout << endl;

    r = 100;
    cout << "updated r" << endl;
    cout << " a = " << a << endl;
    cout << " r = " << r << endl;
    cout << endl;

    cout << "&a = " << &a << endl;
    cout << "&r = " << &r << endl;

    return 0;
}