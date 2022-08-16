#include <iostream>

using namespace std;

// セミコロンはつけない
// マクロはコードの置き換えだから
#define MUL1(a, b) a + b

// 計算では()の意味が異なる
#define MUL2(a, b) (a + b)

// 改行したい場合には"\"を利用する
#define SHOW(func) cout << "MULの計算式の結果 => " \
                        << func                           \
                        << endl;

int main()
{
    SHOW(MUL1(2, 3) * 3);
    SHOW(MUL2(2, 3) * 3)

    return 0;
}