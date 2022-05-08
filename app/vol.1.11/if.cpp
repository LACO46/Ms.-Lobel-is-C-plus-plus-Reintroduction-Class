#include <iostream>

using namespace std;

void birthmonth(int month)
{
    // 条件分岐
    if (1 <= month && month <= 12)
    {
        // 1~12の間なら
        cout << month << "月生まれなんですね" << endl;
    }
    else
    {
        // それ以外なら
        cout << "嘘つけ〜" << endl;
    }
}

int main()
{
    // 入力１
    int month1 = 1;
    cout << "何月生まれ？ >> ";
    cin >> month1;
    birthmonth(month1);

    // 入力２
    int month2 = 1;
    cout << "何月生まれ？ >> ";
    cin >> month2;
    birthmonth(month2);

    return 0;
}