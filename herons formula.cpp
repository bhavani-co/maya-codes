#include <stdio.h>
#include <math.h>   // Required for sqrt()

int main()
{
    int a, b, c;
    double s, area;

    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("%.4lf", area);
    return 0;
}

