#include <iostream>

using namespace std;

int main()
{
    // stringはchar[]として扱える
    char sizeHello[] = "こんにちは！";

    cout << "sizeHello[]を普通に表示すると : " << sizeHello << endl;

    // 3ビットで１文字を表現
    // 配列なので、0番目からスタート
    // 配列の最後は「0」
    // 配列の最後の「0」はヌルターミナル
    for (int i = 0; i < sizeof(sizeHello); i++)
    {
        // sizeHello[i]は普通に表示できないので型変換が必要
        // (int)(unsigned char)を利用
        cout << "sizeHello[" << i << "] : " << (int)(unsigned char)sizeHello[i] << endl;
    }

    return 0;
}