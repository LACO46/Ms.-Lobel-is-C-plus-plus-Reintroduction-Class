#include <iostream>

// 文字列の長さをカウント
int strlen(char *str)
{
    int i;
    // str に i を足したアドレスを取得
    // *(str + i) というのは str[i] と同一の意味になる
    for (i = 0; *(str + i); i++)
        ;
    return i;
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
