/*
【プログラム概要】
試験の点数を入力し、
合否の判定を出力する。
試験は、午前試験と午後試験があり、
両方とも60点以上の場合に合格、それ以外は不合格とする。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int tensu1, tensu2;

	printf("午前試験点数 ==> ");
	scanf("%d", &tensu1); /* 午前点数の入力 */

	if (tensu1 < 60) { /* 「tensu1」が「60」より大きい場合 */
		printf("不合格です。\n");
	}
	else /* それ以外の場合 */
	{
		printf("午後試験点数 ==> ");
		scanf("%d", &tensu2); /* 午後点数の入力 */

		if (tensu2 < 60) { /* 「tensu2」が「60」より大きい場合 */
			printf("不合格です。\n");
		}
		else /* それ以外の場合 */
		{
			printf("合格です。\n");
		}
	}

	return 0;
}

/*
【実行結果1】
午前試験点数 ==> 60
午後試験点数 ==> 60
合格です。

【実行結果2】
午前試験点数 ==> 100
午後試験点数 ==> 59
不合格です。

【実行結果3】
午前試験点数 ==> 59
不合格です。
*/