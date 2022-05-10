#include <iostream>

using namespace std;

int ConvertToShohwa(int year)
{
    if (1926 <= year && year <= 1989)
    {
        return year - 1925;
    }
    else
    {
        return 0;
    }
}

void Shohwa()
{
    int year;
    cout << "西暦を入力してください > ";
    cin >> year;

    if (ConvertToShohwa(year) == 0)
    {
        cout << "その年は昭和ではありません" << endl;
    }
    else
    {
        cout << "その年は昭和 " << ConvertToShohwa(year) << "年です" << endl;
    }
}

int main()
{
    Shohwa();
    Shohwa();

    return 0;
}