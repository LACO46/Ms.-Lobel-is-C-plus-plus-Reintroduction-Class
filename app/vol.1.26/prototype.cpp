#include <iostream>

using namespace std;

// プロトタイプを定義
// main()より下に記述された関数を利用できるようにする
// プロトタイプ宣言をせずにmain()より下の関数を利用しようとするとエラーになる
int func1(int x, int y);

int main(){
    cout << "func1(1,2)" << " = " << func1(1, 2) << endl;
    cout << "func1(158,144)" << " = " << func1(158,144) << endl;

    return 0;
}


int func1(int x, int y){
    return 5*x-2*y;
}
