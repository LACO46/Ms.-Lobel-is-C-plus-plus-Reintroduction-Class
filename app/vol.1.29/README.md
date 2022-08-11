- vol.1.29

- マクロで定義された文字は、コンパイル時にプログラムの文字列として置き換えられる
  - `#define NUMBER_FIBO 16`
  - コード上に`NUMBER_FIBO`と記述することと、コード上に`16`と記述することは同じ意味になる
- マクロでは、プログラムの一部分を置き換えることができるため、プログラムそのものをマクロにすることができる
  - `#define LOOP(var, time) for (var = 0; var < time; var++)`
    - コード上に`LOOP(var, time)`と記述することと、コード上に`for (var = 0; var < time; var++)`と記述することは同じ意味になる
      - `LOOP()`の引数`var`はfor文の第一引数として、初期値として0で初期化される
      - `LOOP()`の引数`time`はfor文の第二引数として、上限値として利用される
      - `var`と`time`はともに、int型の変数をマクロの引数として割り当てる

  - 通常のfor文では以下のように記述できる・・・①
    ```
    int var;
    int time = 10;
    for (var = 0; var < time; var++){}
    ```
  - マクロと使ったfor文では以下の条に記述できる・・・②
    ```
    int var;
    int time = 10;
    LOOP(var, time){}
    ```
  - ①,②ともに、意味は同一になる