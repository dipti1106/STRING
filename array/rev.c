#include <stdio.h>

int main() {
    int a[5];

    printf("Enter array elements: ");
    for (int i = 4; i >= 0; i--) {
        scanf("%d", &a[i]);
    }

    printf("\nReversed array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

