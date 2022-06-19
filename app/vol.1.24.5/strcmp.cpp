#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "hello world";
    char str2[] = "hello world";
    char str3[] = "こんにちは！";

    // 一致している場合
    cout << "strcmp(str1, str2) = " << strcmp(str1, str2) << endl;

    // 一致していない場合
    cout << "strcmp(str1, str3) = " << strcmp(str1, str3) << endl;

    return 0;
}