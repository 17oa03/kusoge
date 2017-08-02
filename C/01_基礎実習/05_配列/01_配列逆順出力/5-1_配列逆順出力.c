/*
【プログラム概要】
標準入力より整数を5個入力し、
入力順とは逆に標準出力に出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define YOUSO 5 /* 文字列「YOUSO」を文字列「5」にマクロ置換 */

int main(void)
{
	int ary[YOUSO]; /* 要素数「5」の配列を宣言 */

	int i; /* カウンタ変数 */

	for (i = 0; i < YOUSO; i++) { /* 「i」は、0→1→2→3→4→5でループを抜ける */

		printf("整数 ==> ");
		scanf("%d", &ary[i]); /* 入力 */
	}

	printf("---逆順出力---\n");

	for (i--; i >= 0; i--) { /* 初期化式で「i」をデクリメントして添字に合わせる */

		printf("%9d\n", ary[i]);
	}

	return 0;
}

/*
【実行結果】
整数 ==> 34
整数 ==> -5
整数 ==> 123
整数 ==> 0
整数 ==> -21
---逆順出力---
      -21
        0
      123
       -5
       34
*/