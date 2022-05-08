#include <iostream>

using namespace std;

int a = 0;

void test()
{
    // 変数定義
    // test()内で定義した変数
    int b = 1;

    // 変数表示
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    // 関数呼び出し
    test();

    // aの値を更新
    a = 2;
    cout << "a' = " << a << endl;

    // bを作成
    // bはグローバルではない
    int b = 3;
    cout << "b' = " << b << endl;

    return 0;
}