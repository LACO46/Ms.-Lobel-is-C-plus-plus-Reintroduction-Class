# vol.1.24.1

- stringを扱うためのモジュール
  - `#include <cstring>`を`string.h`の代わりに読み込む

- `char[]`の長さ数える方法
  - `null char`はchar[]の最後の部分
  - `sizeof(char[])`はnull charは数えられる
  - `strlen(char[])`はnull charは数えられない