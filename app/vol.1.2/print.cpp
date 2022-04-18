#include <iostream>
using namespace std;

int main()
{
    cout << "hello"
         << " "
         << "world" << endl; // とりあえずいつもの
    cout << "2"
         << "+"
         << "3"
         << "="
         << "5" << endl;    // 改行する
    cout << "aaa" << flush; // 改行しない
    return 0;
}