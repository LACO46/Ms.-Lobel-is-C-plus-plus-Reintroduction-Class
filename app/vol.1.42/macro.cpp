#include <iostream>

using namespace std;

int main()
{
    // 重力加速度
    // 変更できない
    const float gravity = 9.8;
    cout << gravity << endl;

    // ポインタを定義
    // 変更できる
    // 参照先が変数
    const char *p1 = "hello";
    cout << p1 << endl;
    p1 = "world";
    cout << p1 << endl;

    // ポインタを定義
    // 変更できない
    // 参照先が定数
    char *const p2 = "hello";
    cout << p2 << endl;

    return 0;
}