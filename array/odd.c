#include <stdio.h>

int main() {
    int a[10], c1 = 0, c2 = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            c1 = c1 + a[i];
        } else {
            c2 = c2 + a[i];
        }
    }

    printf("Sum of c1 indices: %d\n", c1);
    printf("Sum of c2 indices: %d\n", c2);

    return 0;
}

