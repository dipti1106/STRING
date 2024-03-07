#include <stdio.h>

int main() {
    int a[5];
    int max;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("The maximum value is: %d\n", max);

    printf("Elements greater than the maximum value: ");
    for (int i = 0; i < 5; i++) {
        if (a[i] > max) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

