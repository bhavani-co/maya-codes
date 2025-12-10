#include <stdio.h>

int main() {
    int X, Y, R;
    scanf("%d %d %d", &X, &Y, &R);

    int extra = R / 30;
    int total_eaten = X + extra;

    int plates = (total_eaten + Y - 1) / Y;

    printf("%d", plates);

    return 0;
}

