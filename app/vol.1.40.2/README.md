# vol.1.40.2

- `for`でインクリメントと引き算を行う
    ```
    int *p;
    for (p = str; *p; p++);
    ```
    - `p = str`で\*pに\*strを入れる
        - pを１バイトずつ進ませる（１バイトずつ文字を減らしていく）
        - \*pは現在の位置を表している
        - pが0になったら終了
        ```
        *p = 「h」
        p = 「hello world」

        *p = 「e」
        p = 「ello world」

        *p = 「l」
        p = 「llo world」

        *p = 「l」
        p = 「lo world」

        *p = 「o」
        p = 「o world」

        *p = 「 」
        p = 「 world」

        *p = 「w」
        p = 「world」

        *p = 「o」
        p = 「orld」

        *p = 「r」
        p = 「rld」

        *p = 「l」
        p = 「ld」

        *p = 「d」
        p = 「d」
        ```

- `p - str`でインクリメント同士の引き算を行う
    - バイト数の引き算になる