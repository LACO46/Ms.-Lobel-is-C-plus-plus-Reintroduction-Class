#include <iostream>
using namespace std;

// 関数名
void hello()
{
    cout << "hello world" << endl;

    // 返り値を記述する必要はない
}

// 関数名
// 引数を取ることができる
void number(int a)
{
    cout << "a = " << a << endl;
}

int main()
{
    hello(); // 同一ファイル内なのでそのまま呼び出せる
    hello();
    number(1); // 引数を取っていてもそのまま呼び出せる
    number(2);

    return 0;
}