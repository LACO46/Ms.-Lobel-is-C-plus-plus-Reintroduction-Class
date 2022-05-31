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
            // return以降は処理されない
            // 処理を終了する
            cout << "０では割れません" << endl;
            return 0;
        }

        cout << a << "/" << b << "=" << a / b << "..." << a % b << endl;
    }

    return 0;
}