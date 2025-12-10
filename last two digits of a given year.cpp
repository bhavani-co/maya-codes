#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    int last_two = year % 100;

    printf("%02d", last_two);

    return 0;
}

