/*
【プログラム概要】
0以上の整数を繰り返し入力し、
負の整数が入力されたら終了させ、
合計と平均(小数点以下第2位まで)を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int input = 0; /* 入力値 */

	int total = 0; /* 合計値 */

	int count = 0; /* 入力数 */

	double average; /* 平均値 */

	while (input >= 0) { /* 入力値が「0」以上でループ */

		printf("整数 ==> ");
		scanf("%d", &input); /* 入力 */

		if (input >= 0) { /* 入力値が「0」以上の場合 */

			total += input; /* 「total = total + input;」と同じ */

			count++; /* 入力数にインクリメント */
		}
	}

	printf("合計 = %d\n", total);

	if (count != 0) { /* 入力数が「0」でない場合 */

		average = (double)total / count; /* 「double」でキャストして平均値の計算 */

		printf("平均 = %.2f\n", average);
	}

	return 0;
}

/*
【実行結果1】
整数 ==> 10
整数 ==> 25
整数 ==> 36
整数 ==> -1
合計 = 71
平均 = 23.67

【実行結果2】
整数 ==> 10
整数 ==> 20
整数 ==> 0
整数 ==> 33
整数 ==> -100
合計 = 63
平均 = 15.75

【実行結果3】
整数 ==> -99
合計 = 0

【実行結果4】
整数 ==> 0
整数 ==> 0
整数 ==> 0
整数 ==> -1
合計 = 0
平均 = 0.00
*/