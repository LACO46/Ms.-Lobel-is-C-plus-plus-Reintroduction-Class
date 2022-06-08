#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    char b = -1;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 型変換（キャスト）
    a = (unsigned char)b;

    cout << "a'= " << a << endl;
    cout << "b'= " << b << endl;

    return 0;
}