#include <stdio.h>

int main()
 {
    int N;
    scanf("%d", &N);
    int arr[N];
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];  
    for (i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d", max);

    return 0;
}

