#include <iostream>

using namespace std;

// マクロ名（FUNC1）を定義
// 関数名（Func1()）を定義
#define FUNC1 void Func1(int x, int y)

// マクロ名（FUNC2）を定義
// 関数名（name()）を定義
#define FUNC2 void name(int x, int y)

// マクロ名（FUNC3）を定義
// 関数名（hello()）を定義
#define FUNC3(hello) void hello(int x, int y)

// 利用するマクロの呼び出し
// 関数の定義では（FUNC1）を利用
// 関数呼び出し時は（Func1()）を利用
FUNC1;

// 関数の定義では（FUNC2）を利用
// 関数呼び出し時は（name()）を利用
FUNC2;

// 関数の定義では（FUNC3）を利用
// 関数呼び出し時は（func()）を利用
FUNC3(func);

int main(void)
{
    // 呼び出す時はマクロで定義した関数名を利用
    // FUNC1で定義された関数を利用
    // void Func1(int x, int y)
    Func1(1, 2);

    // 呼び出す時はマクロで定義した関数名を利用
    // FUNC2で定義された関数を利用
    // void name(int x, int y)
    name(1, 2);

    // 呼び出す時はマクロで定義した関数名を利用
    // FUNC3で定義された関数を利用
    // 定義された関数を利用
    // void hello(int x, int y)
    // マクロから引数として取られた関数名を利用
    // func(int x, int y)
    func(1, 2);

    return 0;
}

// 関数の定義の代わりにマクロ名を利用
// 関数（マクロ）の詳細
// 本来の関数は => Func1(int x, int y)
FUNC1
{
    cout << "2 * " << x << " + " << y << " = " << 2 * x + y << endl;
}

// 関数の定義の代わりにマクロ名を利用
// 関数（マクロ）の詳細
// 本来の関数は => name(int x, int y)
FUNC2
{
    cout << "3 * " << x << " + " << y << " = " << 3 * x + y << endl;
}

// 関数の定義の代わりにマクロ名を利用
// 関数（マクロ）の詳細
// 本来の関数は => hello(int x, int y)
FUNC3(func)
{
    cout << "4 * " << x << " + " << y << " = " << 4 * x + y << endl;
}