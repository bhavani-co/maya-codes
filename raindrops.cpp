#include <stdio.h>

int main() {
    int N;
    int printed = 0;   // flag to check if any word is printed
    scanf("%d", &N);

    if (N % 3 == 0) {
        printf("Pling");
        printed = 1;
    }
    if (N % 5 == 0) {
        printf("Plang");
        printed = 1;
    }
    if (N % 7 == 0) {
        printf("Plong");
        printed = 1;
    }

    if (!printed) {
        printf("%d", N);
    }

    return 0;
}

