#include <iostream>

using namespace std;

// 表示するだけのループ
void SimpleLoop()
{
    // 繰り返し処理
    // "**********"を10回表示
    // 0~9まで
    for (int i = 0; i < 10; i++)
    {
        cout << "**********" << endl;
    }
}

// ループした値をカウントするだけのループ
void CountLoop()
{
    // ループのiの値を出力する
    // iに1ずつ追加する
    for (int i = 0; i < 10; i++)
    {
        cout << "i = " << i << endl;
    }
}

int main()
{
    SimpleLoop();
    CountLoop();
    return 0;
}