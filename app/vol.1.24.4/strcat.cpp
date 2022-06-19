#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "hello ";
    char str2[] = "world";

    // 文字列を結合
    strcat(str1, str2);

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    return 0;
}