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
        // 上から順番に判定
        if (sign == 1)
        {
            result = a + b;
        }
        else if (sign == 2)
        {
            result = a - b;
        }
        else if (sign == 3)
        {
            result = a * b;
        }
        else if (sign == 4)
        {
            result = a / b;
        }
        else
        {
            cout << "入力エラー\n";
            continue;
        }

        cout << "計算結果 >> " << result << "\n";
    }
}