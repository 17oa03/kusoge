/*
【プログラム概要】
リダイレクト入力とリダイレクト出力により、
ファイルをコピーする。

※コマンドプロンプトにて、
　「実行ファイル名 < bmi1.dat > bmi2.dat」を入力する。
 */

 /*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int num;

	double sintyo, taiju;

	int end_flag; /* ファイル終端フラグ */

	end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju); /* 入力 */

	while (end_flag != EOF) { /* ファイル終端までループ */

		printf("%d %.2f %.1f \n", num, sintyo, taiju);

		end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju); /* 入力 */
	}

	return 0;
}

/*
【実行結果】
1 1.72 65.8
2 1.80 55.5
3 1.51 46.2
4 1.65 75.1
5 1.69 60.7
*/