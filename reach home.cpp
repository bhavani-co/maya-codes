#include <stdio.h>

int main() {
    long long X, Y;
    scanf("%lld %lld", &X, &Y);

    long long max_distance = 5 * X;

    if (max_distance >= Y)
        printf("YES");
    else
        printf("NO");

    return 0;
}

