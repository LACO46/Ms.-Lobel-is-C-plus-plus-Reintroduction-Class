# vol.1.24.6

- char[]内に特定の文字列が最初に現れるアドレスを返すには、`strchr()`を利用する
  - 第一引数=`char[]`を指定する
  - 第二引数=`char*`を指定する
    - `""`の場合charもしくはchar[]となる
    - `''`の場合char*となる
  - 特定の文字列が発見されなかった場合`NULL`を返す
    ```
    char *word1 = strrchr(str1, 'l');
    char *word2 = strrchr(str1, 'b');

    strchr(str1, 'l') = llo world
    strchr(str1, 'b') = 
    ```