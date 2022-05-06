#include <iostream>
using namespace std;

void hello()
{
    cout << "hello world" << endl;
}

void number(int a)
{
    cout << "a = " << a << endl;
}

int main()
{
    hello();
    hello();
    number(1);
    number(2);

    return 0;
}