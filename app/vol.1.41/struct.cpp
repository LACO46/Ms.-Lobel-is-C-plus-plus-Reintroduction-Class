#include <iostream>

using namespace std;

char *normal_struct(char *psz)
{
    // 値の変更ができる
    strcpy(psz, "hello");

    return psz;
}

const char *const_struct(const char *psz)
{
    // 値を変更しようとするとエラーになる
    // 前に'const'がついているから
    strcpy(psz, "hello");

    return psz;
}

int main()
{
    char szPath[] = "/hello/my/name/is/user";

    // 通常の検証
    cout << normal_struct(szPath) << endl;
    // constを使った検証
    cout << const_struct(szPath) << endl;
}