# vol.1.42

- `const`を利用した定数の定義
  - `const float gravity = 9.8;`
- `const`を利用したポインタの定義
  - `参照先が変数`になるポインタの定義
    ```
    const char *p1 = "hello";
    cout << p1 << endl;
    p1 = "world";
    cout << p1 << endl;
    ```
    - 上書きできる
  - `参照先が定数`になるポインタの定義
    ```
    char *const p2 = "hello";
    cout << p2 << endl;
    ```
    - 上書きできない