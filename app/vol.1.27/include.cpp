#include <iostream>
#include "include.h"

using namespace std;

int main()
{
    Hello();
    return 0;
}

// include.h でプロトタイプ宣言で定義された関数
void Hello()
{
    cout << "hello" << endl;
}