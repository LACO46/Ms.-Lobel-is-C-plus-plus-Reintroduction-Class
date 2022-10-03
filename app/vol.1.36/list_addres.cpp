#include <iostream>

using namespace std;

// 関数に渡される前の値の型は char[]
// 関数に渡された時点で配列はポインタになる
// char word[] と char *word は同じ意味になる
void DisplayListPointer(char *word, int word_size)
{
    // 配列そのもののアドレスを取得
    cout << "&array=" << &word << endl;

    for (int i = 0; i < word_size; i++)
    {
        // []から配列のポインタにアクセスできる
        // &をつけることにより配列の各要素のアドレスを取得できる
        cout
            << "word[" << i << "]=" << word[i] << " : &word[" << i << "]=" << &word[i] << endl;
    }
}

int main()
{
    // 12文字の文字列を生成
    char word[] = "hello world";

    for (int i = 0; i < sizeof(word); i++)
    {
        // []から配列のポインタにアクセスできる
        // &をつけることにより配列の各要素のアドレスを取得できる
        cout << "word[" << i << "]=" << word[i] << " : &word[" << i << "]=" << &word[i] << endl;
    }

    cout << endl;

    DisplayListPointer(word, sizeof(word));

    return 0;
}