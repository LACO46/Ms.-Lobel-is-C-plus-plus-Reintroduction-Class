# vol.1.36

- 生成した配列は`連続したメモリの番地`に格納される
  ```
    word[0]=h : &word[0]=hello world
    word[1]=e : &word[1]=ello world
    word[2]=l : &word[2]=llo world
    word[3]=l : &word[3]=lo world
    word[4]=o : &word[4]=o world
    word[5]=  : &word[5]= world
    word[6]=w : &word[6]=world
    word[7]=o : &word[7]=orld
    word[8]=r : &word[8]=rld
    word[9]=l : &word[9]=ld
    word[10]=d : &word[10]=d
    word[11]= : &word[11]=
  ```

- 関数の引数に配列を渡すことができる
  - 渡された配列の引数は配列のポインタが渡される
    - 関数に渡される前の値の型は`char[]`
    - 関数に渡された時点で配列はポインタになる
    - `char word[]` と `char *word` は同じ意味になる
  - 配列のポインタの各要素は連続したメモリ番地を示している
    ```
    &array=0x7fff1f6b76c8
    word[0]=h : &word[0]=hello world
    word[1]=e : &word[1]=ello world
    word[2]=l : &word[2]=llo world
    word[3]=l : &word[3]=lo world
    word[4]=o : &word[4]=o world
    word[5]=  : &word[5]= world
    word[6]=w : &word[6]=world
    word[7]=o : &word[7]=orld
    word[8]=r : &word[8]=rld
    word[9]=l : &word[9]=ld
    word[10]=d : &word[10]=d
    word[11]= : &word[11]=
    ```
  - 関数に渡す前は`char[]`だが、関数に渡した後は`char*`になるので、同一の値にならない可能性がある