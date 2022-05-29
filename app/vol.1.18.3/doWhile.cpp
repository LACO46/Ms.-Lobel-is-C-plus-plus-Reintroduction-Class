#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    // do{...}while{,,,}の
    //   ,,,が一致しなくても
    //    ...は１回は実行される
    do
    {
        cout << i << endl;
    } while (i != 0);

    return 0;
}