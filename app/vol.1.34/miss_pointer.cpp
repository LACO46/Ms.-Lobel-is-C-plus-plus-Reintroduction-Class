#include <iostream>

using namespace std;

// 西暦を引数に渡すと昭和何年か判定してくれる
// 整数の値を渡す
void ChangeToShohwa(int x)
{
    if ((1926 < x) && (x < 1989))
    {
        x -= 1925;
    }
    else
    {
        x = 0;
    }
}

int main()
{
    int nYear;

    cout << "西暦を入力してください > ";
    cin >> nYear;

    // 昭和何年か判定
    // 昭和でない場合は"0"になる
    ChangeToShohwa(nYear);

    if (nYear)
    {
        cout << "昭和" << nYear << "年です" << endl;
    }
    else
    {
        cout << "その年は昭和ではありません" << endl;
    }

    return 0;
}