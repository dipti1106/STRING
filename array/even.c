#include <stdio.h>

int main() {
    int a[10], even = 0, odd = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            even = even + a[i];
        } else {
            odd = odd + a[i];
        }
    }

    printf("Sum of even indices: %d\n", even);
    printf("Sum of odd indices: %d\n", odd);

    return 0;
}

