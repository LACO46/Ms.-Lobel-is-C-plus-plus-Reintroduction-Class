#include <iostream>

using namespace std;

int main()
{
    int a, b;

    // 無限ループ
    while (1)
    {
        cout << "１つ目の数字を入力してください：";
        cin >> a;

        cout << "２つ目の数字を入力してください：";
        cin >> b;

        if (b == 0)
        {
            // breakでループを抜ける
            // for(...){,,,} でも break を利用可能
            cout << "０では割れません" << endl;
            break;
        }

        cout << "a/b = " << a / b << "..." << a % b << endl;
    }

    return 0;
}