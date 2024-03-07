#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a + b = %d", a + b);
    } else {
        printf("a - b = %d", a - b);
    }

    return 0;
}

