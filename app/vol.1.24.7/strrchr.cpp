#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "hello world";

    // 指定した文字が最後に現れるアドレスを返す
    // 見つからなければnull（何もない）を返す
    char *word1 = strrchr(str1, 'l');
    char *word2 = strrchr(str1, 'b');

    cout << "strrchr(str1, 'l') = " << word1 << endl;
    cout << "strrchr(str1, 'b') = " << word2 << endl;
}