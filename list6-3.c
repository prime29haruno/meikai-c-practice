#include <stdio.h>

int spr(int n)
{
    return n * n;
}

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main(void)
{
    int x, y;

    puts("二つの整数を入力せよ。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);

    printf("xの2乗とyの2乗の差は%dです。\n", diff(spr(x), spr(y)));

    return 0;
}