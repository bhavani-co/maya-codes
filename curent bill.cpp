#include <stdio.h>

int main() {
    int units;
    float bill, surcharge, total;

    scanf("%d", &units);

    // Step 1: Calculate base bill
    if (units < 200)
        bill = units * 1.20;
    else if (units < 400)
        bill = units * 1.50;
    else if (units < 600)
        bill = units * 1.80;
    else
        bill = units * 2.00;

    // Step 2: Apply surcharge rule
    if (bill > 400) {
        surcharge = bill * 0.15;   // 15% surcharge
        total = bill + surcharge;
    } else {
        total = bill + 100;        // minimum surcharge Rs. 100
    }

    // Step 3: Print final bill
    printf("%.2f", total);

    return 0;
}

