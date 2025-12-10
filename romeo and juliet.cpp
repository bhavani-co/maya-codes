#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);

    int total_money = (X * 5) + (Y * 10);
    int chocolates = total_money / Z;

    printf("%d", chocolates);
    return 0;
}

