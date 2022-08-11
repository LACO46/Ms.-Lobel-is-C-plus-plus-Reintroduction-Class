#include <iostream>

using namespace std;

// マクロの定義
// "16（int）"を"NUMBER_FIBO"という名前で置き換える
#define NUMBER_FIBO 16

// "for()"を"LOOP()"という名前で置き換える
// LOOP()の引数に"var"と"time"を設定
// for()ではLOOP()の"var"と"time"を利用
//   引数"var"はint型の変数を入れる
//   引数"time"はint型の変数を入れる
#define LOOP(var, time) for (var = 0; var < time; var++)

int main()
{
    int i;
    // マクロを使って配列を定義
    int nFibo[NUMBER_FIBO] = {1, 1};

    // マクロで定義されたLOOP()を利用
    // 定義されたマクロはコンパイルされるとプログラムの文字列として置き換えられる
    LOOP(i, NUMBER_FIBO - 2)
    {
        // フィボナッチ数列を計算
        nFibo[i + 2] = nFibo[i] + nFibo[i + 1];
    }

    // マクロで定義されたLOOP()を利用
    // 定義されたマクロはコンパイルされるとプログラムの文字列として置き換えられる
    LOOP(i, NUMBER_FIBO - 1)
    {
        cout << nFibo[i] << ", ";
    }

    // iはそのまま数値が保存される
    cout << nFibo[i] << " です。" << endl;

    return 0;
}