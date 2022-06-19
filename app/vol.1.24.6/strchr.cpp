#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "hello world";

    // 指定した文字が最初に現れるアドレスを返す
    // 見つからなければnull（何もない）を返す
    char *word1 = strchr(str1, 'l');
    char *word2 = strchr(str1, 'b');

    cout << "strchr(str1, 'l') = " << word1 << endl;
    cout << "strchr(str1, 'b') = " << word2 << endl;

    return 0;
}