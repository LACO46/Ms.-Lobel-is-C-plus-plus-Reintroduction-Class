# vol.1.31

- 変数や関数を定義すると、`メモリ（DRAM）`に展開される
- 展開されたメモリの場所を、`アドレス`という
- アドレスにアクセスするには、変数の前に`&`をつけることでアドレスを確認できる
  ```
  int a;
  cout << &a << endl;
  ```
- 配列のアドレスを確認する場合は`&`をつける必要はない
  - つけても値は変わらない
  ```
  int b[10];
  cout << b << endl;
  cout << &b << endl;
  ```
- 関数の場合は、関数名の後に`()`をつけないことによってアドレスを確認できる
  - 関数名に()をつけると、再起的呼び出しになってしまうため、無限ループになる可能性があるので注意が必要
  ```
  int main() {
      cout << main << endl;
      return 0;
  }
  ```
- 実行のたびに、格納されるアドレスは変わる
  ```
  ubuntu@workspace:~/workspace/app/vol.1.31$ ./address.out 
  ========== 上書き前 ==========
  &a =>0x7ffc54348238
  &b => 0x7ffc54348240
  b => 0x7ffc54348240
  main() => 1
  ========== 上書き後 ==========
  &a =>0x7ffc54348238
  &b => 0x7ffc54348240
  b => 0x7ffc54348240
  main() => 1
  ubuntu@workspace:~/workspace/app/vol.1.31$ ./address.out 
  ========== 上書き前 ==========
  &a =>0x7fff3d2720c8
  &b => 0x7fff3d2720d0
  b => 0x7fff3d2720d0
  main() => 1
  ========== 上書き後 ==========
  &a =>0x7fff3d2720c8
  &b => 0x7fff3d2720d0
  b => 0x7fff3d2720d0
  main() => 1
  ubuntu@workspace:~/workspace/app/vol.1.31$ 
  ```