#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    // 入力１
    cout << "num1 : ";
    cin >> num1;

    // 入力２
    cout << "num2 : ";
    cin >> num2;

    // IF文
    if (num1 < num2)
    {
        cout << "num2 = " << num2 << "の方が大きいです" << endl;
    }
    else
    {
        cout << "num1 = " << num1 << "の方が大きいです" << endl;
    }

    // \?を使う
    // (<条件>) ? <真の場合> : <偽の場合>
    cout << ((num1 < num2)
                 ? cout << "num2 = " << num2 << "の方が大きいです" << endl
                 : cout << "num1 = " << num1 << "の方が大きいです" << endl)
         << endl;
}