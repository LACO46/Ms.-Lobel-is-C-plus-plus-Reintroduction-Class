#include <iostream>

using namespace std;

// 文字列の長さをカウント
int strlen(char *str)
{
    char *p;
    // インクリメントと引き算を行う
    // *p に *str を入れる
    //    pを１バイトずつ進ませる（１バイトずつ文字を減らしていく）
    //    p が０になったら終了
    for (p = str; *p; p++)
        ;

    // インクリメント同士の引き算を行う
    // バイト数の引き算になる
    return p - str;
}

// 文字列を表示
void DisplayLength(char *str)
{
    printf("文字列「%s」の長さは %d バイトです \n", str, strlen(str));
}

int main()
{
    DisplayLength("hello world");
    DisplayLength("坊やだからさ");
    DisplayLength("HELLO WORLD");
    DisplayLength("あ");
    DisplayLength("ア");
    DisplayLength("亜");
    DisplayLength("");
}
