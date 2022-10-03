#include <iostream>

using namespace std;

#define ARRAY_LENGTH 5

// 引数で渡される配列は長さがわからない
// 配列のポインタを引数として受け取る
// void Display(int *array[]) でも意味は同じ
void Display(int array[])
{

    // 配列（ポインタ）の長さを測る
    // 引数で渡された配列のポインタの0番目は配列の長さが格納されている
    // 引数として渡されたポインタの配列にはそのほかにも余分な情報が付与されている
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        // 配列（ポインタ）の値を参照する
        cout << "数値 > " << array[i] << endl;
        cout << "番地 > " << &array[i] << endl;
        cout << endl;
    }
}

int main()
{
    int array[ARRAY_LENGTH];

    // 配列のリストに５の倍数を格納
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        array[i] = i * 5;
    }

    // 関数に配列を引数として渡す
    Display(array);

    return 0;
}