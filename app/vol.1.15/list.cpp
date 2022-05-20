#include <iostream>

using namespace std;

int main()
{
    // 配列は0~n-1番目までが生成される
    // 配列の最初は0からスタート
    // 配列の最後はn-1まで
    int a[2];

    // aの0番目にアクセス
    a[0] = 100;
    cout << "a[0] = " << a[0] << endl;

    // aの1番目にアクセス
    a[1] = 200;
    cout << "a[1] = " << a[1] << endl;

    // aの0番目を上書き
    a[0] = 300;
    cout << "a[0] = " << a[0] << endl;

    return 0;
}