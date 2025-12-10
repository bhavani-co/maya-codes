#include <stdio.h>

int main() {
    int D, years, weeks, rem;
    scanf("%d", &D);

    years = D / 365;
    rem = D % 365;
    weeks = rem / 7;

    printf("%d", years);
    printf("%d", weeks);

    return 0;
}

