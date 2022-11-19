# vol.1.40.1

- `for`で文字列の長さをカウントすることができる
    ```
    int i;
    for (i = 0; str[i] ;i++);
    ```
    - 文字列のカウントは`バイト単位`で行われる
        - 大文字・小文字の英文字は`１文字`が`1バイト`
        - 日本語は`１文字`が`3バイト`
        - 改行コードは含まれない

- 以下のような警告が出るが無視することができる
    ```
        22 |     DisplayLength("hello world");
           |                   ^~~~~~~~~~~~~
        DisplayLength.cpp:23:19: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
        23 |     DisplayLength("坊やだからさ");
           |                   ^~~~~~~~~~~~~~~~~~~~
        DisplayLength.cpp:24:19: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
        24 |     DisplayLength("HELLO WORLD");
           |                   ^~~~~~~~~~~~~
        DisplayLength.cpp:25:19: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
        25 |     DisplayLength("あ");
           |                   ^~~~~
        DisplayLength.cpp:26:19: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
        26 |     DisplayLength("ア");
           |                   ^~~~~
        DisplayLength.cpp:27:19: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
        27 |     DisplayLength("亜");
           |                   ^~~~~
        DisplayLength.cpp:28:19: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
        28 |     DisplayLength("");
           |                   ^~
    ```