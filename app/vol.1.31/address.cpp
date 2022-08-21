#include <iostream>

using namespace std;

int main()
{
    int a;
    int b[10];

    // アドレスの確認
    // "&"をつけると、アドレスにアクセスでき
    // 配列の場合は"&"をつけなくても値は同一
    // 関数のアドレスを確認できる
    cout << "========== 上書き前 ==========" << endl;
    cout << "&a =>" << &a << endl;
    cout << "&b => " << &b << endl;
    cout << "b => " << b << endl;
    cout << "main() => " << main << endl;

    // 値を上書き
    a = 10;
    for (int i = 0; i < 10; i++)
    {
        b[i] = i;
    }

    // 値を代入してもアドレスは変わらない
    cout << "========== 上書き後 ==========" << endl;
    cout << "&a =>" << &a << endl;
    cout << "&b => " << &b << endl;
    cout << "b => " << b << endl;
    cout << "main() => " << main << endl;

    return 0;
}