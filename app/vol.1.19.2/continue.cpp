#include <iostream>

using namespace std;

int main()
{

    int a, b;

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "１つ目の数値を入力してください：";
        cin >> a;

        cout << "２つ目の数値を入力してください：";
        cin >> b;

        if (b == 0)
        {
            // continue以降の処理はスキップ
            // ループの最初に戻る
            // ループの変数iはリセットされない
            cout << "０では割れません" << endl;
            continue;
        }

        cout << a << "/" << b << "=" << a / b << "..." << a % b << endl;
    }

    return 0;
}