#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);

    printf("それらの差は%dです。\n", n1 > n2 ? n1 - n2 : n2 - n1);

    return 0;
}