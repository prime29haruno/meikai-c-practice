// 二つの整数値の和・差・積・商・剰余を表示

#include <stdio.h>

int main(void)
{
    int x, y;

    puts("二つの整数を入力せよ。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);

    printf("x + y = %d\n", x + y);
    printf("x + y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);

    return 0;
}