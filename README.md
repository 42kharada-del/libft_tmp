*This project has been created as part of the 42 curriculum by kharada.*

# Libft

## Description

libftは、42のカリキュラムの一部として作成したC言語の静的ライブラリです。

このプロジェクトの目的は、標準Cライブラリに含まれる基本的な関数を自分で再実装し、文字列処理、メモリ操作、文字判定、数値変換、ファイルディスクリプタへの出力、連結リストの操作についての理解を深めることです。

作成されるライブラリ名は `libft.a` です。

## Instructions

ライブラリを作成するには、次のコマンドを実行します。

```bash
make
```

これにより、rootディレクトリに `libft.a` が作成されます。

オブジェクトファイルを削除するには、次のコマンドを実行します。

```bash
make clean
```

オブジェクトファイルと `libft.a` を削除するには、次のコマンドを実行します。

```bash
make fclean
```

最初から作り直すには、次のコマンドを実行します。

```bash
make re
```

## Library Details

このライブラリには、文字判定、文字列処理、メモリ操作、数値変換、ファイルディスクリプタへの出力、連結リスト操作に関する関数が含まれています。

標準Cライブラリに含まれる一部の関数を、`ft_` という接頭辞を付与して再実装しています。

また、`ft_substr`、`ft_strjoin`、`ft_strtrim`、`ft_split`、`ft_itoa` などの文字列操作を補助する関数も含まれています。

さらに、`t_list` 構造体を用いた単方向連結リストの操作関数も含まれています。

### Part 1 - Libc functions
- ft_isalpha
	`int	ft_isalpha(int c);`
	英字かどうかを調べる。
	引数:
	`c` は、判定したい文字コード。
	戻り値:英字なら1。英字でなければ0。

- ft_isdigit
	`int	ft_isdigit(int c);`
	数字かどうかを調べる。
	引数:
	`c` は、判定したい文字コード。
	戻り値：数字なら１。数字でなければ０。

- ft_isalnum
	`int	ft_isalnum(int c);`
	英字または数字かどうかを調べる。
	引数:
	`c` は、判定したい文字コード。
	戻り値：英数字なら１．英数字でなければ０。

- ft_isascii
	`int	ft_isascii(int c);`
	int c が７ビットのASCII文字集合に入るかどうかを調べる。具体的には、0以上127以下かどうかを調べる。
	引数:
	`c` は、判定したい整数値。
	戻り値：ASCII文字なら１。そうでなければ０。

- ft_isprint
	`int	ft_isprint(int c);`
	int c が表示できるか文字かどうかを調べる。具体的には、スペースを含むASCIIの32以上126以下かどうかを調べる。
	引数:
	`c` は、判定したい文字コード。
	戻り値：表示可能文字なら１。そうでなければ０．

- ft_strlen
	`size_t	ft_strlen(const char *s);`
	文字列の先頭から終端文字`'\0'`までの文字数を数える。終端文字`'\0'`は長さに含めない。
	引数:
	`s` は、長さを調べたい文字列。
	戻り値：文字列の長さ。

- ft_memset
	`void	*ft_memset(void *s, int c, size_t n);`
	指定したメモリの範囲を指定した値で埋める。
	引数:
	`s` は、値を書き込むメモリ領域の先頭アドレス。
	`c` は、書き込む値。
	`n` は、何バイト書き込むか。
	戻り値：最初に渡されたメモリ領域の先頭アドレス。

- ft_bzero
	`void	ft_bzero(void *s, size_t n);`
	`s`から始まるメモリ領域を、先頭から`n`バイト分、0で埋める。
	引数:
	`s` は、0で埋めたいメモリ領域の先頭アドレス。
	`n` は、何バイト0で埋めるか。
	戻り値：なし。

- ft_memcpy
	`void	*ft_memcpy(void *dest, const void *src, size_t n);`
	メモリの内容を別の場所へコピーする。
	ただし、コピー元とコピー先が重なっている場合の動作は保証されていない。
	引数：
	`dest` は、コピー先のメモリ領域。
	`src` は、コピー元のメモリ領域。
	`n` は、何バイトコピーするか。
	戻り値：コピー先の先頭アドレス。

- ft_memmove
	`void	*ft_memmove(void *dest, const void *src, size_t n);`
	重なりのあるメモリ領域でも安全にコピーする。
	'ft_memcpy'とは異なり、コピー元とコピー先が重なっていても安全にコピーできる。
	引数：
	`dest` は、コピー先のメモリ領域。
	`src` は、コピー元のメモリ領域。
	`n` は、何バイトコピーするか。
	戻り値：`dest`、つまりコピー先の先頭アドレス。

- ft_strlcpy
	`size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);`
	文字列を指定サイズ内でコピーする。
	コピー先のサイズが０より大きければ、最後に`'\0'`を入れる。
	引数:
	`dst` は、コピー先の文字列バッファ。
	`src` は、コピー元の文字列。
	`dstsize` は、`dst`に用意されている領域全体のサイズ。
	この`dstsize`には、最後の`'\0'`を入れる分も含まれる。
	戻り値：コピー元文字列の長さ。実際にコピーできた文字数ではなく、本来コピーした文字列の長さ。

- ft_strlcat
	`size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);`
	`dst`の末尾に`src`を連結する。ただし、`dstsize`を超えないように連結する。可能なら最後に`'\0'`を入れる
	引数:
	`dst` は、連結先の文字列バッファ。
	`src` は、後ろに追加したい文字列。
	`dstsize` は、`dst`に用意されている領域全体のサイズ。
	この`dstsize`には、最後の`'\0'`を入れる分も含まれる。
	戻り値:
	作ろうとした文字列全体の長さ。
	通常は、連結前の`dst`の長さ + `src`の長さ。
	ただし、`dstsize`の範囲内で`dst`の終端`'\0'`が見つからない場合は、
	`dstsize + srcの長さ`。

- ft_toupper
	`int	ft_toupper(int c);`
	`c` が小文字なら大文字に変換する。小文字でなければ何もしない。
	引数:
	`c` は、変換したい文字コード。
	戻り値：変換後の文字コード。変換しない場合は元の`c`。

- ft_tolower
	`int	ft_tolower(int c);`
	`c`が大文字なら小文字に変換する。大文字でなければ何もしない。
	引数:
	`c` は、変換したい文字コード。
	戻り値：変換後の文字コード。変換しない場合は元の`c`。

- ft_strchr
	`char	*ft_strchr(const char *s, int c);`
	文字列`s`の中から`c`が最初に現れる位置を探す。終端文字列`'\0'`も検索対象になる。
	引数：
	`s` は、検索対象の文字列。
	`c` は、探したい文字コード。
	戻り値：	見つかった文字へのポインタ。見つからなければNULL。

- ft_strrchr
	`char	*ft_strrchr(const char *s, int c);`
	文字列`s`の中から、`c`が最後に現れる位置を探す。終端文字`'\0'`も検索対象になる。
	引数：
	`s` は、検索対象の文字列。
	`c` は、探したい文字コード。
	戻り値:見つかった文字へのポインタ。見つからなければNULL。

- ft_strncmp
	`int	ft_strncmp(const char *s1, const char *s2, size_t max_n);`
	`s1`と`s2`を先頭から比較する。最大で`n`文字まで比較する。途中で違う文字が見つかったら、そこで比較を終える。`'\0'`に到達した場合も、そこで比較を終える。
	引数:
	`s1` は、比較する1つ目の文字列。
	`s2` は、比較する2つ目の文字列。
	`max_n` は、最大で何文字比較するか。
	戻り値：同じなら0。`s1`側の文字の値が小さければ負の値。`s1`側の文字の値が大きければ正の値。

- ft_memchr
	`void	*ft_memchr(const void *s, int c, size_t n);`
	`s`から始まるメモリ領域を、先頭から`n`バイト分調べる。その中から`c`と同じ値を探す。文字列ではなくメモリを見るので、途中に`'\0'`があっても止まらない。
	引数:
	`s` は、検索対象のメモリ領域。
	`c` は、探したい値。
	`n` は、先頭から何バイト分探すか。
	戻り値:見つかった位置へのポインタ。見つからなければNULL。

- ft_memcmp
	`int	ft_memcmp(const void *s1, const void *s2, size_t n);`
	`s1`と`s2`を先頭から`n`バイト分比較する。途中で違うバイトが見つかったら、そこで比較を終える。文字列ではなくメモリを見るので、途中に`'\0'`があっても止まらない。
	引数:
	`s1` は、比較する1つ目のメモリ領域。
	`s2` は、比較する2つ目のメモリ領域。
	`n` は、何バイト比較するか。
	戻り値:同じなら0。`s1`側の値が小さければ負の値。`s1`側の値が大きければ正の値。

- ft_strnstr
	`char	*ft_strnstr(const char *haystack, const char *needle, size_t len);`
	`haystack`の中から`needle`を探す。ただし、検索する範囲は`haystack`の先頭から`len`文字分まで。
	引数:
	`haystack` は、検索対象の文字列。
	`needle` は、探したい文字列。
	`len` は、`haystack`の先頭から最大で何文字分を検索範囲にするか。
	戻り値:`needle`が見つかった位置へのポインタ。見つからなければNULL。`needle`が空文字列なら、`haystack`の先頭を返す。

- ft_atoi
	`int	ft_atoi(const char *str);`
	先頭の空白を飛ばす。その後に`+`または`-`があれば符号として読む。その後に続く数字を読み取り、int型の整数に変換する。
	引数:`str` は、整数に変換したい文字列。
	戻り値:変換されたint型の整数。数字がなければ0。

- ft_calloc
	`void	*ft_calloc(size_t count, size_t size);`
	`count * size` バイト分のメモリを確保し、確保したメモリ全体を0で初期化する。
	引数:
	`count` は、確保したい要素の数。
	`size` は、1つの要素あたりのバイト数。
	戻り値:
	確保して0で初期化されたメモリ領域へのポインタ。
	メモリ確保に失敗した場合、または `count * size` が `size_t` の範囲を超える場合はNULL。

- ft_strdup
	`char	*ft_strdup(const char *s);`
	`s`と同じ内容の文字列を入れるためのメモリを新しく確保する。そこに`s`の内容をコピーする。
	引数:`s` は、複製したい文字列。
	戻り値:新しく作られた文字列へのポインタ。メモリ確保に失敗した場合はNULL。

### Part 2 - Additional functions
- ft_substr
	`char	*ft_substr(char const *s, unsigned int start, size_t max_len);`
	`s`の`start`番目から、最大`max_len`文字分を切り出す。切り出した文字列は、新しく確保したメモリに入れる。
	引数:`s` は、元になる文字列。`start` は、切り出しを開始する位置。`max_len` は、最大で何文字切り出すか。
	戻り値:切り出した新しい文字列。メモリ確保に失敗した場合はNULL。`start`が文字列の長さ以上の場合は、空文字列を返す。

- ft_strjoin
	`char	*ft_strjoin(char const *s1, char const *s2);`
	`s1`と`s2`を連結した新しい文字列を作る。元の`s1`と`s2`は変更しない。
	引数:`s1` は、前半に置く文字列。`s2` は、後半に置く文字列。
	戻り値:連結後の新しい文字列。メモリ確保に失敗した場合はNULL。

- ft_strtrim
	`char	*ft_strtrim(char const *s1, char const *set);`
	`s1`の先頭と末尾から、`set`に含まれる文字を取り除く。文字列の途中にある文字は取り除かない。
	引数:
	`s1` は、処理対象の文字列。`set` は、取り除きたい文字の集合。
	戻り値:
	先頭と末尾の指定文字を取り除いた新しい文字列。
	メモリ確保に失敗した場合はNULL。

- ft_split
	`char **ft_split(char const *s, char c);`
	`s`を区切り文字`c`で分割する。分割された各文字列を新しく確保する。さらに、それらを指すポインタ配列も新しく確保する。
	引数:
	`s` は、分割したい文字列。
	`c` は、区切り文字。
	戻り値:
	分割された文字列の配列。
	配列の最後にはNULLを入れる。
	メモリ確保に失敗した場合はNULL。

- ft_itoa
	`char	*ft_itoa(int n);`
	整数`n`を、文字列に変換する。負の数なら先頭に`-`を付ける。`INT_MIN`も正しく処理する必要がある。
	引数:`n` は、文字列に変換したいint型の整数。
	戻り値:変換後の新しい文字列。メモリ確保に失敗した場合はNULL。

- ft_strmapi
	`char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));`
	`s`の各文字に`f`を適用する。その結果を使って、新しい文字列を作る。元の文字列`s`は変更しない。
	引数:
	`s` は、処理対象の文字列。
	`f` は、各文字に適用する関数。
	`f`の第1引数には文字の位置番号が入る。
	`f`の第2引数にはその位置の文字が入る。
	戻り値:
	関数`f`を適用した結果の新しい文字列。
	メモリ確保に失敗した場合はNULL。

- ft_striteri
	`void	ft_striteri(char *s, void (*f)(unsigned int, char *));`
	`s`の各文字に`f`を適用する。`f`には文字そのものではなく、文字へのポインタを渡す。そのため、元の文字列`s`を直接変更できる。
	引数:
	`s` は、処理対象の文字列。
	`f` は、各文字に適用する関数。
	`f`の第1引数には文字の位置番号が入る。
	`f`の第2引数にはその文字へのポインタが入る。
	戻り値:なし。

- ft_putchar_fd
	`void	ft_putchar_fd(char c, int fd);`
	文字`c`を、指定された`fd`に出力する。
	引数:
	`c` は、出力したい1文字。
	`fd` は、出力先を表すファイルディスクリプタ。
	戻り値:
	なし。

- ft_putstr_fd
	`void	ft_putstr_fd(char *s, int fd);`
	文字列`s`を、指定された`fd`に出力する。
	引数:
	`s` は、出力したい文字列。
	`fd` は、出力先を表すファイルディスクリプタ。
	戻り値:なし。

- ft_putendl_fd
	`void	ft_putendl_fd(char *s, int fd);`
	文字列`s`を、指定された`fd`に出力する。その後に改行`'\n'`を出力する。
	引数:
	`s` は、出力したい文字列。
	`fd` は、出力先を表すファイルディスクリプタ。
	戻り値:なし。

- ft_putnbr_fd
	`void	ft_putnbr_fd(int n, int fd);`
	整数`n`を文字として、指定された`fd`に出力する。負の数なら`-`も出力する。`INT_MIN`も正しく処理する必要がある。
	引数:
	`n` は、出力したい整数。
	`fd` は、出力先を表すファイルディスクリプタ。
	戻り値:なし。

### Part 3 - linked list
- ft_lstnew
	`t_list	*ft_lstnew(void *content);`
	新しいリスト要素を1つ作る。作った要素の`content`に、引数`content`を入れる。作った要素の`next`にはNULLを入れる。
	引数:
	`content` は、新しいリスト要素に入れたいデータへのポインタ。
	戻り値:
	新しく作ったリスト要素へのポインタ。
	メモリ確保に失敗した場合はNULL。

- ft_lstadd_front
	`void	ft_lstadd_front(t_list **lst, t_list *new);`
	`new`をリストの先頭に追加する。もともとの先頭要素は、`new->next`につなぐ。その後、リストの先頭を`new`に変更する。
	引数:
	`lst` は、リストの先頭ポインタを指すポインタ。
	つまり、先頭ポインタそのものを書き換えるために`t_list **`になっている。
	`new` は、先頭に追加したい新しい要素。

- ft_lstsize
	`int	ft_lstsize(t_list *lst);`
	リストを先頭から最後までたどる。要素の数を数える。
	引数:
	`lst` は、数えたいリストの先頭要素。
	戻り値:
	リストの要素数。

- ft_lstlast
	`t_list	*ft_lstlast(t_list *lst);`
	リストを先頭から順番にたどる。`next`がNULLになっている最後の要素を探す。
	引数:
	`lst` は、探したいリストの先頭要素。
	戻り値:
	最後の要素へのポインタ。
	リストが空ならNULL。

- ft_lstadd_back
	`void	ft_lstadd_back(t_list **lst, t_list *new);`
	`new`をリストの最後に追加する。リストが空なら、`new`を先頭要素にする。リストが空でなければ、最後の要素の`next`に`new`をつなぐ。
	引数:
	`lst` は、リストの先頭ポインタを指すポインタ。リストが空の場合、先頭ポインタそのものを書き換える必要があるため`t_list **`になっている。
	`new` は、末尾に追加したい新しい要素。
	戻り値:なし。

- ft_lstdelone
	`void	ft_lstdelone(t_list *lst, void (*del)(void *));`
	`del`を使って、`lst->content`を削除する。その後、`lst`本体を`free`する。ただし、次の要素までは削除しない。
	引数:
	`lst` は、削除したいリスト要素。
	`del` は、`lst->content`を削除するための関数。
	戻り値:なし。

- ft_lstclear
	`void	ft_lstclear(t_list **lst, void (*del)(void *));`
	リスト全体を先頭から順番に削除する。各要素について、まず`del`で`content`を削除する。
その後、要素本体を`free`する。最後に、先頭ポインタをNULLにする。
	引数:
	`lst`は、リストの先頭ポインタを指すポインタ。
	削除後に先頭ポインタをNULLにするため、`t_list **`になっている。
	`del` は、各要素の`content`を削除するための関数。
	戻り値:
	なし。

- ft_lstiter
	`void	ft_lstiter(t_list *lst, void (*f)(void *));`
	リストを先頭から順番にたどる。各要素の`content`に対して`f`を実行する。新しいリストは作らない。
	引数:
	`lst` は、処理対象のリストの先頭要素。
	`f` は、各要素の`content`に適用する関数。
	戻り値:
	なし。

- ft_lstmap
	`t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
	元のリストを先頭から順番にたどる。各要素の`content`に`f`を適用する。その結果を`content`として持つ新しいリストを作る。元のリストは変更しない。途中でメモリ確保に失敗した場合は、それまでに作った新しいリストを`del`で削除する。
	引数:
	`lst` は、元になるリストの先頭要素。
	`f` は、各要素の`content`に適用する関数。
	`del` は、失敗時に`content`を削除するための関数。
	戻り値:
	新しく作ったリストの先頭要素へのポインタ。
	メモリ確保に失敗した場合はNULL。

## Resources

このプロジェクトでは、以下の資料を参考にしました。

- 42 Libft subject
- Linux man pages
- GNU Make に関する資料
- C言語の標準ライブラリに関する資料
- ポインタ、メモリ管理、静的ライブラリ、連結リストに関する資料

## AI Usage

AIは、主に学習補助として使用しました。具体的には、エラーメッセージの意味の確認、Makefileの動作説明、ポインタやメモリ操作の理解、連結リスト関数の考え方の整理、テスターの使い方の確認に使用しました。

AIが提示した内容は、そのまま提出物として用いるのではなく、自分でコンパイル、Norminette、テスターを実行して確認しました。
