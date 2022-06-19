#include <iostream>

// string.hの代わり
#include <cstring>

using namespace std;

int main()
{
    char szHello[] = "こんにちは！";
    int i;

    // char[]の最後の部分を数えられない
    // null charは数えられない
    cout << "strlen()の結果：" << strlen(szHello) << endl;

    // 文字コードを出力
    for (i = 0; i < strlen(szHello); i++)
    {
        cout << (int)(unsigned char)szHello[i] << endl;
    }

    cout << "aaaaaaaaaa" << endl;
    cout << (int)(unsigned char)szHello[i] << endl;

    // char[]の最後の部分を数えられる
    // null charは数えられる
    cout << "sizeof()の結果：" << sizeof(szHello) << endl;

    // 文字コードを出力
    for (i = 0; i < sizeof(szHello); i++)
    {
        cout << (int)(unsigned char)szHello[i] << endl;
    }

    return 0;
}