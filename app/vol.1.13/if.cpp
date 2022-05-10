#include <iostream>

using namespace std;

void Points()
{
    int point;

    cout << "テストは何点でしたか > ";
    cin >> point;

    // 0点以上 , 100点以下ならそのまま出力
    // 0点以下 , 100点以上ならなら0にする
    // ifの条件がTrue=1 , False=0
    cout << "へー、" << point * (0 <= point && point <= 100) << "点でしたか" << endl;
}

int main()
{
    Points();
    Points();
    return 0;
}