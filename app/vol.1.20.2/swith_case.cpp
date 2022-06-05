#include <iostream>

using namespace std;

int main()
{
    int a, b, result, sign;

    for (int i = 0; i < 5; i++)
    {
        cout << "第１項 >> ";
        cin >> a;
        cout << "第２項 >> ";
        cin >> b;
        cout << "どれをしますか（1：加算，2：減算，3：乗算，4：除算） >> ";
        cin >> sign;

        // 条件分岐
        // 条件として検証する値をswitch()の引数にする
        switch (sign)
        {
        // signの値を検証
        case 1:
            result = a + b;
            // breakでswithを抜ける
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
        default:
            cout << "入力エラー\n";
            // breakを使わなくてもswitchを抜けることができる
            // continueはforループで
            continue;
        }

        cout << "計算結果 >> " << result << "\n";
    }

    return 0;
}