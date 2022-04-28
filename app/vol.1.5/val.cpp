#include <iostream>

using namespace std;

int main()
{
    // 変数を定義
    int a;                       // 数値なので int
    cout << "a = " << a << endl; // 代入しないと任意の値が入れられる

    // 変数を更新
    a = 2;
    cout << "a' = " << a << endl;

    // 足したり引いたり
    cout << "a'' = " << a++ << endl;       // a++ で１足す
    cout << "a' = " << a-- << endl;        // a-- で１引く
    cout << "a''' = " << (a += 2) << endl; // ()で囲わないとendlの場所がわからんと言われる

    // ちょっと複雑な計算
    a = a * 5 + a;                       // a*5と+a別の数式として判定されるため方程式は成り立たない
    cout << "a * 5 + a = " << a << endl; // コンパイラが後方参照だから

    // C++って途中で変数定義できるんだって
    int b = 5;
    cout << "b = " << b << endl;

    return 0;
}