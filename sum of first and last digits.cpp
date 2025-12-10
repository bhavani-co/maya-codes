#include <stdio.h>

int main() {
    int N, original, first, last;
    scanf("%d", &N);

    original = N;      // store original number
    last = N % 10;     // last digit

    while (N >= 10) {
        N = N / 10;
    }
    first = N;         // first digit

    printf("%d", first + last);

    return 0;
}

