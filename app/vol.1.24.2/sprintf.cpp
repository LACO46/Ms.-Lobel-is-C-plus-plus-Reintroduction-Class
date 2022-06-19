#include <iostream>
#include <string>

using namespace std;

// 2*x+yをする関数
void func(int x, int y)
{
    char szResult[50];

    // spinrtfはszResultに文字列を挿入
    // char[]のサイズより大きい文字を挿入しようとすると、メモリリークを起こす
    sprintf(szResult, "f(%d,%d) = %d", x, y, 2 * x + y);

    cout << szResult << endl;
}

int main()
{
    // 2*x+yをする関数を実行
    func(1, 2);
    func(182, 144);

    return 0;
}