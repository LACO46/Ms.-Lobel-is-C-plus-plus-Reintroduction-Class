#include <iostream>

using namespace std;

int main()
{
    char a;
    // ポインタ変数
    // ポインタ変数を定義する場合"*"をつける
    char *b;

    // 変数のポインタを取得する場合"&"をつける
    // ポインタを渡すことができる
    b = &a;

    // 64bitのintにキャスト
    // unsigned intでは、制度が失われる可能性がある
    cout << "b = " << (uint64_t)b << endl;
    cout << "&a = " << (uint64_t)&a << endl;

    // 代入をしてもポインタは変わらない
    // charへの代入は"'"を利用する
    a = 'A';
    cout << "b = " << (uint64_t)b << endl;
    cout << "&a = " << (uint64_t)&a << endl;

    return 0;
}