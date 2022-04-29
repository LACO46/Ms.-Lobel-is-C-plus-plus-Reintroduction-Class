#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    cout << "a > " << a << endl;

    a += 2;
    cout << "a+=2 > " << a << endl;

    a++;
    cout << "a++ > " << a << endl;

    a = a * 5 + a;
    cout << "a*5+a > " << a << endl;

    return 0;
}