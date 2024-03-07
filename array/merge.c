#include <stdio.h>

int main() {
    int a[5], b[5], c[10];
    int i, j, k;

    printf("Enter 5 elements for the first sorted array: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 elements for the second sorted array: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    i = j = k = 0;

    while (i < 5 && j < 5) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < 5) {
        c[k++] = a[i++];
    }

    while (j < 5) {
        c[k++] = b[j++];
    }

    printf("Merged and sorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

