#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数n1："); scanf("%d", &n1);
    printf("整数n2："); scanf("%d", &n2);

    int max;
    if (n1 > n2) max = n1; else max = n2;
    printf("大きいほうの値は%dです。\n", max);

    return 0;
}