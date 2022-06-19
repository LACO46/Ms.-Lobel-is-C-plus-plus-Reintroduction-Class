# vol.1.24.4

- 文字列の結合
- 文字列の結合には`strcat()`を利用する
  - 第一引数=追加される文字列のchar[]
  - 第二引数=追加する文字列のchar[]
  - 第一引数に文字列は結合される
  ```
  char str1[] = "hello ";
  char str2[] = "world";

  str1 = hello world
  str2 = world
  ```