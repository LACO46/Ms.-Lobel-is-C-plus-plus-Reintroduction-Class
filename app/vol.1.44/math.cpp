#include <iostream>
// 高度の数式を使う
#include <math.h>

using namespace std;

int main()
{
    // 演算は double 型で行うのが基本。
    double a, b;

    cout << "直角を挟む２辺の長さを入力" << endl;
    cout << "A=";
    cin >> a;
    cout << "B=";
    cin >> b;

    // squrt() はmath.hに定義されている
    cout << "斜辺の長さは "
         << sqrt(a * a + b * b) << " です。" << endl;
}