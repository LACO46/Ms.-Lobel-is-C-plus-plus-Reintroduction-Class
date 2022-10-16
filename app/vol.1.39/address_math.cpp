#include <iostream>

using namespace std;

int main()
{

    int array[4];
    // ポインタを表示
    cout << "配列の各要素に格納された数値" << endl;
    cout << "&array[0] = " << (unsigned long int)(&array[0]) << endl;
    cout << "&array[1] = " << (unsigned long int)(&array[1]) << endl;
    cout << "&array[2] = " << (unsigned long int)(&array[2]) << endl;
    cout << "&array[3] = " << (unsigned long int)(&array[3]) << endl;

    // ポインタに加算
    cout << endl;
    cout << "配列の各要素に格納された数値に加算" << endl;
    // +4される
    cout << "&array[0] + 1 = " << (unsigned long int)(&array[0] + 1) << endl;
    // +8される
    cout << "&array[1] + 2 = " << (unsigned long int)(&array[1] + 2) << endl;
    // +12される
    cout << "&array[2] + 3 = " << (unsigned long int)(&array[2] + 3) << endl;
    // +16される
    cout << "&array[3] + 4 = " << (unsigned long int)(&array[3] + 4) << endl;

    // 配列のポインタを生成
    int *p = array;

    cout << endl;
    cout << "配列のポインタ" << endl;
    cout << "*p = " << (unsigned long int)p << endl;

    // 配列のポインタに加算
    cout << endl;
    cout << "配列のポインタに加算（p += 2;）" << endl;
    p += 2;
    // +8される
    cout << "*p' = " << (unsigned long int)p << endl;

    return 0;
}