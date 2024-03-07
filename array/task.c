#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m = 6;
    int k = m / 2;

    for (int i = 0; i < k / 2; i++) {
        int temp = a[i];
        a[i] = a[k - 1 - i];
        a[k - 1 - i] = temp;
    }

    for (int i = 0; i < k / 2; i++) {
        int temp = a[k + i];
        a[k + i] = a[m - 1 - i];
        a[m - 1 - i] = temp;
    }

    for (int i = 0; i < m / 2; i++) {
        int temp = a[i];
        a[i] = a[m - 1 - i];
        a[m - 1 - i] = temp;
    }
    
    for (int i = 0; i < m; i++) {
        printf("%d ", a[i]);
    }

    for (int i = m; i < sizeof(a) / sizeof(a[0]) - 1; i++) {
        printf("%d ", a[i]);
    }

    // Print the last element as it is
    printf("%d", a[sizeof(a) / sizeof(a[0]) - 1]);

    return 0;
}

