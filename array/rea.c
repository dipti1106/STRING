#include <stdio.h>

int main() {
    int a[6];
    int i; 
    for (i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 6 / 2; i++) {
        int temp = a[i];
        a[i] = a[6 - i - 1];
        a[6 - i - 1] = temp;
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

