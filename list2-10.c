// 二つの整数値を読み込んで平均値を実数で表示（キャストを使用）

#include <stdio.h>

int main(void)
{
    int a, b;
    puts("二つの整数を入力せよ。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    printf("それらの平均は%fです。\n", (double)(a + b) / 2);

    return 0;
}