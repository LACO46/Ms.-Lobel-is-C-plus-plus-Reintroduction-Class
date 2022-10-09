#include <iostream>

using namespace std;

int main()
{
    // 変数を定義
    int a;
    // 変数とポインタを紐付ける（参照）
    // "r"と"a"は同じになる
    // 参照は型名に & を付けた型で定義する
    // 参照は必ず初期化しなければならない。
    // 参照は参照する変数を途中から変更することはできない。
    // 参照を使えば、& や * を使わなくても変数を参照できる。
    int &r = a;

    // aの値を代入
    a = 0;
    cout << "updated a" << endl;
    cout << " a = " << a << endl;
    cout << " r = " << r << endl;
    cout << endl;

    // rの値を代入
    r = 100;
    cout << "updated r" << endl;
    cout << " a = " << a << endl;
    cout << " r = " << r << endl;
    cout << endl;

    cout << "&a = " << &a << endl;
    cout << "&r = " << &r << endl;

    return 0;
}