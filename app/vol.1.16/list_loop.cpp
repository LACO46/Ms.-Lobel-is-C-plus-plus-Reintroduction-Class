#include <iostream>
#include <list>

using namespace std;

int main()
{

    // 配列
    // 要素数40
    int nResults[] = {
        641, 703, 405, 598, 402, 752, 330, 0, 445, 662,
        254, 710, 467, 530, 548, 485, 244, 396, 601, 510,
        532, 687, 623, 420, 647, 587, 490, 647, 575, 688,
        764, 633, 712, 312, 655, 425, 722, 631, 680, 602};

    // ループで要素を展開
    int sum = 0;
    for (int i = 0; i < 40; i++)
    {
        sum += nResults[i];
    }

    // 平均点を表示
    cout << sum / 40.0 << endl;

    return 0;
}