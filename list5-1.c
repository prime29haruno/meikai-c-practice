#include <stdio.h>

int main(void)
{
    int tensu1;
    int tensu2;
    int tensu3;
    int tensu4;
    int tensu5;
    int sum = 0;

    printf("５人の点数を計算せよ。\n");
    printf("１番："); scanf("%d", &tensu1); sum += tensu1;
    printf("２番："); scanf("%d", &tensu2); sum += tensu2;
    printf("３番："); scanf("%d", &tensu3); sum += tensu3;
    printf("４番："); scanf("%d", &tensu4); sum += tensu4;
    printf("５番："); scanf("%d", &tensu5); sum += tensu5;

    printf("合計点：%5d\n", sum);
    printf("平均点：%5.1f\n", (double)sum / 5);

    return 0;
}