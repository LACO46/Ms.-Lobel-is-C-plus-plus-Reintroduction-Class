#include <iostream>

using namespace std;

int main()
{
    // 0は数値にすると負数になる可能性がある
    // そこで、unsigned char型キャストしてから、int型にキャストする
    // '0'は打ち切り誤差は発生しない
    // "0"は打ち切り誤差が発生するかもしれない
    cout << "'0'に割り当てられた数値は >> " << (int)(unsigned char)'0' << "です" << endl;

    // ''で出力することで文字の数値が得られる
    cout << "'あ'に割り当てられた数値は >> " << 'あ' << "です" << endl;

    return 0;
}