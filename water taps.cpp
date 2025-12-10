#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d", &X);
    scanf("%d", &Y);

    int time = (X * Y) / (X + Y);

    printf("%d", time);

    return 0;
}

