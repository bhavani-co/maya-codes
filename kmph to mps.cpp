#include <stdio.h>

int main() {
    float speed, mps;
    scanf("%f", &speed);

    mps = speed * 5.0 / 18.0;

    printf("%.2f", mps);

    return 0;
}

