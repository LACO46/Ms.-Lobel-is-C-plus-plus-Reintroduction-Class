# vol.1.41

- 変数宣言の前に`const`をつけることによって値が変更できなくなる
  - `char *psz`の場合`strcpy(psz, "hello");`で値が変更できる
  - `const char *psz`の場合`strcpy(psz, "hello");`で値が変更できない
    ```
    struct.cpp:17:5: error: no matching function for call to 'strcpy'
        strcpy(psz, "hello");
        ^~~~~~
    /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h:79:7: note: candidate function not viable: 1st argument
        ('const char *') would lose const qualifier
    char    *strcpy(char *__dst, const char *__src);
    ```
- `char *`と`const char *`は別の型として定義されている