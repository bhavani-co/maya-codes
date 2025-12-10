#include <stdio.h>

int main() {
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);

    int score = A + 2 * B;

    if (score >= X)
        printf("Qualify");
    else
        printf("Not Qualify");

    return 0;
}

