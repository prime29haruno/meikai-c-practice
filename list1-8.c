// 二つの変数に整数値を代入して表示

#include <stdio.h>

int main(void)
{
    int x, y; //xとyはint型の変数

    x = 57;
    y = x + 12;

    printf("xの値は%dです。\n", x);
    printf("yの値は%dです。\n", y);

    return 0;
}