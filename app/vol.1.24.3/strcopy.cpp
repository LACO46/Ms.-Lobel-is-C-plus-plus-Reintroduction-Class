#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[50] = "こんにちは！";
    char str2[50];

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    // 文字列をコピー
    strcpy(str2, str1);

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    return 0;
}